#include <iostream>
#include <cmath>
#include <GL/glut.h>
#include <math.h>
#define PI 3.14159265358979323846
using namespace std;
GLfloat position_carx = 0.0f;
GLfloat position_cary = 0.0f;
GLfloat position_boat1x = 0.0f;
GLfloat position_boat2x = 0.0f;
GLfloat position_busx = 0.0f;
GLfloat position_busy = 0.0f;
GLfloat speed = 0.01f;
GLfloat speed1 = 0.001f;
GLfloat speedBoat = 0.005f;
GLfloat i = 0.0f;
int currentMode = 0; // 0 for summer, 1 for winter
GLfloat snowP = 3.0f;
GLfloat snowS = 0.0105f;

void snowUp(int value)
{

    if (snowP < -.50)
        snowP = 1.0f;
    snowP -= snowS;
    glutPostRedisplay();  //Notify GLUT that the display has changed
    glutTimerFunc(100, snowUp, 0); //Notify GLUT to call update again in 100 milliseconds
}

void circle(float a, float b, float r)
{

    int i;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    GLfloat x = a;
    GLfloat y = b;
    GLfloat radius = r;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();
}

void motion_vehicle(int value)
{
    if (position_carx > 1.5)
        position_carx = -1.5f;

    if (position_cary < -0.2)
        position_cary = 0.1f;

    if (position_boat1x > 1.5)
        position_boat1x = -1.5f;

    if (position_boat2x < -1.5)
        position_boat2x = 1.5f;

    if (position_busx < -1.5)
        position_busx = 1.5f;

    if (position_busy > 0.2)
        position_busy = -0.1f;

    position_carx += speed;
    position_cary -= speed1;
    position_boat1x += speedBoat;
    position_boat2x -= speedBoat;
    position_busx -= speed;
    position_busy += speed1;
    glutPostRedisplay();
    glutTimerFunc(35, motion_vehicle, 0);
}

void SpecialInput(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_UP:
        speed = speed + 0.01;
        speed1 = speed1 + 0.001;
        speedBoat = speedBoat + 0.002;
        break;

    case GLUT_KEY_DOWN:
        speed = speed - 0.01;
        speed1 = speed1 - 0.001;
        speedBoat = speedBoat - 0.002;
        break;

    case GLUT_KEY_RIGHT:
        glutTimerFunc(100, motion_vehicle, 0);

        break;

    default:
        break;
    }
    glutPostRedisplay();
}

void snowball()
{
    circle(-1.5,.95,.01);
    circle(-.95, .75, .005);
    circle(-.65, 0.55, .005);
    circle(-.35, 0.46, .005);
    circle(-.05, 0.648, .005);
    circle(.25, .83, .005);
    circle(.55, 0.8, .005);
    circle(.75, 0.35, .005);
    circle(1., 0.26, .005);
    circle(-.45, 0.148, .005);
    circle(.2, .83, .005);
    circle(.45, 0.8, .005);
    circle(.65, 0.35, .005);
    circle(1., 0.2, .005);
    circle(-.4, 0.18, .005);
    circle(-.9, .75, .005);
    circle(-.65, 0.5, .005);
    circle(-.5, 0.6, .005);
    circle(-.05, 0.64, .005);
    circle(.25, .83, .005);
    circle(.52, 0.6, .005);
    circle(.75, 0.35, .005);
    circle(1., 0.6, .005);
    circle(-.5, 0.14, .005);
    circle(.2, .3, .005);
    circle(.45, 0.87, .005);
    circle(.6, 0.35, .005);
    circle(.88, 0.2, .005);
    circle(-.4, 0.18, .005);
    circle(-.75, .75, .005);
    circle(-.5, 0.5, .005);
    circle(-.3, 0.46, .005);
    circle(-.05, 0.648, .005);
    circle(.25, .83, .005);
    circle(.55, 0.8, .005);
    circle(.75, 0.5, .005);
    circle(1., 0.67, .005);
    circle(-.56, 0.148, .005);
    circle(.223, .83, .005);
    circle(.97, 0.332, .005);
    circle(.65, 0.87, .005);
    circle(.912, 0.2323, .005);
    circle(-.4, 0.4, .005);
    circle(-.9, .543, .005);
    circle(-.686, 0.5, .005);
    circle(-.5, 0.86, .005);
    circle(-.525, 0.6, .005);
    circle(.2434, .685, .005);
    circle(.756, 0.9786, .005);
    circle(.7, 0.68, .005);
    circle(.12, 0.23, .005);
    circle(-.131, 0.14, .005);
    circle(.2, .121, .005);
    circle(.4343, 0.23, .005);
    circle(.6, 0.687, .005);
    circle(.143, 0.6867, .005);
    circle(-.4, 0.876, .005);
    circle(-.94, 0.7, .005);
    circle(-.92, 0.687, .005);
    circle(-.91, 0.79, .005);
    circle(-.88, 0.56, .005);

}

void sun()
{

    GLfloat x = 0.7f;
    GLfloat y = 0.85f;
    GLfloat radius = 0.055f;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    glColor3f(1.0f, 1.0f, 0.680f);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {

        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
                   y + (radius * sin(i * twicePi / triangleAmount)));

        glColor3f(1.0f, 1.0f, 0.0f);
    }
    glEnd();
}

