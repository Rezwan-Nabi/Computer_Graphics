#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display() {

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //  white
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	glColor3f(0.807f, 0.067f, 0.149f); // red
    glVertex2i(0, 0);
	glVertex2i(880,0);
    glVertex2i(880,213.333);
	glVertex2i(0,213.333);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.478f, 0.239f); // green
    glVertex2i(0,426.667);
	glVertex2i(880,426.667);
    glVertex2i(880,640);
	glVertex2i(0,640);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2i(0,0);
	glVertex2i(220,213.333);
    glVertex2i(220,426.667);
	glVertex2i(0,640);
	glEnd();

	glFlush();  // Render now
}

void myInit (void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 880.0, 0.0, 640.0);
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv){
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(880, 640);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50);  // Set the window's initial position according to the monitor
	glutCreateWindow("Flag of Kuwait"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	myInit ();
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
