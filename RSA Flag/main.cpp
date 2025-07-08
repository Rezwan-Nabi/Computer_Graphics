#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.0f,0.467f,0.286f,0.0f); // green
	glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f); // lower white
    glVertex2f(54,0);
    glVertex2f(234,120);
    glVertex2f(450,120);
    glVertex2f(450,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.078f, 0.537f); // blue
    glVertex2f(90,0);
    glVertex2f(240,100);
    glVertex2f(450,100);
    glVertex2f(450,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f); // upper white
    glVertex2f(54,300);
    glVertex2f(234,180);
    glVertex2f(450,180);
    glVertex2f(450,300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.878f,0.235f,0.1921f); // red
    glVertex2f(90,300);
    glVertex2f(240,200);
    glVertex2f(450,200);
    glVertex2f(450,300);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f,0.721f, 0.109f); //yellow
    glVertex2f(0,36);
    glVertex2f(171,150);
    glVertex2f(0,264);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f); // black
    glVertex2f(0,60);
    glVertex2f(135,150);
    glVertex2f(0,240);
    glEnd();

    glFlush();
}

void myInit (void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 450.0, 0.0, 300.0);
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv){
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(450,300);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50);  // Set the window's initial position according to the monitor
	glutCreateWindow("Flag of South Africa"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	myInit ();
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