void myDisplay(){
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 0.0);

    glBegin(GL_QUADS); // Sea
    glColor3f(0.49, 0.824, 0.871);
    glVertex2f(-1.0f, 0.66f);
    glVertex2f(-1.0f, 0.76f);
    glVertex2f(1.0f, 0.76f);
    glVertex2f(1.0f, 0.55f);
    glEnd();

    glBegin(GL_POLYGON);  // Sea Wave
    glColor3f(0.431, 0.769, 0.824);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-.5f, 0.689f);
    glVertex2f(-0.36f, 0.687f);
    glVertex2f(-0.34f, 0.686f);
    glVertex2f(-0.56f, 0.687f);
    glVertex2f(-0.54f, 0.686f);
    glEnd();

    glPushMatrix();
    glTranslated(0.9f, -0.07f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.431, 0.769, 0.824);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-.5f, 0.689f);
    glVertex2f(-0.36f, 0.687f);
    glVertex2f(-0.34f, 0.686f);
    glVertex2f(-0.56f, 0.687f);
    glVertex2f(-0.54f, 0.686f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.4f, 0.05f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.431, 0.769, 0.824);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-.5f, 0.689f);
    glVertex2f(-0.36f, 0.687f);
    glVertex2f(-0.34f, 0.686f);
    glVertex2f(-0.56f, 0.687f);
    glVertex2f(-0.54f, 0.686f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.6f, 0.06f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.431, 0.769, 0.824);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-.5f, 0.689f);
    glVertex2f(-0.36f, 0.687f);
    glVertex2f(-0.34f, 0.686f);
    glVertex2f(-0.56f, 0.687f);
    glVertex2f(-0.54f, 0.686f);
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0.431, 0.769, 0.824);
    glVertex2f(-0.99f, 0.7f);
    glVertex2f(-0.85f, 0.71f);
    glVertex2f(-0.79f, 0.7f);
    glVertex2f(-0.87f, 0.71f);
    glVertex2f(-0.88f, 0.7f);
    glVertex2f(-0.93f, 0.7f);
    glVertex2f(-1.1f, 0.69f);
    glEnd();

    glPushMatrix();
    glTranslated(0.7f, -0.03f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.431, 0.769, 0.824);
    glVertex2f(-0.99f, 0.7f);
    glVertex2f(-0.85f, 0.71f);
    glVertex2f(-0.79f, 0.7f);
    glVertex2f(-0.87f, 0.71f);
    glVertex2f(-0.88f, 0.7f);
    glVertex2f(-0.93f, 0.7f);
    glVertex2f(-1.1f, 0.69f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.4f, 0.02f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.431, 0.769, 0.824);
    glVertex2f(-0.99f, 0.7f);
    glVertex2f(-0.85f, 0.71f);
    glVertex2f(-0.79f, 0.7f);
    glVertex2f(-0.87f, 0.71f);
    glVertex2f(-0.88f, 0.7f);
    glVertex2f(-0.93f, 0.7f);
    glVertex2f(-1.1f, 0.69f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.6f, -0.08f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.431, 0.769, 0.824);
    glVertex2f(-0.99f, 0.7f);
    glVertex2f(-0.85f, 0.71f);
    glVertex2f(-0.79f, 0.7f);
    glVertex2f(-0.87f, 0.71f);
    glVertex2f(-0.88f, 0.7f);
    glVertex2f(-0.93f, 0.7f);
    glVertex2f(-1.1f, 0.69f);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS); // Sand
    glColor3f(0.882, 0.714, 0.522);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-1.0f, 0.66f);
    glVertex2f(1.0f, 0.55f);
    glVertex2f(1.0f, 0.48f);
    glEnd();

    glBegin(GL_QUADS); // sky
    glColor3f(0.576, 0.831, 0.949);
    glVertex2f(-1.0f, 0.76f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, 0.76f);
    glEnd();

     if(currentMode == 0){

      sun();

      }

    glBegin(GL_QUADS); // Road
    glColor3f(0.301, 0.355, 0.35);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(1.0f, 0.48f);
    glVertex2f(1.0f, 0.30f);
    glVertex2f(-1.0f, 0.55f);
    glEnd();

    glLineWidth(4); //Side  Upper
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.64f);
    glVertex2f(1.0f, 0.47f);
    glEnd();

    glLineWidth(4); // Side Lower
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.56f);
    glVertex2f(1.0f, 0.31f);
    glEnd();


    glLineWidth(5); // Divider
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(-0.92f, 0.59f);
    glEnd();

    glPushMatrix();
    glTranslated(0.175f, -0.019f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(-0.92f, 0.59f);
    glEnd();

    glTranslated(0.175f, -0.019f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(-0.92f, 0.59f);
    glEnd();

    glTranslated(0.175f, -0.019f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(-0.92f, 0.59f);
    glEnd();

    glTranslated(0.175f, -0.019f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(-0.92f, 0.59f);
    glEnd();

    glTranslated(0.175f, -0.015f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(-0.92f, 0.59f);
    glEnd();

    glTranslated(0.175f, -0.015f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(-0.92f, 0.59f);
    glEnd();

    glTranslated(0.175f, -0.015f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(-0.92f, 0.59f);
    glEnd();

    glTranslated(0.175f, -0.018f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(-0.92f, 0.59f);
    glEnd();

    glTranslated(0.175f, -0.018f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(-0.92f, 0.59f);
    glEnd();

    glTranslated(0.175f, -0.018f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(-0.92f, 0.59f);
    glEnd();

    glTranslated(0.175f, -0.018f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.6f);
    glVertex2f(-0.92f, 0.59f);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS); // Grass
    glColor3f(0.271, 0.463, 0.043);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-1.0f, 0.55f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(1.0f, 0.0f);
    glEnd();

    glPushMatrix(); // Car
    glTranslated( position_carx, position_cary, 0.0f);
    glLineWidth(2);
    glTranslated(-0.9f, 0.4f, 0.0f);
    glScalef(0.5f, 0.5f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.269, 0.541, 0.467);
    glVertex2f(0.9f, 0.35f);
    glVertex2f(0.650f, 0.38f);
    glVertex2f(0.650f, 0.44f);
    glVertex2f(0.7f, 0.44f);
    glVertex2f(0.725f, 0.475f);
    glVertex2f(0.850f, 0.461f);
    glVertex2f(0.880f, 0.416f);
    glVertex2f(0.9f, 0.41f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.753, 0.792, 0.82);
    glVertex2f(0.7f, 0.44f);
    glVertex2f(0.725f, 0.475f);
    glVertex2f(0.850f, 0.461f);
    glVertex2f(0.880f, 0.416f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.7f, 0.44f);
    glVertex2f(0.880f, 0.416f);
    glVertex2f(0.787f, 0.474f);
    glVertex2f(0.782f, 0.36f);
    glEnd();

    GLfloat x = 0.724f;  // Car Tire 1
    GLfloat y = 0.38f;
    GLfloat radius = .02f;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
                   y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();


    x = 0.825f; // Car Tire 2
    y = 0.37f;
    radius = .02f;
    triangleAmount = 100;
    twicePi = 2.0f * PI;

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
                   y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();// Boat 1
    glTranslated(position_boat1x, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.463, 0.486, 0.502);
    glVertex2f(-0.38f, 0.76f);
    glVertex2f(-0.16f, 0.76f);
    glVertex2f(-0.19f, 0.747f);
    glVertex2f(-0.35f, 0.747f);
    glEnd();

    glBegin(GL_TRIANGLES); // Boat 1 Left side Triangles
    glColor3f(1, 0.969, 0.49);
    glVertex2f(-0.26f, 0.83f);
    glVertex2f(-0.33f, 0.77f);
    glVertex2f(-0.26f, 0.77f);
    glEnd();

    glBegin(GL_TRIANGLES);// Boat 1 Right side Triangles
    glColor3f(0.988f, 0.961f, 0.149f);
    glVertex2f(-0.26f, 0.86f);
    glVertex2f(-0.22f, 0.77f);
    glVertex2f(-0.26f, 0.76f);
    glEnd();

    glBegin(GL_LINES); // Boat 1 middle
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.26f, 0.84f);
    glVertex2f(-0.26f, 0.76f);
    glEnd();
    glPopMatrix();

    glPushMatrix();// Boat 2
    glTranslated(position_boat2x, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.525, 0.286, 0.282);
    glVertex2f(0.6f, 0.71f);
    glVertex2f(0.36f, 0.71f);
    glVertex2f(0.39f, 0.69f);
    glVertex2f(0.57f, 0.69f);
    glEnd();

    glBegin(GL_TRIANGLES); // Boat 2 Right side Triangles
    glColor3f(0.961, 0.58, 0.122);
    glVertex2f(0.48f, 0.78f);
    glVertex2f(0.56f, 0.72f);
    glVertex2f(0.48f, 0.72f);
    glEnd();

    glBegin(GL_TRIANGLES); // Boat 2 Left side Triangles
    glColor3f(0.961, 0.58, 0.122);
    glVertex2f(0.48f, 0.82f);
    glVertex2f(0.44f, 0.72f);
    glVertex2f(0.48f, 0.71f);
    glEnd();

    glBegin(GL_LINES); // Boat 2 middle
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.48f, 0.79f);
    glVertex2f(0.48f, 0.71f);
    glEnd();
    glPopMatrix();

    glPushMatrix();  //Bus
    glTranslated(position_busx, position_busy, 0.0f);
    glTranslated(0.4f, -0.13f, 0.0f);
    glBegin(GL_POLYGON); // windows
    glColor3f(0.269, 0.541, 0.467);
    glVertex2f(0.3f, 0.6f);
    glVertex2f(0.625f, 0.575f);
    glVertex2f(0.625f, 0.475f);
    glVertex2f(0.3f, 0.5f);

    glEnd();
    glBegin(GL_POLYGON); // Roof
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.3f, 0.6f);
    glVertex2f(0.625f, 0.575f);
    glVertex2f(0.625f, 0.550f);
    glVertex2f(0.3f, 0.575f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.3f, 0.550f);
    glVertex2f(0.625f, 0.525f);
    glVertex2f(0.625f, 0.475f);
    glVertex2f(0.3f, 0.5f);
    glEnd();

     x = 0.350f;  // Bus  Tire 1
     y = 0.5f;
     radius = .02f;
     triangleAmount = 100; // # of lines used to draw circle
     twicePi= 2.0f * PI;

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
                   y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();


    x = 0.575f;  // Bus  Tire 2
    y = 0.475f;
    radius = 0.02f;
    triangleAmount = 100; // # of lines used to draw circle
    twicePi = 2.0f * PI;

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
                   y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();


    glBegin(GL_LINES); // Bus windows line
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glPushMatrix();
    glTranslated(0.025f, -0.002f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.002f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.002f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();

    glPopMatrix(); // Bus door
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.4f, 0.567f);
    glVertex2f(0.425f, 0.566f);
    glVertex2f(0.425f, 0.4911f);
    glVertex2f(0.4f, 0.4911f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0f, 0.15f, 0.0f);
    glBegin(GL_QUADS); // Chimney
    glColor3f(0.4f, 0.2f, 0.1f);
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.2f, 0.37f);
    glVertex2f(-0.15f, 0.37f);
    glVertex2f(-0.15f, 0.3f);
    glEnd();

    glBegin(GL_QUADS); // House Body
    glColor3f(0.8f, 0.5f, 0.2f);
    glVertex2f(-0.3f, 0.0f);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(-0.3f, 0.2f);
    glEnd();

    glBegin(GL_TRIANGLES); // House Roof
    glColor3f(0.6f, 0.3f, 0.1f);
    glVertex2f(-0.3f, 0.2f);
    glVertex2f(-0.05f, 0.4f);
    glVertex2f(0.2f, 0.2f);
    glEnd();

    glBegin(GL_QUADS); // House Door
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 0.1f);
    glVertex2f(-0.1f, 0.1f);
    glEnd();

    // House Windows
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS); // Left window
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.15f, 0.1f);
    glVertex2f(-0.15f, 0.15f);
    glVertex2f(-0.2f, 0.15f);
    glEnd();

    glBegin(GL_QUADS); // Right window
    glVertex2f(0.1f, 0.15f);
    glVertex2f(0.05f, 0.15f);
    glVertex2f(0.05f, 0.1f);
    glVertex2f(0.1f, 0.1f);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS); // Big Tree  Stem
    glColor3f(0.314, 0.184, 0.149); // Middle
    glVertex2f(0.73f, 0.19f);
    glVertex2f(0.744f, 0.472f);
    glVertex2f(0.754f, 0.472f);
    glVertex2f(0.764f, 0.19f);

    glVertex2f(0.738f, 0.255f); // Left Down
    glVertex2f(0.736f, 0.274f);
    glVertex2f(0.684f, 0.303f);
    glVertex2f(0.680f, 0.298f);

    glVertex2f(0.759f, 0.303f); // Right Down
    glVertex2f(0.759f, 0.319f);
    glVertex2f(0.815f, 0.350f);
    glVertex2f(0.824f, 0.347f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.314, 0.184, 0.149);
    glVertex2f(0.744f, 0.408f); // Left up
    glVertex2f(0.687f, 0.460f);
    glVertex2f(0.744f, 0.424f);

    glVertex2f(0.755f, 0.421f); // Right up
    glVertex2f(0.815f, 0.493f);
    glVertex2f(0.755f, 0.439f);
    glEnd();

    glColor3f(0.549, 0.639, 0.153);  // Big Tree  Top Leaf
    circle(0.644, 0.532, 0.06);
    circle(0.644, 0.477, 0.05);
    circle(0.691, 0.568, 0.07);
    circle(0.771, 0.563, 0.06);
    circle(0.814, 0.562, 0.045);
    circle(0.835, 0.543, 0.05);
    circle(0.839, 0.508, 0.05);
    circle(0.749, 0.457, 0.06);
    circle(0.796, 0.485, 0.05);
    circle(0.709, 0.442, 0.05);
    circle(0.695, 0.457, 0.055);

    circle(0.865, 0.376, 0.035);// Big Tree  Right Leaf
    circle(0.896, 0.390, 0.025);
    circle(0.835, 0.406, 0.03);
    circle(0.802, 0.384, 0.03);
    circle(0.836, 0.366, 0.035);
    circle(0.881, 0.408, 0.03);

    glPushMatrix();
    glTranslated(-0.18f, -0.055f, 0.0f);
    circle(0.865, 0.376, 0.035); // Big Tree Left Leaf
    circle(0.896, 0.390, 0.025);
    circle(0.835, 0.406, 0.03);
    circle(0.802, 0.384, 0.03);
    circle(0.836, 0.366, 0.035);
    circle(0.881, 0.408, 0.03);
    glPopMatrix();

    glBegin(GL_QUADS); // Small Tree Stem
    glColor3f(0.314, 0.184, 0.149);
    glVertex2f(0.54f, 0.20f);
    glVertex2f(0.54f, 0.25f);
    glVertex2f(0.56f, 0.25f);
    glVertex2f(0.56f, 0.20f);
    glEnd();

    glBegin(GL_TRIANGLES); // Small Tree  Leaf
    // Down to Up
    glColor3f(0, 0.235, 0.039);
    glVertex2f(0.47f, 0.25f);
    glVertex2f(0.63f, 0.25f);
    glVertex2f(0.55f, 0.34f);
    glVertex2f(0.48f, 0.30f);
    glVertex2f(0.62f, 0.30f);
    glVertex2f(0.55f, 0.38f);
    glVertex2f(0.50f, 0.35f);
    glVertex2f(0.6f, 0.35f);
    glVertex2f(0.55f, 0.42f);
    glEnd();

    glBegin(GL_POLYGON); // Hill 1
    glColor3f(0.192, 0.459, 0.192);
    glVertex2f(-0.902f, 0.582f);
    glVertex2f(-0.846f, 0.621f);
    glVertex2f(-0.867f, 0.670f);
    glVertex2f(-0.789f, 0.711f);
    glVertex2f(-0.765f, 0.805f);
    glVertex2f(-0.686f, 0.724f);
    glVertex2f(-0.659f, 0.716f);
    glVertex2f(-0.635f, 0.659f);
    glVertex2f(-0.588f, 0.621f);
    glVertex2f(-0.576f, 0.542f);
    glVertex2f(-0.549f, 0.556f);
    glVertex2f(-0.498f, 0.482f);
    glVertex2f(-0.412f, 0.221f);
    glVertex2f(-0.917f, 0.221f);
    glEnd();

    glBegin(GL_POLYGON); // Hill 2
    glColor3f(0.161, 0.4, 0.169);
    glVertex2f(-1.0f, 0.22f);
    glVertex2f(-1.0f, 0.685f);
    glVertex2f(-0.94f, 0.633f);
    glVertex2f(-0.944f, 0.624f);
    glVertex2f(-0.928f, 0.624f);
    glVertex2f(-0.925f, 0.635f);
    glVertex2f(-0.895f, 0.571f);
    glVertex2f(-0.872f, 0.568f);
    glVertex2f(-0.854f, 0.555f);
    glVertex2f(-0.855f, 0.547f);
    glVertex2f(-0.804f, 0.491f);
    glVertex2f(-0.807f, 0.448f);
    glVertex2f(-0.786f, 0.458f);
    glVertex2f(-0.764f, 0.468f);
    glVertex2f(-0.758f, 0.443f);
    glVertex2f(-0.738f, 0.44f);
    glVertex2f(-0.719f, 0.379f);
    glVertex2f(-0.681f, 0.32f);
    glVertex2f(-0.641f, 0.286f);
    glVertex2f(-0.624f, 0.245f);
    glVertex2f(-0.583f, 0.22f);
    glEnd();

    glBegin(GL_POLYGON); // Hill 3
    glColor3f(0.02, 0.357, 0.02);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-1.0f, 0.380f);
    glVertex2f(-0.903f, 0.468f);
    glVertex2f(-0.889f, 0.465f);
    glVertex2f(-0.835f, 0.555f);
    glVertex2f(-0.816f, 0.594f);
    glVertex2f(-0.759f, 0.547f);
    glVertex2f(-0.758f, 0.557f);
    glVertex2f(-0.724f, 0.521f);
    glVertex2f(-0.7f, 0.526f);
    glVertex2f(-0.697f, 0.503f);
    glVertex2f(-0.661f, 0.482f);
    glVertex2f(-0.66f, 0.475f);
    glVertex2f(-0.64f, 0.474f);
    glVertex2f(-0.559f, 0.354f);
    glVertex2f(-0.528f, 0.347f);
    glVertex2f(-0.400f, 0.218f);
    glVertex2f(-0.300f, 0.0f);
    glEnd();

    glFlush();
}


