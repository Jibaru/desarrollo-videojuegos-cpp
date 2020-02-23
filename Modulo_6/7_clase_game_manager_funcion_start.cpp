void
GameManager::start
(GameState* state)
{
	// Creación del objeto Ogre::Root.
	_root = new Ogre: :Root();
	
	if (!configure())
		return;

	loadResources ();

	_inputMgr = new InputManager;
	_inputMgr->initialise(_renderWindow);

	// Registro como key y mouse listener...
	_inputMgr->addKeyListener(this, "GameManager");
	_inputMgr->addMouseListener(this, "GameManager");

	// El GameManager es un FrameListener.
	_root->addFrameListener(this);

	// Transición al estado inicial.
	changeState(state);

	// Bucle de rendering.
	_root->startRendering();
}