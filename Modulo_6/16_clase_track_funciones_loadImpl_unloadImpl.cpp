void
Track::loadImpl () // Carga del recurso.
{
	// Ruta al archivo.
	Ogre::FileInfoListPtr info;
	info = Ogre::ResourceGroupManager::getSingleton().
	findResourceFileInfo(mGroup, mName);

	for (Ogre::FileInfoList::const_iterator i = info->begin();
		 i != info->end(); ++i) {
		_path = i->archive->getName() + "/" + i->filename;
	}

	if (_path == "") {	// Archivo no encontrado...
		// Volcar en el log y lanzar excepción.
	}

	// Cargar el recurso de sonido.
	if ((_pTrack = Mix_LoadMUS(_path.c_str())) == NULL) {
		// Si se produce un error al cargar el recurso,
		// volcar en el log y lanzar excepción.
	}

	// Cálculo del tamaño del recurso de sonido.
	_size = //...
}

void
Track::unloadImpl()
{
	if (_pTrack) {
		// Liberar el recurso de sonido.
		Mix_FreeMusic(_pTrack);
	}
}