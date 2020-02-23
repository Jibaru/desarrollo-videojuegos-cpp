bool
MyApp::initSDL () {

	//	Inicializando SDL...
	if (SDL_Init(SDL_INIT_AUDIO) < 0)
		return false;
	
	// Llamar a SDL_Quit	al	terminar.
	atexit(SDL_Quit);

	//	Inicializando SDL mixer...
	if (Mix_OpenAudio(
		MIX_DEFAULT_FREQUENCY, 
		MIX_DEFAULT_FORMAT,
		MIX_DEFAULT_CHANNELS, 4096) < 0)
		return false;

	//	Llamar a Mix_CloseAudio al	terminar.
	atexit(Mix_CloseAudio);

	return true;

}
