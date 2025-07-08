#include <stdio.h>
#include <GL/gl.h>>
#include <GL/glut.h>

void myDisplay(void){
    int c = 0;
    for(int x=0;x<=400;x+=50){
        for(int y=0;y<=400;y+=50){
            glClear(GL_COLOR_BUFFER_BIT);
            //glPointSize(4.0);
            if (c == 0){
                glColor3f(0, 0, 0);  //black
                c = 1;
            }
            else{
                glColor3f(1, 1, 1);  //white
                c = 0;
            }
            glBegin(GL_QUADS);
            glVertex2i(x, y);
            glVertex2i(x+50, y);
            glVertex2i(x+50, y+50);
            glVertex2i(x, y+50);
        }
    }
    glEnd();
    glFlush ();
}

void myInit (void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (400, 400);
    glutInitWindowPosition (500, 200);
    glutCreateWindow ("CHESS BOARD");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}

