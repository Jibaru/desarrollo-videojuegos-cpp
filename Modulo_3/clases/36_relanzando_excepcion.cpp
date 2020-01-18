void Mesh::cargar(const char *archivo){

	try {
		Stream stream(archivo);
		cargar(stream);
	}
	catch(MiExcepcionIO &e){
		if(e.datosCorruptos()){
			// Tratar error I/O
		}
		else{
			throw; // Se relanza la excepcion
		}
	}
}