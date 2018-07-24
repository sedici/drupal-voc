# AuthVoc


## Anexo - Enlaces para pruebas

A continuación se especifican algunos enlaces para utilizar la herramienta desarrollada en un servidor de pruebas http://tesis-pda.sedici.unlp.edu.ar/auth.

### Repositorio SEDICI de prueba
http://tesis-pda.sedici.unlp.edu.ar/tesina/
	
### Sistema de gestión de vocabularios controlados
http://tesis-pda.sedici.unlp.edu.ar/auth
Usuario: editorprueba
Pass: editorprueba!

### Endpoint SPARQL
http://tesis-pda.sedici.unlp.edu.ar/auth/sparql

### Consultas de prueba

[Listado de autores y sus filiaciones](http://tesis-pda.sedici.unlp.edu.ar/auth/sparql?query=PREFIX+dc%3A+<http%3A%2F%2Fpurl.org%2Fdc%2Fterms%2F>%0D%0APREFIX+sioc%3A+<http%3A%2F%2Frdfs.org%2Fsioc%2Fns%23>%0D%0APREFIX+foaf%3A+<http%3A%2F%2Fxmlns.com%2Ffoaf%2F0.1%2F>%0D%0APREFIX+cerif%3A+<http%3A%2F%2Fspi-fm.uca.es%2Fneologism%2Fcerif%2F1.3%23>%0D%0A%0D%0ASELECT+%3Fperson+%3Fname+%3Fsurname+%3Flink%0D%0AWHERE+%7B%0D%0A++%3Fperson+a+foaf%3APerson+%3B+%0D%0A++++foaf%3AgivenName+%3Fname+%3B+%0D%0A++++foaf%3Asurname+%3Fsurname+%3B+%0D%0A++++cerif%3AlinksToOrganisationUnit+%3Flink.+%0D%0A%7D%0D%0A&output=htmltab&jsonp=&key=&show_inline=1)

[Listado de instituciones](http://tesis-pda.sedici.unlp.edu.ar/auth/sparql?query=PREFIX+sioc%3A+<http%3A%2F%2Frdfs.org%2Fsioc%2Fns%23>%0D%0APREFIX+foaf%3A+<http%3A%2F%2Fxmlns.com%2Ffoaf%2F0.1%2F>%0D%0A%0D%0ASELECT+%3Finst+%3Fname+%3Finit%0D%0AWHERE+%7B%0D%0A++%3Finst+a+foaf%3AOrganization+%3B+%0D%0A++++foaf%3Aname+%3Fname+%3B+%0D%0A++++sioc%3Aid+%3Finit+.+%0D%0A%7D%0D%0A&output=htmltab&jsonp=&key=&show_inline=1)

[Consulta que retorna un grafo con autores con apellido Martinez o nombre Juan y sus filiaciones](http://tesis-pda.sedici.unlp.edu.ar/auth/sparql?query=PREFIX++rdf%3A++<http%3A%2F%2Fwww.w3.org%2F1999%2F02%2F22-rdf-syntax-ns%23>%0D%0APREFIX++foaf%3A+<http%3A%2F%2Fxmlns.com%2Ffoaf%2F0.1%2F>%0D%0APREFIX++dc%3A+++<http%3A%2F%2Fpurl.org%2Fdc%2Fterms%2F>%0D%0APREFIX++cerif%3A+<http%3A%2F%2Fspi-fm.uca.es%2Fneologism%2Fcerif%2F1.3%23>%0D%0APREFIX++sioc%3A+<http%3A%2F%2Frdfs.org%2Fsioc%2Fns%23>%0D%0A%0D%0ACONSTRUCT+%0D%0A++%7B+%3Fperson+rdf%3Atype+foaf%3APerson+.%0D%0A++++%3Fperson+foaf%3AgivenName+%3Fname+.%0D%0A++++%3Fperson+foaf%3Ambox+%3Fmail+.%0D%0A++++%3Fperson+foaf%3Asurname+%3Fsurname+.%0D%0A++++%3Fperson+cerif%3AlinksToOrganisationUnit+%3Flink+.%0D%0A++++%3Flink+cerif%3AstartDate+%3Finicio+.%0D%0A++++%3Flink+cerif%3AendDate+%3Ffin+.%0D%0A++++%3Flink+foaf%3AOrganization+%3Forg+.%0D%0A++++%3Forg+foaf%3Aname+%3Faffiliation+.%0D%0A++++%3Forg+sioc%3Aid+%3Fid+.%7D%0D%0AWHERE%0D%0A++%7B+%3Fperson++rdf%3Atype+++++++++foaf%3APerson+%3B%0D%0A+++++++++++++foaf%3AgivenName+++%3Fname+%3B%0D%0A+++++++++++++foaf%3Asurname++%3Fsurname+.%0D%0A++++OPTIONAL%0D%0A++++++%7B+%3Fperson++foaf%3Ambox++%3Fmail+.+%7D%0D%0A++++OPTIONAL%0D%0A++++++%7B+%3Fperson++cerif%3AlinksToOrganisationUnit++%3Flink+.%0D%0A++++++++%3Flink++++cerif%3AstartDate+++++++%3Finicio+%3B%0D%0A+++++++++++++++++cerif%3AendDate+++++++++%3Ffin+%3B%0D%0A+++++++++++++++++foaf%3AOrganization+++++%3Forg+.%0D%0A++++++++%3Forg+++++foaf%3Aname+++++++++++++%3Faffiliation+%3B%0D%0A+++++++++++++++++sioc%3Aid+++++++++++++++%3Fid+.%0D%0A++++++%7D%0D%0A++++FILTER+%28+%28+regex%28%3Fname%2C+"Juan"%2C+"i"%29+%7C%7C+regex%28%3Fsurname%2C+"Martinez"%2C+"i"%29+%29++%29%0D%0A++%7D%0D%0AORDER+BY+%3Fsurname+%3Flink%0D%0AOFFSET++0%0D%0ALIMIT+++50%0D%0A&output=rdfxml&jsonp=&key=&show_inline=1)

### Link al código fuente del conector

[Fuente en GitHub](https://github.com/sedici/DSpace/tree/sparqlAuthorityProviders)

### Link al código fuente del módulo de autoridades
https://github.com/PabloDeAlbu/auth-voc

