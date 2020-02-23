void
GameManager::changeState
(GameState* state)
{
	// Limpieza del estado actual.
	if (!_states.empty()) {
		// exit() sobre el último estado. _states.top()->exit();
		// Elimina el último estado.
		_states.pop();
	}

	// Transición al nuevo estado.
	_states.push(state);
	
	// enter() sobre el nuevo estado.
	_states.top()->enter();
}