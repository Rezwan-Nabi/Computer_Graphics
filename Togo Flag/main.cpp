#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.0f,0.415f,0.290f,0.0f); // green
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(0,128);
    glVertex2f(960,128);
    glVertex2f(960,256);
    glVertex2f(0,256);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.808f, 0.0f); // yellow
    glVertex2f(0,384);
    glVertex2f(960,384);
    glVertex2f(960,512);
    glVertex2f(0,512);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.804f, 0.063f, 0.204f); // red
    glVertex2f(0,640);
    glVertex2f(320,640);
    glVertex2f(320,256);
    glVertex2f(0,256);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f); // white
    glVertex2f(120,452);
    glVertex2f(80,484);
    glVertex2f(130,484);
    glVertex2f(160,535);
    glVertex2f(190,484);
    glVertex2f(240,484);
    glVertex2f(200,452);
    glVertex2f(220,400);
    glVertex2f(170,440);
    glVertex2f(100,400);
    glEnd();
    glFlush(); // Render now
}
/* Main function: GLUT runs as a console application starting at main()  */
void myInit(void) {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,960.0,0.0,640.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutInitWindowSize(960,640);   // Set the window's initial width & height
    glutInitWindowPosition(50,50);  // Set the window's initial position according to the monitor
    glutCreateWindow("Flag of Togo"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    myInit();
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
