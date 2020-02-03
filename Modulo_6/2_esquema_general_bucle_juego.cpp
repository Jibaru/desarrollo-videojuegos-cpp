// Pseudocódigo de un juego tipo "Pong"
int main(int argc, char* argv[]){
	init_game(); // Inicialización del juego

	// Bucle del juego
	while(true){
		capture_events(); // Capturar eventos externos

		if(exitKeyPressed())
			break;

		move_paddles(); // Actualizar palas
		move_ball();    // Actualizar bola
		collision_detection(); // Tratamiento de colisiones

		// ¿Anotó algún jugador?
		if(ballReachedBorder(LEFT_PLAYER)){
			score(RIGHT_PLAYER);
			reset_ball();
		}

		if(ballReachedBorder(RIGHT_PLAYER)){
			score(LEFT_PLAYER);
			reset_ball();
		}

		render();  // Renderizado
	}
}