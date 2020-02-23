bool
GameManager::keyPressed
(const OIS::KeyEvent &e)
{
	_states.top()->keyPressed(e);
	return true;
}