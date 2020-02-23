// Smart pointer a Track.
class TrackPtr: public Ogre::SharedPtr<Track> {
public:
	// Es necesario implementar constructores y operador de asignación.
	TrackPtr(): Ogre::SharedPtr<Track>() {}
	explicit TrackPtr(Track* m): Ogre::SharedPtr<Track>(m) {}
	TrackPtr( const TrackPtr &m): Ogre::SharedPtr<Track>(m) {}
	TrackPtr( const Ogre::ResourcePtr &r);
	TrackPtr& operator= (const Ogre::ResourcePtr& r);
};

TrackPtr::TrackPtr
(const Ogre::ResourcePtr &resource) : Ogre::SharedPtr<Track>() 
{
	
	//	Comprobar la validez del recurso.
	if	(resource.isNull())
		return;

	// Para garantizar la exclusión mutua...
	OGRE_LOCK_MUTEX(* resource.OGRE_AUTO_MUTEX_NAME)
	OGRE_COPY_AUTO_SHARED_MUTEX(resource.OGRE_AUTO_MUTEX_NAME)

	pRep = static_cast<Track*>(resource.getPointer());
	pUseCount = resource.useCountPointer();
	useFreeMethod = resource.freeMethod();

	//	Incremento del contador	de	referencias.
	if	(pUseCount)
		++(*pUseCount);
}