// Clase encargada de gestionar recursos del tipo "Track".
// Funcionalidad heredada de Ogre::ResourceManager
//y Ogre::Singleton.
class TrackManager: public Ogre::ResourceManager,
					public Ogre::Singleton<TrackManager> 
{
public:
	TrackManager();
	virtual ~TrackManager();
	
	// Función de carga genérica.
	virtual TrackPtr load (const Ogre::String& name,
						   const Ogre::String& group);
	static TrackManager& getSingleton ();
	static TrackManager* getSingletonPtr ();

protected:
	
	// Crea una nueva instancia del recurso.
	Ogre::Resource* createImpl (const Ogre::String& name,
								Ogre::ResourceHandle handle,
								const Ogre::String& group,
								bool isManual,
								Ogre::ManualResourceLoader* loader,
								const Ogre::NameValuePairList* createParams);
};

TrackPtr
TrackManager::load
(const Ogre::String& name, const Ogre::String& group)
{
	// Obtención del recurso por nombre...
	TrackPtr trackPtr = getByName(name);

	// Si no ha sido creado, se crea.
	if (trackPtr.isNull())
		trackPtr = create(name, group);

	// Carga explícita del recurso.
	trackPtr->load();

	return trackPtr;
}

// Creación de un nuevo recurso.
Ogre::Resource * TrackManager::createImpl (
	const Ogre::String& resource_name,
	Ogre::ResourceHandle handle,
	const Ogre::String& resource_group,
	bool isManual,
	Ogre::ManualResourceLoader* loader,
	const Ogre::NameValuePairList* createParams)
{
	return new Track(this, resource_name, handle,
		resource_group, isManual, loader);
}