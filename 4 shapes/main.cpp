#include <windows.h>
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
//#include <stdio.h>

void myDisplay(void) {
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 1.0, 0.0);// Set the color to green
    //glPointSize(4.0);
    glLineWidth(1);
    glBegin(GL_LINES);
        glVertex2f(-1.0f, 0.0f);
        glVertex2f(1.0f, 0.0f);
        glVertex2f(0.0f, -1.0f);
        glVertex2f(0.0f, 1.0f);
    glEnd();
    glFlush ();



    glColor3f(1.0f, 0.0f, 0.0f); // Set the color to red
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.75f, 0.25f);
        glVertex2f(-0.25f, 0.25f);
        glVertex2f(-0.5f, 0.75f);
    glEnd();
    glFlush ();



    glColor3f(1.0f, 1.0f, 0.0f); // Set the color to yellow
    glBegin(GL_POLYGON);
        glVertex2f(0.25f, 0.25f);
        glVertex2f(0.55f, 0.25f);
        glVertex2f(0.65f, 0.45f);
        glVertex2f(0.55f, 0.65f);
        glVertex2f(0.25f, 0.65f);
        glVertex2f(0.15f, 0.45f);

    glEnd();
    glFlush ();



    glColor3f(0.0f, 1.0f, 0.0f); // Set the color to green
    glBegin(GL_QUADS);
        glVertex2f(-0.75f, -0.75f);
        glVertex2f(-0.25f, -0.75f);
        glVertex2f(-0.25f, -0.25f);
        glVertex2f(-0.75f, -0.25f);
    glEnd();
    glFlush ();



    glColor3f(1.0f, 0.5f, 0.0f); // Set the color to orange
    glBegin(GL_TRIANGLES);
        glVertex2f(0.25f, -0.75f);
        glVertex2f(0.55f, -0.75f);
        glVertex2f(0.40f, -0.25f);

    glEnd();
    glFlush ();
}

void myInit(void) {
    glClearColor(0.5f, 0.5f, 0.5f, 1.0f); // Set the background color to gray

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("my first attempt");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();

    return 0;
}
