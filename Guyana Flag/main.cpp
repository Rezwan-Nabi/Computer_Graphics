#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display() {

	glClearColor(0.0f, 0.592f, 0.223f, 0.0f);//  green
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 1.0f); // white
    glVertex2i(0,0);
	glVertex2i(0,640);
    glVertex2i(880,320);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.819f, 0.0f); // yellow
    glVertex2i(50,50);
	glVertex2i(50,590);
    glVertex2i(830,320);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f); // Black
    glVertex2i(0,0);
	glVertex2i(0,640);
    glVertex2i(440,320);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.937f, 0.2f, 0.250f); // Red
    glVertex2i(0,35);
	glVertex2i(0,610);
    glVertex2i(400,320);
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
	glutInitWindowPosition(50,50);  // Set the window's initial position according to the monitor
	glutCreateWindow("Flag of Guyana"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	myInit ();
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
