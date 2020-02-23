// SE OMITE PARTE DEL CÓDIGO FUENTE.

bool
MyFrameListener::frameStarted
(const Ogre::FrameEvent& evt) {

	_keyboard->capture();
	// Captura de las teclas de fecha...

	if(_keyboard->isKeyDown(OIS::KC_1)) {
		_sceneManager->setShadowTechnique(Ogre::SHADOWTYPE_TEXTURE_MODULATIVE);
		_shadowInfo = "TEXTURE_MODULATIVE";
		_pMyApp->getSoundFXPtr()->play();	//	REPRODUCCIÓN.
	}

	if(_keyboard->isKeyDown(OIS::KC_2)) {
		_sceneManager->setShadowTechnique(Ogre::SHADOWTYPE_STENCIL_MODULATIVE);
		_shadowInfo = "STENCIL_MODULATIVE";
		_pMyApp->getSoundFXPtr()->play();	//	REPRODUCCIÓN.
	}

	// Tratamiento del resto de eventos...
} 
