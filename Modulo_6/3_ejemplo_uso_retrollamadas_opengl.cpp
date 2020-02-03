#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>

// Se omite parte del código fuente ...

void update(unsigned char key, int x, int y){
	Rearthyear += 0.2;
	Rearthday  += 5.8;
	glutPostRedisplay();
}

int main(int argc, char* argv[]){

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowsize(640, 480);
	glutCreateWindow("Session #04 - Solar System");

	// Definición de las funciones de retrollamada
	glutDisplayFunc(display);
	glutReshapeFunc(resize);

	// Eg. update se ejecutará cuando el sistema
	// capture un evento de teclado
	// Signatura de glutKeyboardFunc
	// void glutKeyboardFunc(void (*func))
	// (unsigned char key, int x, int y));
	glutKeyboardFunc(update);

	glutMainLoop();

	return 0;
}