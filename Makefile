.PHONY: up down stop prune ps shell drush logs bash
include .env

default: up

DRUPAL_ROOT ?= /var/www/html

up:
	@echo "Starting up containers for $(PROJECT_NAME)..."
	docker-compose pull
	docker-compose up -d --remove-orphans

down: stop

stop:
	@echo "Stopping containers for $(PROJECT_NAME)..."
	@docker-compose stop

prune:
	@echo "Removing containers for $(PROJECT_NAME)..."
	@docker-compose down -v

ps:
	@docker ps --filter name='$(PROJECT_NAME)*'

shell:
	docker exec -ti -e COLUMNS=$(shell tput cols) -e LINES=$(shell tput lines) $(shell docker ps --filter name='$(PROJECT_NAME)_drupal' --format "{{ .ID }}") sh

bash:
	docker exec -ti -e COLUMNS=$(shell tput cols) -e LINES=$(shell tput lines) $(shell docker ps --filter name='$(PROJECT_NAME)_drupal' --format "{{ .ID }}") /bin/bash

drush:
	docker exec $(shell docker ps --filter name='$(PROJECT_NAME)_drupal' --format "{{ .ID }}") drush -r $(DRUPAL_ROOT) $(filter-out $@,$(MAKECMDGOALS))

cc:
	docker exec $(shell docker ps --filter name='$(PROJECT_NAME)_drupal' --format "{{ .ID }}") drush -r $(DRUPAL_ROOT) cc all ; \

install:
	docker exec $(shell docker ps --filter name='$(PROJECT_NAME)_drupal' --format "{{ .ID }}") drush -r $(DRUPAL_ROOT) site-install standard --db-url=mysql://root:$(MYSQL_ROOT_PASSWORD)@$(PROJECT_NAME)_mariadb:3306/$(DB_NAME) install_configure_form.site_default_country=AR --account-name=$(DB_USER) --account-pass=$(DB_PASSWORD) install_configure_form.enable_update_status_module=NULL install_configure_form.enable_update_status_emails=NULL $(filter-out $@,$(MAKECMDGOALS)) -y ; \
	docker exec $(shell docker ps --filter name='$(PROJECT_NAME)_drupal' --format "{{ .ID }}") drush -r $(DRUPAL_ROOT) en authvoc diff -y
	docker exec $(shell docker ps --filter name='$(PROJECT_NAME)_drupal' --format "{{ .ID }}") drush -r $(DRUPAL_ROOT) fra -y

logs:
	@docker-compose logs -f $(filter-out $@,$(MAKECMDGOALS))

# https://stackoverflow.com/a/6273809/1826109
%:
	@:
