while(true){
	// Actualizar la cámara
	// normalmente de acuerdo a un camino prefijado
	update_camera();

	// Actualizar la posición, orientación y
	// resto de estados de las entidades del juego
	update_scene_entities();

	// Renderizar un frame en el buffer trasero
	render_scene();

	// Intercambiar el contenido del buffer trasero
	// con el que se utilizará para actualizar el
	// dispositivo de visualización
	swap_buffers();
}