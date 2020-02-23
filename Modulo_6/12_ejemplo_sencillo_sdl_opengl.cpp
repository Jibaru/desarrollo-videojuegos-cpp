#include <SDL/SDL.h>
#include <GL/gl.h>
#include <stdio.h>

int main (int argc, char *argv[]) {
	SDL_Surface *screen;
	// Inicialización de SDL.
	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		fprintf(stderr, "Unable to initialize SDL: %s\n",
		SDL_GetError());
		return -1;
	}

	// Cuando termine el programa, llamada a SQLQuit().
	atexit(SDL_Quit);
	// Activación del double buffering.
	SDL_GL_SetAtt ribute(SDL_GL_DOUBLEBUFFER, 1);

	// Establecimiento del modo de vídeo con soporte para OpenGL.
	screen = SDL_SetVideoMode(640, 480, 16, SDL_OPENGL);
	if (screen == NULL) {
		fprintf(stderr, "Unable to set video mode: %s\n",
		SDL_GetError());
		return -1;
	}

	SDL_WM_SetCaption("OpenGL with SDL!", "OpenGL");
	// ¡Ya es posible utilizar comandos OpenGL!
	glViewport(80, 0, 480, 480);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1.0, 1.0, -1.0, 1.0, 1.0, 100.0);
	glClearColor(1, 1, 1, 0);

	glMatrixMode(GL_MODELVIEW);	glLoadIdentity();
	glClear(GL_COLOR_BUFFER_BIT	|	GL_DEPTH_BUFFER_BIT);

	// Renderizado de un triángulo.
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0); glVertex3f(0.0, 1.0, -2.0);
	glColor3f(0.0, 1.0, 0.0); glVertex3f(1.0, -1.0, -2.0);
	glColor3f(0.0, 0.0, 1.0); glVertex3f(-1.0, -1.0, -2.0);
	glEnd();

	glFlush();
	SDL_GL_SwapBuffers(); // Intercambio de buffers.
	SDL_Delay(5000);	// Espera de 5 seg.

	return 0;
}