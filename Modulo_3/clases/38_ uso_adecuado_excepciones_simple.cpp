Textura* cargarTextura(const char* ruta){
	FilePtr entrada(ruta, "rb");

	// Instanciar recursos locales...
	unique_ptr<Textura> pTextura(new Textura(/******/));

	leerTextura(entrada, pTextura);
	return pTextura;
}