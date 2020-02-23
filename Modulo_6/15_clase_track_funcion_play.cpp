void
Track::play
(int loop)
{
	Ogre::LogManager* pLogManager = 
		Ogre::LogManager::getSingletonPtr();

	if(Mix_PausedMusic()) // Estaba pausada?
		Mix_ResumeMusic(); // Reanudación.

	// Si no, se reproduce desde el principio.
	else {
		if (Mix_PlayMusic(_pTrack, loop) == -1) {
			pLogManager->logMessage("Track::play() Error al....");
			throw (Ogre::Exception(Ogre::Exception::ERR_FILE_NOT_FOUND,
				"Imposible reproducir...",
				"Track::play()"));
		}
	}
}