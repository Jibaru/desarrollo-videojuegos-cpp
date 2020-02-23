void PlayState::keyPressed (const OIS::KeyEvent &e) {
	if (e.key == OIS::KC_P) // Tecla p ->PauseState.
	pushState(PauseState::getSingletonPtr());
}

void PauseState::keyPressed (const OIS::KeyEvent &e) {
	if (e.key == OIS::KC_P) // Tecla p ->Estado anterior.
	popState();
}