void yourDisplay(){


    glBegin(GL_QUADS); // Grass
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-1.0f, 0.55f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(1.0f, 0.0f);
    glEnd();

    glBegin(GL_QUADS); // Sand
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-1.0f, 0.65f);
    glVertex2f(-1.0f, 0.66f);
    glVertex2f(1.0f, 0.55f);
    glVertex2f(1.0f, 0.48f);
    glEnd();

    glPushMatrix(); // Car
    glTranslated( position_carx, position_cary, 0.0f);
    glLineWidth(2);
    glTranslated(-0.9f, 0.4f, 0.0f);
    glScalef(0.5f, 0.5f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.269, 0.541, 0.467);
    glVertex2f(0.9f, 0.35f);
    glVertex2f(0.650f, 0.38f);
    glVertex2f(0.650f, 0.44f);
    glVertex2f(0.7f, 0.44f);
    glVertex2f(0.725f, 0.475f);
    glVertex2f(0.850f, 0.461f);
    glVertex2f(0.880f, 0.416f);
    glVertex2f(0.9f, 0.41f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.753, 0.792, 0.82);
    glVertex2f(0.7f, 0.44f);
    glVertex2f(0.725f, 0.475f);
    glVertex2f(0.850f, 0.461f);
    glVertex2f(0.880f, 0.416f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.7f, 0.44f);
    glVertex2f(0.880f, 0.416f);
    glVertex2f(0.787f, 0.474f);
    glVertex2f(0.782f, 0.36f);
    glEnd();

    GLfloat x = 0.724f;  // Car Tire 1
    GLfloat y = 0.38f;
    GLfloat radius = .02f;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
                   y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();

    x = 0.825f; // Car Tire 2
    y = 0.37f;
    radius = .02f;
    triangleAmount = 100;
    twicePi = 2.0f * PI;

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
                   y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();
    glPopMatrix();

     glPushMatrix();  //Bus
    glTranslated(position_busx, position_busy, 0.0f);
    glTranslated(0.4f, -0.13f, 0.0f);
    glBegin(GL_POLYGON); // windows
    glColor3f(0.269, 0.541, 0.467);
    glVertex2f(0.3f, 0.6f);
    glVertex2f(0.625f, 0.575f);
    glVertex2f(0.625f, 0.475f);
    glVertex2f(0.3f, 0.5f);

    glEnd();
    glBegin(GL_POLYGON); // Roof
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.3f, 0.6f);
    glVertex2f(0.625f, 0.575f);
    glVertex2f(0.625f, 0.550f);
    glVertex2f(0.3f, 0.575f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.3f, 0.550f);
    glVertex2f(0.625f, 0.525f);
    glVertex2f(0.625f, 0.475f);
    glVertex2f(0.3f, 0.5f);
    glEnd();

     x = 0.350f;  // Bus  Tire 1
     y = 0.5f;
     radius = .02f;
     triangleAmount = 100; // # of lines used to draw circle
     twicePi= 2.0f * PI;

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
                   y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();


    x = 0.575f;  // Bus  Tire 2
    y = 0.475f;
    radius = 0.02f;
    triangleAmount = 100; // # of lines used to draw circle
    twicePi = 2.0f * PI;

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
                   y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();


    glBegin(GL_LINES); // Bus windows line
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glPushMatrix();
    glTranslated(0.025f, -0.002f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.002f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.002f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();
    glTranslated(0.025f, -0.0021f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.325f, 0.575f);
    glVertex2f(0.325f, 0.548f);
    glEnd();

    glPopMatrix(); // Bus door
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.4f, 0.567f);
    glVertex2f(0.425f, 0.566f);
    glVertex2f(0.425f, 0.4911f);
    glVertex2f(0.4f, 0.4911f);
    glEnd();
    glPopMatrix();


    glBegin(GL_POLYGON);  // Sea Snow
    glColor3f(0.96, 0.96, 0.96);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-.5f, 0.689f);
    glVertex2f(-0.36f, 0.687f);
    glVertex2f(-0.34f, 0.686f);
    glVertex2f(-0.56f, 0.687f);
    glVertex2f(-0.54f, 0.686f);
    glEnd();

    glPushMatrix();
    glTranslated(0.9f, -0.07f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.96, 0.96, 0.96);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-.5f, 0.689f);
    glVertex2f(-0.36f, 0.687f);
    glVertex2f(-0.34f, 0.686f);
    glVertex2f(-0.56f, 0.687f);
    glVertex2f(-0.54f, 0.686f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.4f, 0.05f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.96, 0.96, 0.96);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-.5f, 0.689f);
    glVertex2f(-0.36f, 0.687f);
    glVertex2f(-0.34f, 0.686f);
    glVertex2f(-0.56f, 0.687f);
    glVertex2f(-0.54f, 0.686f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.6f, 0.06f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.96, 0.96, 0.96);
    glVertex2f(-0.5f, 0.68f);
    glVertex2f(-.5f, 0.689f);
    glVertex2f(-0.36f, 0.687f);
    glVertex2f(-0.34f, 0.686f);
    glVertex2f(-0.56f, 0.687f);
    glVertex2f(-0.54f, 0.686f);
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0.96, 0.96, 0.96);
    glVertex2f(-0.99f, 0.7f);
    glVertex2f(-0.85f, 0.71f);
    glVertex2f(-0.79f, 0.7f);
    glVertex2f(-0.87f, 0.71f);
    glVertex2f(-0.88f, 0.7f);
    glVertex2f(-0.93f, 0.7f);
    glVertex2f(-1.1f, 0.69f);
    glEnd();

    glPushMatrix();
    glTranslated(0.7f, -0.03f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.96, 0.96, 0.96);
    glVertex2f(-0.99f, 0.7f);
    glVertex2f(-0.85f, 0.71f);
    glVertex2f(-0.79f, 0.7f);
    glVertex2f(-0.87f, 0.71f);
    glVertex2f(-0.88f, 0.7f);
    glVertex2f(-0.93f, 0.7f);
    glVertex2f(-1.1f, 0.69f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.4f, 0.02f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.96, 0.96, 0.96);
    glVertex2f(-0.99f, 0.7f);
    glVertex2f(-0.85f, 0.71f);
    glVertex2f(-0.79f, 0.7f);
    glVertex2f(-0.87f, 0.71f);
    glVertex2f(-0.88f, 0.7f);
    glVertex2f(-0.93f, 0.7f);
    glVertex2f(-1.1f, 0.69f);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslated(1.6f, -0.08f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(0.96, 0.96, 0.96);
    glVertex2f(-0.99f, 0.7f);
    glVertex2f(-0.85f, 0.71f);
    glVertex2f(-0.79f, 0.7f);
    glVertex2f(-0.87f, 0.71f);
    glVertex2f(-0.88f, 0.7f);
    glVertex2f(-0.93f, 0.7f);
    glVertex2f(-1.1f, 0.69f);
    glEnd();
    glPopMatrix();

    glPushMatrix();// Boat 1
    glTranslated(position_boat1x, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.463, 0.486, 0.502);
    glVertex2f(-0.38f, 0.76f);
    glVertex2f(-0.16f, 0.76f);
    glVertex2f(-0.19f, 0.747f);
    glVertex2f(-0.35f, 0.747f);
    glEnd();

    glBegin(GL_TRIANGLES); // Boat 1 Left side Triangles
    glColor3f(1, 0.969, 0.49);
    glVertex2f(-0.26f, 0.83f);
    glVertex2f(-0.33f, 0.77f);
    glVertex2f(-0.26f, 0.77f);
    glEnd();

    glBegin(GL_TRIANGLES);// Boat 1 Right side Triangles
    glColor3f(0.988f, 0.961f, 0.149f);
    glVertex2f(-0.26f, 0.86f);
    glVertex2f(-0.22f, 0.77f);
    glVertex2f(-0.26f, 0.76f);
    glEnd();

    glBegin(GL_LINES); // Boat 1 middle
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.26f, 0.84f);
    glVertex2f(-0.26f, 0.76f);
    glEnd();
    glPopMatrix();

    glPushMatrix();// Boat 2
    glTranslated(position_boat2x, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.525, 0.286, 0.282);
    glVertex2f(0.6f, 0.71f);
    glVertex2f(0.36f, 0.71f);
    glVertex2f(0.39f, 0.69f);
    glVertex2f(0.57f, 0.69f);
    glEnd();

    glBegin(GL_TRIANGLES); // Boat 2 Right side Triangles
    glColor3f(0.961, 0.58, 0.122);
    glVertex2f(0.48f, 0.78f);
    glVertex2f(0.56f, 0.72f);
    glVertex2f(0.48f, 0.72f);
    glEnd();

    glBegin(GL_TRIANGLES); // Boat 2 Left side Triangles
    glColor3f(0.961, 0.58, 0.122);
    glVertex2f(0.48f, 0.82f);
    glVertex2f(0.44f, 0.72f);
    glVertex2f(0.48f, 0.71f);
    glEnd();

    glBegin(GL_LINES); // Boat 2 middle
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.48f, 0.79f);
    glVertex2f(0.48f, 0.71f);
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON); // Hill 1
    glColor3f(0.192, 0.459, 0.192);
    glVertex2f(-0.902f, 0.582f);
    glVertex2f(-0.846f, 0.621f);
    glVertex2f(-0.867f, 0.670f);
    glVertex2f(-0.789f, 0.711f);
    glVertex2f(-0.765f, 0.805f);
    glVertex2f(-0.686f, 0.724f);
    glVertex2f(-0.659f, 0.716f);
    glVertex2f(-0.635f, 0.659f);
    glVertex2f(-0.588f, 0.621f);
    glVertex2f(-0.576f, 0.542f);
    glVertex2f(-0.549f, 0.556f);
    glVertex2f(-0.498f, 0.482f);
    glVertex2f(-0.412f, 0.221f);
    glVertex2f(-0.917f, 0.221f);
    glEnd();
    //Hill 1 Snow
    glBegin(GL_POLYGON); // first
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.791f, 0.714f);
    glVertex2f(-0.763f, 0.742f);
    glVertex2f(-0.776f, 0.761f);
    glVertex2f(-0.744f, 0.756f);
    glVertex2f(-0.713f, 0.718f);
    glVertex2f(-0.746f, 0.722f);
    glVertex2f(-0.744f, 0.756f);
    glVertex2f(-0.746f, 0.722f);
    glVertex2f(-0.736f, 0.663f);
    glVertex2f(-0.83f, 0.631f);
    glVertex2f(-0.78f, 0.666f);
    glVertex2f(-0.815f, 0.679f);
    glVertex2f(-0.815f, 0.679f);
    glVertex2f(-0.767f, 0.716f);
    glVertex2f(-0.791f, 0.714f);
    glEnd();

    glPushMatrix(); //second
    glTranslated(0.15f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.967f, 0.514f);
    glVertex2f(-0.952f, 0.546f);
    glVertex2f(-0.949f, 0.588f);
    glVertex2f(-0.929f, 0.601f);
    glVertex2f(-0.922f, 0.558f);
    glVertex2f(-0.933f, 0.522f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.01f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.952f, 0.546f);
    glVertex2f(-0.971f, 0.553f);
    glVertex2f(-0.972f, 0.5694f);
    glVertex2f(-0.990f, 0.581f);
    glVertex2f(-0.979f, 0.642f);
    glVertex2f(-0.96f, 0.632f);
    glVertex2f(-0.949f, 0.588f);
    glEnd();
    glPopMatrix();

    glPushMatrix(); //Third
    glTranslated(0.3f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.967f, 0.514f);
    glVertex2f(-0.952f, 0.546f);
    glVertex2f(-0.949f, 0.588f);
    glVertex2f(-0.929f, 0.601f);
    glVertex2f(-0.922f, 0.558f);
    glVertex2f(-0.933f, 0.522f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.952f, 0.546f);
    glVertex2f(-0.971f, 0.553f);
    glVertex2f(-0.972f, 0.5694f);
    glVertex2f(-0.990f, 0.581f);
    glVertex2f(-0.979f, 0.642f);
    glVertex2f(-0.96f, 0.632f);
    glVertex2f(-0.949f, 0.588f);
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON); // Hill 2
    glColor3f(0.161, 0.4, 0.169);
    glVertex2f(-1.0f, 0.22f);
    glVertex2f(-1.0f, 0.685f);
    glVertex2f(-0.94f, 0.633f);
    glVertex2f(-0.944f, 0.624f);
    glVertex2f(-0.928f, 0.624f);
    glVertex2f(-0.925f, 0.635f);
    glVertex2f(-0.895f, 0.571f);
    glVertex2f(-0.872f, 0.568f);
    glVertex2f(-0.854f, 0.555f);
    glVertex2f(-0.855f, 0.547f);
    glVertex2f(-0.804f, 0.491f);
    glVertex2f(-0.807f, 0.448f);
    glVertex2f(-0.786f, 0.458f);
    glVertex2f(-0.764f, 0.468f);
    glVertex2f(-0.758f, 0.443f);
    glVertex2f(-0.738f, 0.44f);
    glVertex2f(-0.719f, 0.379f);
    glVertex2f(-0.681f, 0.32f);
    glVertex2f(-0.641f, 0.286f);
    glVertex2f(-0.624f, 0.245f);
    glVertex2f(-0.583f, 0.22f);
    glEnd();

    // Hill 2 Snow
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0); // First
    glVertex2f(-0.982f, 0.436f);
    glVertex2f(-0.979f, 0.470f);
    glVertex2f(-0.938f, 0.485f);
    glVertex2f(-0.928f, 0.5224f);
    glVertex2f(-0.941f, 0.471f);
    glVertex2f(-0.943f, 0.447f);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0); // Second
    glVertex2f(-0.967f, 0.514f);
    glVertex2f(-0.952f, 0.546f);
    glVertex2f(-0.949f, 0.588f);
    glVertex2f(-0.929f, 0.601f);
    glVertex2f(-0.922f, 0.558f);
    glVertex2f(-0.933f, 0.522f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0); // First
    glVertex2f(-0.952f, 0.546f);
    glVertex2f(-0.971f, 0.553f);
    glVertex2f(-0.972f, 0.5694f);
    glVertex2f(-0.990f, 0.581f);
    glVertex2f(-0.979f, 0.642f);
    glVertex2f(-0.96f, 0.632f);
    glVertex2f(-0.949f, 0.588f);
    glEnd();

    glBegin(GL_POLYGON); // Hill 3
    glColor3f(1.0, 0.980, 0.945); // Floral White
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-1.0f, 0.380f);
    glVertex2f(-0.903f, 0.468f);
    glVertex2f(-0.889f, 0.465f);
    glVertex2f(-0.835f, 0.555f);
    glVertex2f(-0.816f, 0.594f);
    glVertex2f(-0.759f, 0.547f);
    glVertex2f(-0.758f, 0.557f);
    glVertex2f(-0.724f, 0.521f);
    glVertex2f(-0.7f, 0.526f);
    glVertex2f(-0.697f, 0.503f);
    glVertex2f(-0.661f, 0.482f);
    glVertex2f(-0.66f, 0.475f);
    glVertex2f(-0.64f, 0.474f);
    glVertex2f(-0.559f, 0.354f);
    glVertex2f(-0.528f, 0.347f);
    glVertex2f(-0.400f, 0.218f);
    glVertex2f(-0.300f, 0.0f);
    glEnd();

    glPushMatrix();
    glTranslated(0.0f, 0.15f, 0.0f);
    glBegin(GL_QUADS); // Chimney
    glColor3f(0.96, 0.96, 0.96); // Cultured
    glVertex2f(-0.2f, 0.1f);
    glVertex2f(-0.2f, 0.37f);
    glVertex2f(-0.15f, 0.37f);
    glVertex2f(-0.15f, 0.3f);
    glEnd();

    glBegin(GL_QUADS); // House Body
    glColor3f(0.8f, 0.5f, 0.2f);
    glVertex2f(-0.3f, 0.0f);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(-0.3f, 0.2f);
    glEnd();

    glBegin(GL_TRIANGLES); // House Roof
    glColor3f(0.96, 0.96, 0.96); // Cultured
    glVertex2f(-0.3f, 0.2f);
    glVertex2f(-0.05f, 0.4f);
    glVertex2f(0.2f, 0.2f);
    glEnd();

    glBegin(GL_QUADS); // House Door
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 0.1f);
    glVertex2f(-0.1f, 0.1f);
    glEnd();

    // House Windows
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.2f, 0.1f); // Left window
    glVertex2f(-0.15f, 0.1f);
    glVertex2f(-0.15f, 0.15f);
    glVertex2f(-0.2f, 0.15f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.1f, 0.15f); // Right window
    glVertex2f(0.05f, 0.15f);
    glVertex2f(0.05f, 0.1f);
    glVertex2f(0.1f, 0.1f);
    glEnd();
    glPopMatrix();

    glBegin(GL_QUADS); // Small Tree Stem
    glColor3f(0.314, 0.184, 0.149);
    glVertex2f(0.54f, 0.20f);
    glVertex2f(0.54f, 0.25f);
    glVertex2f(0.56f, 0.25f);
    glVertex2f(0.56f, 0.20f);
    glEnd();

    glBegin(GL_TRIANGLES); // Small Tree  Leaf
    // Down to Up
    glColor3f(0.96, 0.96, 0.96); // Cultured
    glVertex2f(0.47f, 0.25f);
    glVertex2f(0.63f, 0.25f);
    glVertex2f(0.55f, 0.34f);
    glVertex2f(0.48f, 0.30f);
    glVertex2f(0.62f, 0.30f);
    glVertex2f(0.55f, 0.38f);
    glVertex2f(0.50f, 0.35f);
    glVertex2f(0.6f, 0.35f);
    glVertex2f(0.55f, 0.42f);
    glEnd();

    glBegin(GL_QUADS); // Big Tree  Stem
    glColor3f(0.314, 0.184, 0.149); // Middle
    glVertex2f(0.73f, 0.19f);
    glVertex2f(0.744f, 0.472f);
    glVertex2f(0.754f, 0.472f);
    glVertex2f(0.764f, 0.19f);

    glVertex2f(0.738f, 0.255f); // Left Down
    glVertex2f(0.736f, 0.274f);
    glVertex2f(0.684f, 0.303f);
    glVertex2f(0.680f, 0.298f);

    glVertex2f(0.759f, 0.303f); // Right Down
    glVertex2f(0.759f, 0.319f);
    glVertex2f(0.815f, 0.350f);
    glVertex2f(0.824f, 0.347f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.314, 0.184, 0.149);
    glVertex2f(0.744f, 0.408f); // Left up
    glVertex2f(0.687f, 0.460f);
    glVertex2f(0.744f, 0.424f);

    glVertex2f(0.755f, 0.421f); // Right up
    glVertex2f(0.815f, 0.493f);
    glVertex2f(0.755f, 0.439f);
    glEnd();

    glColor3f(0.96, 0.96, 0.96);  // Big Tree  Top Leaf
    circle(0.644, 0.532, 0.06);
    circle(0.644, 0.477, 0.05);
    circle(0.691, 0.568, 0.07);
    circle(0.771, 0.563, 0.06);
    circle(0.814, 0.562, 0.045);
    circle(0.835, 0.543, 0.05);
    circle(0.839, 0.508, 0.05);
    circle(0.749, 0.457, 0.06);
    circle(0.796, 0.485, 0.05);
    circle(0.709, 0.442, 0.05);
    circle(0.695, 0.457, 0.055);

    circle(0.865, 0.376, 0.035);// Big Tree  Right Leaf
    circle(0.896, 0.390, 0.025);
    circle(0.835, 0.406, 0.03);
    circle(0.802, 0.384, 0.03);
    circle(0.836, 0.366, 0.035);
    circle(0.881, 0.408, 0.03);

    glPushMatrix();
    glTranslated(-0.18f, -0.055f, 0.0f);
    circle(0.865, 0.376, 0.035); // Big Tree Left Leaf
    circle(0.896, 0.390, 0.025);
    circle(0.835, 0.406, 0.03);
    circle(0.802, 0.384, 0.03);
    circle(0.836, 0.366, 0.035);
    circle(0.881, 0.408, 0.03);
    glPopMatrix();

    glFlush();
    //glutSwapBuffers();
}

