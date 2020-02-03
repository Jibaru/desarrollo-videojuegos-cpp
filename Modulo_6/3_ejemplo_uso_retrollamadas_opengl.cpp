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
	

	return 0;
}