// SE OMITE PARTE DEL CÓDIGO FUENTE.
int
MyApp::start() {

	_root = new Ogre::Root();
	_pTrackManager = new TrackManager;
	_pSoundFXManager = new SoundFXManager;

	// Window, cámara y viewport...

	loadResources();
	createScene();
	createOverlay();

	// FrameListener...

	// Reproducción del track principal...
	this->_mainTrack->play();

	_root->startRendering();
	return 0;
}