void summer()
{
    glClearColor(0.929f, 0.925f, 0.831f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    sun();
    myDisplay();

    glFlush();
}

void winter()
{
    glClearColor(0.929f, 0.925f, 0.831f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    myDisplay();
    yourDisplay();

    glPushMatrix();
    glTranslated(0.0f, snowP, 0.0f);
    glColor3f(1.0, 1.0, 1.0);
    glTranslated(0.0, 0.4, 0.0);
    snowball();
    glTranslated(0.2, -0.5, 0);
    snowball();
    glTranslated(-0.1, -0.45, 0);
    snowball();
    glTranslated(0.0, -0.5, 0);
    snowball();
    glTranslated(0.2, -0.5, 0);
    snowball();
    glTranslated(-0.1, -0.5, 0);
    snowball();
    glPopMatrix();

    glFlush();
}

void myKeyboard(unsigned char key, int x, int y)
{
    switch (key)
    {

    case 'w':

         currentMode = 1;

        glutDisplayFunc(winter);

        glutPostRedisplay();

        break;

    case 's':

        currentMode = 0; // Switch to summer mode

        glutDisplayFunc(summer);

        glutPostRedisplay();

        break;

    default:
        break;
    }
}

void myInit (void){
    glClearColor(0.5, 0.5, 0.5, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, 0.0, 1.0);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    //glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (1520, 800);
    glutInitWindowPosition (0,0);
    glutCreateWindow ("Coastal Highway");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutDisplayFunc(summer);
    //glutDisplayFunc(winter);
    glutKeyboardFunc(myKeyboard);
    glutSpecialFunc(SpecialInput);
    glutTimerFunc(35, motion_vehicle, 0);
    glutTimerFunc(150, snowUp, 0);   /// winter
    glutMainLoop();
}
