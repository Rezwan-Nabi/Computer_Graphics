#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //  white
	glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);//Vertical
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(160,60);
    glVertex2f(500,60);
    glVertex2f(500,440);
    glVertex2f(160,440);
    glEnd();

     glBegin(GL_POLYGON);//Horizontal
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(40,180);
    glVertex2f(620,180);
    glVertex2f(620,320);
    glVertex2f(40,320);
    glEnd();

// lower left side yellow
     glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(60,160);
    glVertex2f(100,160);
    glVertex2f(100,180);
    glVertex2f(60,180);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(80,140);
    glVertex2f(120,140);
    glVertex2f(120,160);
    glVertex2f(80,160);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(100,120);
    glVertex2f(140,120);
    glVertex2f(140,140);
    glVertex2f(100,140);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(120,100);
    glVertex2f(160,100);
    glVertex2f(160,120);
    glVertex2f(120,120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(140,80);
    glVertex2f(160,80);
    glVertex2f(160,100);
    glVertex2f(140,100);
    glEnd();

// lower right side yellow

     glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(500,80);
    glVertex2f(520,80);
    glVertex2f(520,100);
    glVertex2f(500,100);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(500,100);
    glVertex2f(540,100);
    glVertex2f(540,120);
    glVertex2f(500,120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(520,120);
    glVertex2f(560,120);
    glVertex2f(560,140);
    glVertex2f(520,140);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(540,140);
    glVertex2f(580,140);
    glVertex2f(580,160);
    glVertex2f(540,160);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(560,160);
    glVertex2f(600,160);
    glVertex2f(600,180);
    glVertex2f(560,180);
    glEnd();

//Upper left side yellow
   glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(60,320);
    glVertex2f(100,320);
    glVertex2f(100,340);
    glVertex2f(60,340);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(80,340);
    glVertex2f(120,340);
    glVertex2f(120,360);
    glVertex2f(80,360);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(100,360);
    glVertex2f(140,360);
    glVertex2f(140,380);
    glVertex2f(100,380);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(120,380);
    glVertex2f(160,380);
    glVertex2f(160,400);
    glVertex2f(120,400);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(140,400);
    glVertex2f(160,400);
    glVertex2f(160,420);
    glVertex2f(140,420);
    glEnd();

//Upper right side yellow
    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(560,320);
    glVertex2f(600,320);
    glVertex2f(600,340);
    glVertex2f(560,340);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(540,340);
    glVertex2f(580,340);
    glVertex2f(580,360);
    glVertex2f(540,360);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(520,360);
    glVertex2f(560,360);
    glVertex2f(560,380);
    glVertex2f(520,380);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(500,380);
    glVertex2f(540,380);
    glVertex2f(540,400);
    glVertex2f(500,400);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.808f,0.0f); // yellow
    glVertex2f(500,400);
    glVertex2f(520,400);
    glVertex2f(520,420);
    glVertex2f(500,420);
    glEnd();

// Black in middle
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //Horizontal Black
	glVertex2f(100,180);
    glVertex2f(560,180);
    glVertex2f(560,300);
    glVertex2f(100,300);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //Vertical Black
	glVertex2f(280,140);
    glVertex2f(380,140);
    glVertex2f(380,400);
    glVertex2f(280,400);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // Batman left ear
	glVertex2f(280,400);
    glVertex2f(300,400);
    glVertex2f(300,420);
    glVertex2f(280,420);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // Batman right ear
	glVertex2f(360,400);
    glVertex2f(380,400);
    glVertex2f(380,420);
    glVertex2f(360,420);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // left side
	glVertex2f(60,200);
    glVertex2f(80,200);
    glVertex2f(80,300);
    glVertex2f(60,300);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // left side
	glVertex2f(80,180);
    glVertex2f(100,180);
    glVertex2f(100,320);
    glVertex2f(80,320);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // left side
	glVertex2f(100,160);
    glVertex2f(120,160);
    glVertex2f(120,340);
    glVertex2f(100,340);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // left side
	glVertex2f(120,140);
    glVertex2f(140,140);
    glVertex2f(140,360);
    glVertex2f(120,360);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // left side
	glVertex2f(140,120);
    glVertex2f(160,120);
    glVertex2f(160,380);
    glVertex2f(140,380);
    glEnd();

     glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // left side
	glVertex2f(160,100);
    glVertex2f(200,100);
    glVertex2f(200,400);
    glVertex2f(160,400);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // left side
	glVertex2f(200,80);
    glVertex2f(220,80);
    glVertex2f(220,320);
    glVertex2f(200,320);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // left side
	glVertex2f(200,380);
    glVertex2f(220,380);
    glVertex2f(220,400);
    glVertex2f(200,400);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // left side
	glVertex2f(220,120);
    glVertex2f(240,120);
    glVertex2f(240,300);
    glVertex2f(220,300);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // left side
	glVertex2f(240,140);
    glVertex2f(260,140);
    glVertex2f(260,300);
    glVertex2f(240,300);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // left side
	glVertex2f(260,160);
    glVertex2f(280,160);
    glVertex2f(280,320);
    glVertex2f(260,320);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // right side
	glVertex2f(380,160);
    glVertex2f(400,160);
    glVertex2f(400,320);
    glVertex2f(380,320);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // right side
	glVertex2f(400,140);
    glVertex2f(420,140);
    glVertex2f(420,300);
    glVertex2f(400,300);
    glEnd();

     glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // right side
	glVertex2f(420,120);
    glVertex2f(440,120);
    glVertex2f(440,300);
    glVertex2f(420,300);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // right side
	glVertex2f(440,380);
    glVertex2f(460,380);
    glVertex2f(460,400);
    glVertex2f(440,400);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // right side
	glVertex2f(440,80);
    glVertex2f(460,80);
    glVertex2f(460,320);
    glVertex2f(440,320);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // right side
	glVertex2f(460,100);
    glVertex2f(480,100);
    glVertex2f(480,400);
    glVertex2f(460,400);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // right side
	glVertex2f(480,100);
    glVertex2f(500,100);
    glVertex2f(500,400);
    glVertex2f(480,400);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // right side
	glVertex2f(500,120);
    glVertex2f(520,120);
    glVertex2f(520,380);
    glVertex2f(500,380);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // right side
	glVertex2f(580,200);
    glVertex2f(600,200);
    glVertex2f(600,300);
    glVertex2f(580,300);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // right side
	glVertex2f(560,180);
    glVertex2f(580,180);
    glVertex2f(580,320);
    glVertex2f(560,320);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // right side
	glVertex2f(540,160);
    glVertex2f(560,160);
    glVertex2f(560,340);
    glVertex2f(540,340);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); // right side
	glVertex2f(520,140);
    glVertex2f(540,140);
    glVertex2f(540,360);
    glVertex2f(520,360);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(300,100);
    glVertex2f(360,100);
    glVertex2f(360,140);
    glVertex2f(300,140);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(320,80);
    glVertex2f(340,80);
    glVertex2f(340,100);
    glVertex2f(320,100);
    glEnd();

