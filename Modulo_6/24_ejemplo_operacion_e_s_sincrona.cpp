#include <stdio.h>

int lectura_sincrona (const char* archivo, char* buffer,
	size_t tamanyo_buffer, size_t* p_bytes_leidos);

int main (int argc, const char* argv[]) {
	char buffer[256];
	size_t bytes_leidos = 0;

	if (lectura_sincrona("test.txt", buffer, sizeof(buffer), &bytes_leidos))
		printf("%u bytes leidos!\n", bytes_leidos);

	return 0;
}

int lectura_sincrona (const char* archivo, char* buffer,
	size_t tamanyo_buffer, size_t* p_bytes_leidos) {
	
	FILE* manejador = NULL;

	if ((manejador = fopen(archivo, "rb"))) {
		// Llamada bloqueante en fread,
		// hasta que se lean todos los datos.
		size_t bytes_leidos = fread(buffer,	1, tamanyo_buffer, manejador);

		// Ignoramos errores...
		fclose(manej ador);

		*p_bytes_leidos = bytes_leidos;
		
		return 1;
	}

	return -1;
}
