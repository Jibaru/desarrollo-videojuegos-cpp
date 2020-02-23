class SoundFX: public Ogre::Resource {
public:
	// Constructor (ver Ogre::Resource).
	SoundFX(Ogre::ResourceManager* creator,
	//	Igual	que	en	Track...
	);
	~SoundFX();

	int play(int loop =0); // Reproducción puntual.

protected:
	void loadImpl();
	void unloadImpl();
	size_t	calculateSize()	const;

private:
	Mix_Chunk* _pSound; // Info sobre el efecto de sonido.
	Ogre::String _path; // Ruta completa al efecto de sonido.
	size_t _size;	// Tamaño del efecto (bytes).
};