// Side black

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(160,440);
    glVertex2f(500,440);
    glVertex2f(500,460);
    glVertex2f(160,460);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(500,420);
    glVertex2f(520,420);
    glVertex2f(520,440);
    glVertex2f(500,440);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(520,400);
    glVertex2f(540,400);
    glVertex2f(540,420);
    glVertex2f(520,420);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(540,380);
    glVertex2f(560,380);
    glVertex2f(560,400);
    glVertex2f(540,400);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(560,360);
    glVertex2f(580,360);
    glVertex2f(580,380);
    glVertex2f(560,380);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(580,340);
    glVertex2f(600,340);
    glVertex2f(600,360);
    glVertex2f(580,360);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(600,320);
    glVertex2f(620,320);
    glVertex2f(620,340);
    glVertex2f(600,340);
    glEnd();

     glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(620,180);
    glVertex2f(640,180);
    glVertex2f(640,320);
    glVertex2f(620,320);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(600,160);
    glVertex2f(620,160);
    glVertex2f(620,180);
    glVertex2f(600,180);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(580,140);
    glVertex2f(600,140);
    glVertex2f(600,160);
    glVertex2f(580,160);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(560,120);
    glVertex2f(580,120);
    glVertex2f(580,140);
    glVertex2f(560,140);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(540,100);
    glVertex2f(560,100);
    glVertex2f(560,120);
    glVertex2f(540,120);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(520,80);
    glVertex2f(540,80);
    glVertex2f(540,100);
    glVertex2f(520,100);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(500,60);
    glVertex2f(520,60);
    glVertex2f(520,80);
    glVertex2f(500,80);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(160,40);
    glVertex2f(500,40);
    glVertex2f(500,60);
    glVertex2f(160,60);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(140,60);
    glVertex2f(160,60);
    glVertex2f(160,80);
    glVertex2f(140,80);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(120,80);
    glVertex2f(140,80);
    glVertex2f(140,100);
    glVertex2f(120,100);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(100,100);
    glVertex2f(120,100);
    glVertex2f(120,120);
    glVertex2f(100,120);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(80,120);
    glVertex2f(100,120);
    glVertex2f(100,140);
    glVertex2f(80,140);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(60,140);
    glVertex2f(80,140);
    glVertex2f(80,160);
    glVertex2f(60,160);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(40,160);
    glVertex2f(60,160);
    glVertex2f(60,180);
    glVertex2f(40,180);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(20,180);
    glVertex2f(40,180);
    glVertex2f(40,320);
    glVertex2f(20,320);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(40,320);
    glVertex2f(60,320);
    glVertex2f(60,340);
    glVertex2f(40,340);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(60,340);
    glVertex2f(80,340);
    glVertex2f(80,360);
    glVertex2f(60,360);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(80,360);
    glVertex2f(100,360);
    glVertex2f(100,380);
    glVertex2f(80,380);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(100,380);
    glVertex2f(120,380);
    glVertex2f(120,400);
    glVertex2f(100,400);
    glEnd();

     glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(120,400);
    glVertex2f(140,400);
    glVertex2f(140,420);
    glVertex2f(120,420);
    glEnd();

     glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(140,420);
    glVertex2f(160,420);
    glVertex2f(160,440);
    glVertex2f(140,440);
    glEnd();

/*
     // Draw horizontal lines
    for (int y = 0; y <= 500; y++) {
        glColor3f(1.0f, 0.0f, 1.0f);
        glBegin(GL_LINES);
        glVertex2f(0,y);
        glVertex2f(670,y);
        glEnd();
    }

    // Draw vertical lines
    for (int x = 0; x <= 670; x++) {
        glColor3f(1.0f, 0.f, 1.0f);
        glBegin(GL_LINES);
        glVertex2f(x,0);
        glVertex2f(x,500);
        glEnd();
    }
*/

    glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */

void myInit(void) {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,670.0,0.0,500.0);
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutInitWindowSize(670,500);   // Set the window's initial width & height
    glutInitWindowPosition(50,50);  // Set the window's initial position according to the monitor
    glutCreateWindow("Batman Logo"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    myInit();
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
