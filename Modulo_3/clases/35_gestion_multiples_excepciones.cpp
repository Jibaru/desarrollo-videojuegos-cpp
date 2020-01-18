// 35_gestion_multiples_excepciones.cpp
void Mesh::cargar ( const char *archivo ){
	try{
		Stream stream(archivo);
		cargar(stream);
	}
	catch(MiExcepcionIO &e){
		// Gestionar error I/O
	}
	catch(MiExcepcionMatematica &e){
		// Gestionar error matemático
	}
	catch(MiExcepcion &e){
		// Gestionar otro error
	}
	catch(...){
		// Cualquier otro tipo de error
	}
}