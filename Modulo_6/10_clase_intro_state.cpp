// SE OMITE PARTE DEL CÓDIGO FUENTE.
class IntroState : public Ogre::Singleton<IntroState>,
public GameState
{
	public:
	IntroState() {}

	void enter (); void exit ();
	void pause (); void resume ();

	void keyPressed (const OIS::KeyEvent &e);
	void keyReleased (const OIS::KeyEvent &e);
	// Tratamiento de eventos de ratón...
	// frameStarted(), frameEnded()..

	// Heredados de Ogre::Singleton.
	static IntroState& getSingleton ();
	static IntroState* getSingletonPtr ();

	protected:
	Ogre::Root* _root;
	Ogre::SceneManager* _sceneMgr;
	Ogre::Viewport* _viewport;
	Ogre::Camera* _camera;
	bool _exitGame;
};
