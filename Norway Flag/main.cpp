#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display() {

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	glColor3f(0.729f, 0.047f, 0.184f); // red
    glVertex2i(0, 0);
	glVertex2i(880, 0);
    glVertex2i(880, 640);
	glVertex2i(0, 640);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f); //White  horizontal
    glVertex2i(0, 240);
	glVertex2i(880, 240);
    glVertex2i(880, 400);
	glVertex2i(0, 400);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f); //White  vertical
    glVertex2i(240, 0);
	glVertex2i(400, 0);
    glVertex2i(400, 640);
	glVertex2i(240, 640);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.12549f, 0.35686f); //Blue  horizontal
    glVertex2i(0, 280);
	glVertex2i(880, 280);
    glVertex2i(880, 360);
	glVertex2i(0, 360);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.12549f, 0.35686f); //Blue  vertical
    glVertex2i(280, 0);
	glVertex2i(360, 0);
    glVertex2i(360, 640);
	glVertex2i(280, 640);
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
	glutCreateWindow("Flag of Norway"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	myInit ();
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
