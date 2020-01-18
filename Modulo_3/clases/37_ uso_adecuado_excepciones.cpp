Textura* cargarTextura(const char* ruta){
	FILE *entrada = NULL;
	Textura *pTextura = NULL;

	try{
		entrada = fopen(ruta, "rb");

		//Instanciar recursos locales...
		pTextura = new Textura(/*********/);
		leerTextura(entrada, pTextura);
	}
	catch(...){
		//Liberar memoria ante un error
		delete pTextura;
		pTextura = NULL;
	}

	fclose(entrada);
	return pTextura;
}