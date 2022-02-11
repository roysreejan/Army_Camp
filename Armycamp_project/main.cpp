#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>
#include<mmsystem.h>
#define PI 3.14159265358979323846

using namespace std;
bool vrain=false;
bool vnight=false;
bool vday=false;
bool vevening=false;
float counter1=0.0;
float counter2=0.0;
GLfloat positionBoard1 = 0.0f;
GLfloat rainSpeed=0.08f; //rain
GLfloat rainPos = 0.0f;
GLfloat rainSpeedX=0.02f;
GLfloat rainPosX = 0.0f;

GLfloat position2 =0.0f;//bird
GLfloat speed2=0.02f;
GLfloat positionofTank =0.0f;//tank
GLfloat speed3 = 0.0f;

GLfloat positionOfCloud=0.0f;
GLfloat Speed4 =0.005;
GLfloat positionOfCloud2=0.0f;
GLfloat Speed5 =0.005;
GLfloat positionOfArmy= 0.0f;
GLfloat Speed6 = 0.0;
GLfloat positionOfBullet = 0.0f;
GLfloat Speed7 = 0.0f;
GLfloat positionOfTankBullet = 0.0f;
GLfloat Speed8 = 0.0f;
GLfloat positionSun = 0.0f;
GLfloat Speed9 =0.001;
GLfloat positionBoard= 0.0f;
GLfloat positionBoard2= 0.0f;
GLfloat Speed10=0.004;
GLfloat Speed11=0.003;
GLfloat positionHelicopter= 0.0f;
GLfloat Speed12=0.0043;


void init(void)
{
gluOrtho2D(0,800,400,0);
glOrtho(0,800,500,0,1,-1);
}
void daysky()
{
    glBegin(GL_QUADS);
    glColor3ub(100, 160, 255);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
    glVertex2f(-1.0,0);
    glVertex2f(1.0,0);
    glColor4f(0.4f, 0.8f, 1.0f, 1.0f);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glEnd();

}
void eveningsky()
{
    glBegin(GL_QUADS);
    glColor3ub(100, 160, 255);
    glColor4f(0.890f, 0.274f, 0.109, 1.0f);
    glVertex2f(-1.0,-0.3);
    glVertex2f(1.0,-0.3);
    glColor4f(0.247f, 0.235f, 0.427f, 1.0f);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glEnd();

}
void cloudsky()
{
    glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glColor4f(0.4f, 0.5f, 0.5f, 1.0f);
    glVertex2f(-1.0,-0.3);
    glVertex2f(1.0,-0.3);
    glColor4f(0.207f, 0.227f, 0.290f, 1.0f);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glEnd();

}
void nightsky()
{
    glColor3ub(13, 42, 67);
    glBegin(GL_QUADS);
    //glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0,-0.3);
    glVertex2f(1.0,-0.3);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glEnd();

}
void stars()
{
    glPointSize( 2.5 );
    glBegin(GL_POINTS);
    glColor3ub(247, 240, 188);
    glVertex2f(0.8f,0.95f);
    glVertex2f(0.9f,0.9f);
    glVertex2f(0.95f,0.7f);
    glVertex2f(0.8f,0.8f);
    glVertex2f(0.7f,0.9f);
    glVertex2f(0.6f,0.8f);
    glVertex2f(0.5f,0.75f);
    glVertex2f(0.4f,0.9f);
    glVertex2f(0.3f,0.7f);
    glVertex2f(0.25f,0.9f);
    glVertex2f(0.25f,0.7f);
    glVertex2f(0.1f,0.9f);
    glVertex2f(0.15f,0.75f);
    glVertex2f(0.0f,0.8f);
    glVertex2f(-0.7f,0.9f);
    glVertex2f(-0.8f,0.95f);
    glVertex2f(-0.4f,0.8f);
    glVertex2f(-0.8f,0.95f);
    glVertex2f(-0.9f,0.9f);
    glVertex2f(-0.95f,0.7f);
    glVertex2f(-0.8f,0.8f);
    glVertex2f(-0.7f,0.9f);
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.5f,0.75f);
    glVertex2f(-0.4f,0.9f);
    glVertex2f(-0.3f,0.7f);
    glVertex2f(-0.25f,0.9f);
    glVertex2f(-0.25f,0.7f);
    glVertex2f(-0.15f,0.75f);
    glVertex2f(-0.1f,0.7f);
     glVertex2f(0.8f,0.75f);
    glVertex2f(0.9f,0.7f);
    glVertex2f(0.95f,0.5f);
    glVertex2f(0.8f,0.6f);
    glVertex2f(0.7f,0.7f);
    glVertex2f(0.6f,0.6f);
    glVertex2f(0.5f,0.55f);
    glVertex2f(0.4f,0.7f);
    glVertex2f(0.3f,0.9f);
    glVertex2f(0.25f,0.7f);
    glVertex2f(0.25f,0.5f);
    glVertex2f(0.1f,0.7f);
    glVertex2f(0.15f,0.55f);
    glVertex2f(0.0f,0.6f);
    glVertex2f(-0.7f,0.7f);
    glVertex2f(-0.8f,0.75f);
    glVertex2f(-0.4f,0.6f);
    glVertex2f(-0.8f,0.75f);
    glVertex2f(-0.9f,0.7f);
    glVertex2f(-0.95f,0.5f);
    glVertex2f(-0.8f,0.6f);
    glVertex2f(-0.7f,0.7f);
    glVertex2f(-0.6f,0.6f);
    glVertex2f(-0.5f,0.55f);
    glVertex2f(-0.4f,0.7f);
    glVertex2f(-0.3f,0.5f);
    glVertex2f(-0.25f,0.7f);
    glVertex2f(-0.25f,0.5f);
    glVertex2f(-0.15f,0.55f);
    glVertex2f(-0.1f,0.7f);
    glEnd();

}
void sun()
{

 //sun (move)
glPushMatrix();
glTranslatef(0.0f,-positionSun, 0.0f);
GLfloat x1=0.7; GLfloat y1=0.4; GLfloat radius1 =0.1f;
int triangleAmount = 100; //# of triangles used to draw circle

GLfloat twicePi = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 140, 0);
glVertex2f(x1, y1); // center of circle
for(int i1 = 0; i1 <= triangleAmount;i1++)
{
glVertex2f(
x1 + (radius1 * cos(i1 * twicePi / triangleAmount)),
y1 + (radius1 * sin(i1 * twicePi / triangleAmount))
);
}
glEnd();
glPopMatrix();
}
void sunevening()
{

 //sun (move)
glPushMatrix();
glTranslatef(0.0f,positionSun, 0.0f);
GLfloat x1=0.7; GLfloat y1=0.3; GLfloat radius1 =0.1f;
int triangleAmount = 100; //# of triangles used to draw circle

GLfloat twicePi = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(253, 92,42);
glVertex2f(x1, y1); // center of circle
for(int i1 = 0; i1 <= triangleAmount;i1++)
{
glVertex2f(
x1 + (radius1 * cos(i1 * twicePi / triangleAmount)),
y1 + (radius1 * sin(i1 * twicePi / triangleAmount))
);
}
glEnd();
glPopMatrix();
}
void moon()
{
    int i;

    GLfloat x= -0.87f; GLfloat y=0.88f; GLfloat radius =0.07f;
    int triangleAmount = 100;
    glColor3ub(247, 240, 188);
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

}

void rain()
{

    float x=-1.0;
    float temp=0.9;
    for (int j=0;j<30;j++)
    {
        float y=temp;
        for (int l=0;l<40;l++)
        {
            glPushMatrix();
            glTranslatef(rainPosX,rainPos,0.0f);
            glBegin(GL_LINES);
            glColor3ub(222, 222, 222);
            glVertex2f(x,y);
            x+=.05;
            y+=.1;
            glVertex2f(x,y);
            glEnd();
            y=temp;
            x=x+.1;
            glPopMatrix();
        }
        temp-=.2;x=-1;
    }
    glEnd();

}


void update(int value)
{
     //rain movement portion
     if(rainPos<-.001)
     {
        rainPos=.5;
     }
    if(rainPosX<-0.1)
    {
        rainPosX=.05;
    }
    if(vrain)
    {
        rainPos-=rainSpeed;
        rainPosX-=rainSpeedX;
    }

	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}
void update2(int value) {
//bird movement portion

if(position2 < -1.25)
position2 = 1.0f;

position2 -= speed2;

glutPostRedisplay();
glutTimerFunc(100, update2, 0);

}
void update3(int value){

//tank movement portion
if(positionofTank < -1.6)
positionofTank = 1.0f;


positionofTank -=speed3;


glutPostRedisplay();
glutTimerFunc(100, update3, 0);

}
void update4(int value){
//cloud 1 movement portion

if(positionOfCloud < -1.30)
positionOfCloud = 1.0f;
positionOfCloud -=Speed4;


glutPostRedisplay();
glutTimerFunc(100, update4, 0);
}
void update5(int value){
//cloud 2 movement portion

if(positionOfCloud2 < -1.30)
positionOfCloud2 = 1.0f;
positionOfCloud2 -=Speed5;

glutPostRedisplay();
glutTimerFunc(100, update5, 0);
}
void update6(int value){
//armies movement portions

if(positionOfArmy > -0.9 && positionOfArmy > 0.6 )
positionOfArmy  = 0.6f;
positionOfArmy  += Speed6;


glutPostRedisplay();
glutTimerFunc(100, update6, 0);
}
void update7(int value){

//bullets moving portion
if(positionOfBullet < -1.20 )
positionOfBullet  = 1.0f;
positionOfBullet  += Speed7;

glutPostRedisplay();
glutTimerFunc(100, update7, 0);
}
void update8(int value){

//bullets moving portion
if(positionOfTankBullet > 1.20 )
positionOfTankBullet  = 2.0f;
positionOfTankBullet  -= Speed8;
glutPostRedisplay();
glutTimerFunc(100, update8, 0);
}
void update9(int value){

//sun up and down
if(positionSun < -0.3)
positionSun = 0.0f;
positionSun -=Speed9;


glutPostRedisplay();
glutTimerFunc(100, update9, 0);
}
void update10(int value){
//big shooting board

if(positionBoard > -0.9 && positionBoard > 0.3 )
positionBoard  = -0.1f;
positionBoard += Speed10;


glutPostRedisplay();
glutTimerFunc(100, update10, 0);
}
void update11(int value)
{ //small
if(positionBoard2<-0.3)
positionBoard2 = 0.2f;
positionBoard2 -= Speed11;

glutPostRedisplay();
glutTimerFunc(100, update11, 0);
}
void update12(int value){
//big shooting board

if(positionHelicopter >1.0f )
    //helicopter
positionHelicopter  = -1.0f;
positionHelicopter += Speed12;


glutPostRedisplay();
glutTimerFunc(100, update12, 0);
}
void lighteningEye()
{

//NotunGhorWindow2LighteningEyes1
glPushMatrix();
GLfloat x10=-0.39; GLfloat y10=-0.12; GLfloat radius10 =0.011f;
int triangleAmount10 = 100; //# of triangles used to draw circle

GLfloat twicePi10 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(x10, y10); // Center of circle
for(int i2 = 0; i2 <= triangleAmount10;i2++)
{
glVertex2f(
x10 + (radius10 * cos(i2 * twicePi10 / triangleAmount10)),
y10 + (radius10 * sin(i2 * twicePi10 / triangleAmount10))
);
}
glEnd();

//glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x11=-0.35; GLfloat y11=-0.12; GLfloat radius11 =0.011f;
int triangleAmount11 = 100; //# of triangles used to draw circle

GLfloat twicePi11 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(x11, y11); // Center of circle
for(int i2 = 0; i2 <= triangleAmount11;i2++)
{
glVertex2f(
x11 + (radius11 * cos(i2 * twicePi11 / triangleAmount11)),
y11 + (radius11 * sin(i2 * twicePi11 / triangleAmount11))
);
}
glEnd();
glPopMatrix();
}
void steadyObjects()
{
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-1.0, -0.2); //spike1
glVertex2f(1.0, -0.2);
glEnd();
//spike-1 start
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.0, -0.21); //spike1_star-1
glVertex2f(0.02, -0.19);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.02, -0.21); //spike1_star-1
glVertex2f(0.0, -0.19);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.01, -0.19); //spike1_star-1
glVertex2f(0.01, -0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.25, -0.19); //spike1_star-1
glVertex2f(0.27, -0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.27, -0.19); //spike1_star-1
glVertex2f(0.25, -0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.26, -0.19); //spike1_star-1
glVertex2f(0.26, -0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.35, -0.21); //spike1_star-1
glVertex2f(0.37, -0.19);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.35, -0.19); //spike1_star-1
glVertex2f(0.37, -0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.36, -0.19); //spike1_star-1
glVertex2f(0.36, -0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.65, -0.21); //spike1_star-1
glVertex2f(0.67, -0.19);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.65, -0.19); //spike1_star-1
glVertex2f(0.67, -0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.66, -0.19); //spike1_star-1
glVertex2f(0.66, -0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.75, -0.21); //spike1_star-1
glVertex2f(0.77, -0.19);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.75, -0.19); //spike1_star-1
glVertex2f(0.77, -0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.76, -0.19); //spike1_star-1
glVertex2f(0.76, -0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.85, -0.21); //spike1_star-1
glVertex2f(0.87, -0.19);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.85, -0.19); //spike1_star-1
glVertex2f(0.87, -0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.86, -0.19); //spike1_star-1
glVertex2f(0.86, -0.21);
glEnd();
//end-1
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f); //spike2
glVertex2f(-1.0, -0.25);
glVertex2f(1.0, -0.25);
glEnd();
//start-2
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.08, -0.26); //spike1_star-2
glVertex2f(0.06, -0.24);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.08, -0.24); //spike1_star-2
glVertex2f(0.06, -0.26);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.07, -0.26); //spike1_star-2
glVertex2f(0.07, -0.24);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.18, -0.26); //spike1_star-2
glVertex2f(0.20, -0.24);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.18, -0.24); //spike1_star-2
glVertex2f(0.20, -0.26);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.19, -0.26); //spike1_star-2
glVertex2f(0.19, -0.24);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.28, -0.26); //spike1_star-2
glVertex2f(0.30, -0.24);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.28, -0.24); //spike1_star-2
glVertex2f(0.30, -0.26);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.29, -0.26); //spike1_star-2
glVertex2f(0.29, -0.24);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.42, -0.26); //spike1_star-2
glVertex2f(0.44, -0.24);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.42, -0.24); //spike1_star-2
glVertex2f(0.44, -0.26);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.43, -0.26); //spike1_star-2
glVertex2f(0.43, -0.24);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.58, -0.26); //spike1_star-2
glVertex2f(0.60, -0.24);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.58, -0.24); //spike1_star-2
glVertex2f(0.60, -0.26);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.59, -0.26); //spike1_star-2
glVertex2f(0.59, -0.24);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.69, -0.26); //spike1_star-2
glVertex2f(0.71, -0.24);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.69, -0.24); //spike1_star-2
glVertex2f(0.71, -0.26);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.70, -0.26); //spike1_star-2
glVertex2f(0.70, -0.24);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.80, -0.26); //spike1_star-2
glVertex2f(0.82, -0.24);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.80, -0.24); //spike1_star-2
glVertex2f(0.82, -0.26);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.81, -0.26); //spike1_star-2
glVertex2f(0.81, -0.24);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.90, -0.26); //spike1_star-2
glVertex2f(0.92, -0.24);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.90, -0.24); //spike1_star-2
glVertex2f(0.92, -0.26);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.91, -0.26); //spike1_star-2
glVertex2f(0.91, -0.24);
glEnd();
//end-2
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-1.0, -0.3); //spike3
glVertex2f(1.0, -0.3);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.02, -0.31); //spike1_star-3
glVertex2f(0.04, -0.29);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.02, -0.29); //spike1_star-3
glVertex2f(0.04, -0.31);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.03, -0.29); //spike1_star-3
glVertex2f(0.03, -0.31);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.25, -0.31); //spike1_star-3
glVertex2f(0.27, -0.29);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.25, -0.29); //spike1_star-3
glVertex2f(0.27, -0.31);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.26, -0.29); //spike1_star-3
glVertex2f(0.26, -0.31);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.35, -0.31); //spike1_star-3
glVertex2f(0.37, -0.29);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.35, -0.29); //spike1_star-3
glVertex2f(0.37, -0.31);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.36, -0.29); //spike1_star-3
glVertex2f(0.36, -0.31);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.65, -0.31); //spike1_star-3
glVertex2f(0.67, -0.29);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.65, -0.29); //spike1_star-3
glVertex2f(0.67, -0.31);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.66, -0.29); //spike1_star-3
glVertex2f(0.66, -0.31);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.75, -0.31); //spike1_star-3
glVertex2f(0.77, -0.29);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.75, -0.19); //spike1_star-3
glVertex2f(0.77, -0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.76, -0.19); //spike1_star-3
glVertex2f(0.76, -0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.95, -0.21); //spike1_star-3
glVertex2f(0.97, -0.19);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.95, -0.19); //spike1_star-3
glVertex2f(0.97, -0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.96, -0.19); //spike1_star-3
glVertex2f(0.96, -0.21);
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.95, -0.31); //spike1_star-3
glVertex2f(0.97, -0.29);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.95, -0.29); //spike1_star-3
glVertex2f(0.97, -0.31);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.96, -0.29); //spike1_star-3
glVertex2f(0.96, -0.31);
glEnd();
//end-3
glBegin(GL_QUADS);
glColor3ub(192,192,192);
glVertex2f(0.1, -0.15);
glVertex2f(0.13, -0.15); //pillrer
glVertex2f(0.13, -0.35);
glVertex2f(0.1, -0.35);
glEnd();
glBegin(GL_QUADS);
glColor3ub(192,192,192);
glVertex2f(0.5, -0.15);
glVertex2f(0.53, -0.15); //pillrer-2
glVertex2f(0.53, -0.35);
glVertex2f(0.5, -0.35);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.8, 0.06);
glVertex2f(-0.8, 0.4); //backbuilding1_border
glVertex2f(-0.557,0.4);
glVertex2f(-0.557, 0.06);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(193,190,189);
glVertex2f(-0.8, 0.06);
glVertex2f(-0.8, 0.4); //backbuilding1
glVertex2f(-0.56,0.4);
glVertex2f(-0.56, 0.06);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(128,128,128);
glVertex2f(-0.8, 0.06);
glVertex2f(-0.8, -0.4); //back building 2
glVertex2f(-0.56,-0.4);
glVertex2f(-0.56,0.06);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.8, 0.06); //building_border
glVertex2f(-0.56, 0.06);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(20,37,155);
glVertex2f(-0.83, 0.38);
glVertex2f(-0.53, 0.38); //back_buildingRoof
glVertex2f(-0.53, 0.43);
glVertex2f(-0.83, 0.43);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.788, 0.412);
glVertex2f(-0.788, -0.402); //Wall_border
glVertex2f(-0.952, -0.402);
glVertex2f(-0.952, 0.412);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(221,221,221);
glVertex2f(-0.79, 0.41);
glVertex2f(-0.79, -0.4); //Wall
glVertex2f(-0.95, -0.4);
glVertex2f(-0.95, 0.41);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.79, 0.31); //brick1
glVertex2f(-0.95, 0.31);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.79, 0.21); //brick2
glVertex2f(-0.95, 0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.79, 0.11); //brick3
glVertex2f(-0.95, 0.11);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.79, 0.01); //brick4
glVertex2f(-0.95, 0.01);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.79, -0.09); //brick5
glVertex2f(-0.95, -0.09);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.79, -0.19); //brick6
glVertex2f(-0.95, -0.19);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.79, -0.29); //brick7
glVertex2f(-0.95, -0.29);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.87, 0.41); //brick1
glVertex2f(-0.87, 0.31);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.83, 0.31); //brick2
glVertex2f(-0.83, 0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.91, 0.31); //brick2
glVertex2f(-0.91, 0.21);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.87, 0.21); //brick3
glVertex2f(-0.87, 0.11);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.83, 0.11); //brick2
glVertex2f(-0.83, 0.01);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.91, 0.11); //brick2
glVertex2f(-0.91, 0.01);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.87, 0.01); //brick1
glVertex2f(-0.87, -0.09);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.83, -0.09); //brick2
glVertex2f(-0.83, -0.19);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.91, -0.09); //brick2
glVertex2f(-0.91, -0.19);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.87, -0.19); //brick1
glVertex2f(-0.87, -0.29);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.83, -0.29); //brick2
glVertex2f(-0.83, -0.4);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.91, -0.29); //brick2
glVertex2f(-0.91, -0.4);
glEnd();
glBegin(GL_QUADS);
glColor3ub(34,60,100);
glVertex2f(-0.6, 0.25);
glVertex2f(-0.6, 0.2); //back_building_Window
glVertex2f(-0.7, 0.2);
glVertex2f(-0.7, 0.25);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(179,165,161);
glVertex2f(-0.75, 0.7);
glVertex2f(-0.75, -0.4); //towerStand1
glVertex2f(-0.74,-0.4);
glVertex2f(-0.74,0.7);
glEnd();
glBegin(GL_QUADS);
glColor3ub(179,165,161);
glVertex2f(-0.65, 0.7);
glVertex2f(-0.65, -0.4); //towerStand2
glVertex2f(-0.64,-0.4);
glVertex2f(-0.64,0.7);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(114,90,82);
glVertex2f(-0.74, 0.7);
glVertex2f(-0.74, -0.4); //towerStand1
glVertex2f(-0.73,-0.4);
glVertex2f(-0.73,0.7);
glEnd();
glBegin(GL_QUADS);
glColor3ub(114,90,82);
glVertex2f(-0.64, 0.7);
glVertex2f(-0.64, -0.4); //towerStand2
glVertex2f(-0.63,-0.4);
glVertex2f(-0.63,0.7);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(114,90,82);
glVertex2f(-0.73, 0.27);
glVertex2f(-0.73, 0.3); //towerHolder1
glVertex2f(-0.65, 0.1);
glVertex2f(-0.65, 0.07);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(179,165,161);
glVertex2f(-0.64, 0.27);
glVertex2f(-0.64, 0.3); //towerHolder2
glVertex2f(-0.73, 0.1);
glVertex2f(-0.73, 0.07);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(114,90,82);
glVertex2f(-0.73, -0.27);
glVertex2f(-0.73, -0.3); //towerHolder3
glVertex2f(-0.65, -0.1);
glVertex2f(-0.65, -0.07);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(179,165,161);
glVertex2f(-0.64, -0.27);
glVertex2f(-0.64, -0.3); //towerHolder4
glVertex2f(-0.73, -0.1);
glVertex2f(-0.73, -0.07);
glEnd();

//{tower human}
glBegin(GL_POLYGON);
glColor3ub(46,72,35);
glVertex2f(-0.70, 0.56);
glVertex2f(-0.71, 0.56);
glVertex2f(-0.7, 0.61);
glVertex2f(-0.70, 0.61);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(89,134,56);
glVertex2f(-0.69, 0.59);
glVertex2f(-0.70, 0.59);
glVertex2f(-0.70, 0.61);
glVertex2f(-0.69, 0.61);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(174,181,80);
glVertex2f(-0.70, 0.59);
glVertex2f(-0.70, 0.56);
glVertex2f(-0.67, 0.56);
glVertex2f(-0.67, 0.59);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(174,181,80);
glVertex2f(-0.67, 0.59);
glVertex2f(-0.67, 0.575);
glVertex2f(-0.66, 0.575);
glVertex2f(-0.66, 0.59);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.68, 0.59);
glVertex2f(-0.68, 0.58); //gun
glVertex2f(-0.65, 0.58);
glVertex2f(-0.65, 0.59);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.67, 0.59);
glVertex2f(-0.67, 0.57); //gun
glVertex2f(-0.675, 0.57);
glVertex2f(-0.675, 0.59);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(239,201,143);
glVertex2f(-0.69, 0.59);
glVertex2f(-0.68, 0.59);
glVertex2f(-0.68, 0.64);
glVertex2f(-0.69, 0.64);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(46,72,35);
glVertex2f(-0.665, 0.64);
glVertex2f(-0.683, 0.67);
glVertex2f(-0.7, 0.64);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.68, 0.64);
glVertex2f(-0.669, 0.626);
glVertex2f(-0.674, 0.61);
glVertex2f(-0.68, 0.605);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(239,201,143);
glVertex2f(-0.68, 0.64);
glVertex2f(-0.67, 0.625);
glVertex2f(-0.675, 0.61);
glVertex2f(-0.68, 0.61);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.678, 0.63);
glVertex2f(-0.676, 0.63);
glEnd();
//{tower human end}
glBegin(GL_QUADS);
glColor3ub(114,90,82);
glVertex2f(-0.765, 0.56);
glVertex2f(-0.765, 0.46); //tower_base
glVertex2f(-0.615, 0.46);
glVertex2f(-0.615, 0.56);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(114,90,82);
glVertex2f(-0.78, 0.7);
glVertex2f(-0.69,0.85); //towerRoof
glVertex2f(-0.6, 0.7);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.563, 0.03);
glVertex2f(-0.563, -0.4); //building_Connector_border
glVertex2f(-0.443, -0.4);
glVertex2f(-0.443, 0.105);
glVertex2f(-0.563, 0.105);
glVertex2f(-0.583, 0.06);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(223,203,156);
glVertex2f(-0.56, 0.03);
glVertex2f(-0.56, -0.4); //building_Connector
glVertex2f(-0.45, -0.4);
glVertex2f(-0.45, 0.1);
glVertex2f(-0.56, 0.1);
glVertex2f(-0.58, 0.06);
glEnd();
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.56, 0.03);
glVertex2f(-0.45, 0.03);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.26, 0.465);
glVertex2f(-0.365,0.305); //NotunGhorChalBorder
glVertex2f(-0.155, 0.305);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(110,144,75);
glVertex2f(-0.26, 0.46);
glVertex2f(-0.36,0.3); //NotunGhorChal
glVertex2f(-0.16, 0.3);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.365,0.305);
glVertex2f(-0.405,0.25);
glVertex2f(-0.115,0.25); //NotunGhorChalErNicherQuadBorder
glVertex2f(-0.155, 0.305);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(110,144,75);
glVertex2f(-0.36,0.3);
glVertex2f(-0.40,0.25);
glVertex2f(-0.12,0.25); //NotunGhorChalErNicherQuad
glVertex2f(-0.16, 0.3);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.41,0.255);
glVertex2f(-0.115,0.255);
glVertex2f(-0.075,0.195); //Notun_GhorChal_Er_Nicher_Quad2Border
glVertex2f(-0.455,0.195);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(110,144,75);
glVertex2f(-0.41,0.25);
glVertex2f(-0.12,0.25);
glVertex2f(-0.08,0.2); //NotunGhor_Chal_ErNicher_Quad2
glVertex2f(-0.45,0.2);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.073,0.2); //NotunGhorborder
glVertex2f(-0.453,0.2);
glVertex2f(-0.453,-0.405);
glVertex2f(-0.073,-0.405);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(110,144,75);
glVertex2f(-0.08,0.195); //NotunGhor
glVertex2f(-0.45,0.195);
glVertex2f(-0.45,-0.4);
glVertex2f(-0.08,-0.4);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.2,0.15); //NotunGhorWindow1
glVertex2f(-0.3,0.15);
glVertex2f(-0.3,0.07);
glVertex2f(-0.2,0.07);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-0.43,-0.05); //NotunGhorWindow2
glVertex2f(-0.3,-0.05);
glVertex2f(-0.3,-0.17);
glVertex2f(-0.43,-0.17);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(-0.028,0.145); //right_wall_border
glVertex2f(-0.222,0.145);
glVertex2f(-0.222,-0.405);
glVertex2f(-0.028,-0.405);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(221,221,221);
glVertex2f(-0.03,0.14); //right_wall
glVertex2f(-0.22,0.14);
glVertex2f(-0.22,-0.4);
glVertex2f(-0.03,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.03, 0.04); //right_brick
glVertex2f(-0.22, 0.04);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.03, 0.04); //right_brick1
glVertex2f(-0.22, 0.04);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.03, -0.06); //right_brick_lines_horizontal
glVertex2f(-0.22, -0.06);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.03, -0.16); //right_brick_lines_horizontal
glVertex2f(-0.22, -0.16);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.03, -0.26); //right_brick_lines_horizontal
glVertex2f(-0.22, -0.26);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.03, -0.36); //right_brick_lines_horizontal
glVertex2f(-0.22, -0.36);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.095, 0.14); //brick_line_1
glVertex2f(-0.095, 0.04);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.158, 0.14); //brick_line2
glVertex2f(-0.158, 0.04);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.127, 0.04); //brick_line3
glVertex2f(-0.127, -0.06);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.095, -0.06); //brick_line4
glVertex2f(-0.095, -0.16);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.158, -0.06); //brick_line5
glVertex2f(-0.158, -0.16);
glEnd();
glBegin(GL_POLYGON);
        glColor3ub(160,107,60);
        glVertex2f(-0.09, 0.14);
        glVertex2f(-0.11, 0.14);
        glVertex2f(-0.11, 0.4); //stick----of--------flag
        glVertex2f(-0.09, 0.4);
        glEnd();

glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.127, -0.16); //brick_line6
glVertex2f(-0.127, -0.26);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.095, -0.26); //brick_line7
glVertex2f(-0.095, -0.36);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.158, -0.26); //brick_line8
glVertex2f(-0.158, -0.36);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.127, -0.36); //brick_line9
glVertex2f(-0.127, -0.4);
glEnd();

}
void shootingBoard()
{
glPushMatrix();
glTranslatef(positionBoard,0.0f,0.0f);

GLfloat x2=-0.67; GLfloat y2=-0.2; GLfloat radius2 =0.03f;
int triangleAmount2 = 100; //# of triangles used to draw circle

GLfloat twicePi2 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(x2, y2); // center of circle
for(int i2 = 0; i2 <= triangleAmount2;i2++)
{
glVertex2f(
x2 + (radius2 * cos(i2 * twicePi2 / triangleAmount2)),
y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
);
}
glEnd();
//Shooting Board(move)
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.73, -0.23);
glVertex2f(-0.61,-0.23);
glVertex2f(-0.61,-0.4);
glVertex2f(-0.73, -0.4);
glEnd();
//Shooting_Board_1 Inner circle Red
GLfloat x3=-0.67; GLfloat y3=-0.31; GLfloat radius3 =0.05f;
int triangleAmount3 = 100; //# of triangles used to draw circle

GLfloat twicePi3 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(x3, y3); // Center of circle
for(int i2 = 0; i2 <= triangleAmount3;i2++)
{
glVertex2f(
x3 + (radius3 * cos(i2 * twicePi3 / triangleAmount3)),
y3 + (radius3 * sin(i2 * twicePi3 / triangleAmount3))
);
}
glEnd();
//ShootingBoard_1_Inner circle White
GLfloat x4=-0.67; GLfloat y4=-0.31; GLfloat radius4 =0.03f;
int triangleAmount4 = 100; //# of triangles used to draw circle

GLfloat twicePi4 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0, 1.0, 1.0);
glVertex2f(x4, y4); //center of circle
for(int i2 = 0; i2 <= triangleAmount4;i2++)
{
glVertex2f(
x4 + (radius4 * cos(i2 * twicePi4 / triangleAmount4)),
y4 + (radius4 * sin(i2 * twicePi4 / triangleAmount4))
);
}
glEnd();
//ShootingBoard_1_Inner circle black

GLfloat x5=-0.67; GLfloat y5=-0.31; GLfloat radius5 =0.02f;
int triangleAmount5 = 100; //# of triangles used to draw circle

GLfloat twicePi5= 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(x5, y5); //center of circle
for(int i1 = 0; i1 <= triangleAmount5;i1++)
{
glVertex2f(
x5 + (radius5* cos(i1 * twicePi5 / triangleAmount5)),
y5 + (radius5* sin(i1 * twicePi5 / triangleAmount5))
);
}
glEnd();
glPopMatrix();
}
//shooting board_1 ends here!!

//another shooting board!
//Shooting_Board_2 (move)
//start_from_here
void shootingBoard2()
{
glPushMatrix();
glTranslatef(positionBoard2,0.0f,0.0f);
GLfloat x6=-0.45; GLfloat y6=-0.25; GLfloat radius6 =0.028f;
int triangleAmount6 = 100; //# of triangles used to draw circle

GLfloat twicePi6 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 255);
glVertex2f(x6, y6); // center of circle
for(int i2 = 0; i2 <= triangleAmount6;i2++)
{
glVertex2f(
x6 + (radius6 * cos(i2 * twicePi6 / triangleAmount6)),
y6 + (radius6 * sin(i2 * twicePi6 / triangleAmount6))
);
}
glEnd();
//Shooting Board(move)

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.41, -0.278);
glVertex2f(-0.49,-0.278);
glVertex2f(-0.49,-0.41);
glVertex2f(-0.41, -0.41);
glEnd();
//Shooting_Board_2 Inner circle Red

GLfloat x7=-0.45; GLfloat y7=-0.34; GLfloat radius7 =0.034f;
int triangleAmount7 = 100; //# of triangles used to draw circle

GLfloat twicePi7 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(x7, y7); // Center of circle
for(int i2 = 0; i2 <= triangleAmount7;i2++)
{
glVertex2f(
x7 + (radius7 * cos(i2 * twicePi7 / triangleAmount7)),
y7 + (radius7 * sin(i2 * twicePi7 / triangleAmount7))
);
}
glEnd();
//ShootingBoard_2_Inner circle White
GLfloat x8=-0.45; GLfloat y8=-0.34; GLfloat radius8 =0.023f;
int triangleAmount8 = 100; //# of triangles used to draw circle

GLfloat twicePi8 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0, 1.0, 1.0);
glVertex2f(x8, y8); // Center of circle
for(int i2 = 0; i2 <= triangleAmount7;i2++)
{
glVertex2f(
x8 + (radius8 * cos(i2 * twicePi8 / triangleAmount8)),
y8 + (radius8 * sin(i2 * twicePi8 / triangleAmount8))
);
}
glEnd();
//ShootingBoard_1_Inner circle black

GLfloat x9=-0.45; GLfloat y9=-0.34; GLfloat radius9 =0.015f;
int triangleAmount9 = 100; //# of triangles used to draw circle

GLfloat twicePi9 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(x9, y9); // Center of circle
for(int i2 = 0; i2 <= triangleAmount9;i2++)
{
glVertex2f(
x9 + (radius9 * cos(i2 * twicePi9 / triangleAmount9)),
y9 + (radius9 * sin(i2 * twicePi9 / triangleAmount9))
);
}
glEnd();
glPopMatrix();
//shooting board_2 ends here!! */
}


void birds(){
	glRotatef(counter1,0.08,0.9,1.0);
	counter1+=0.08;
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.27f,0.64f);// 1st
glVertex2f(0.30f,0.63f);
glVertex2f(0.30f,0.63f);
glVertex2f(0.29f,0.62f);
glVertex2f(0.29f,0.62f);
glVertex2f(0.29f,0.62f);
glVertex2f(0.28f,0.61f);
glVertex2f(0.28f,0.60f);
glVertex2f(0.27f,0.62f);
glVertex2f(0.26f,0.62f);
glVertex2f(0.26f,0.62f);
glVertex2f(0.26f,0.63f);
glVertex2f(0.27f,0.64f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.29f,0.44f);// 2nd
glVertex2f(0.32f,0.43f);
glVertex2f(0.33f,0.43f);
glVertex2f(0.32f,0.42f);
glVertex2f(0.313f,0.422f);
glVertex2f(0.315f,0.414f);
glVertex2f(0.31f,0.40f);
glVertex2f(0.308f,0.417f);
glVertex2f(0.295f,0.414f);
glVertex2f(0.29f,0.422f);
glVertex2f(0.28f,0.43f);
glVertex2f(0.28f,0.431f);
glVertex2f(0.29f,0.43f);

 glEnd();
 glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.37f,0.517f);// 3rd
glVertex2f(0.39f,0.505f);
glVertex2f(0.405f,0.497f);
glVertex2f(0.39f,0.4914f);
glVertex2f(0.39f,0.494f);
glVertex2f(0.39f,0.488f);
glVertex2f(0.385f,0.488f);
glVertex2f(0.38f,0.48f);
glVertex2f(0.37f,0.494f);
glVertex2f(0.36f,0.4914f);
glVertex2f(0.366f,0.5f);
glVertex2f(0.363f,0.511f);
glVertex2f(0.37f,0.511f);

 glEnd();


}
void bird()//blue bird
{
glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.27f,0.64f);// 1st
glVertex2f(0.30f,0.63f);
glVertex2f(0.30f,0.63f);
glVertex2f(0.29f,0.62f);
glVertex2f(0.29f,0.62f);
glVertex2f(0.29f,0.62f);
glVertex2f(0.28f,0.61f);
glVertex2f(0.28f,0.60f);
glVertex2f(0.27f,0.62f);
glVertex2f(0.26f,0.62f);
glVertex2f(0.26f,0.62f);
glVertex2f(0.26f,0.63f);
glVertex2f(0.27f,0.64f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.29f,0.44f);// 2nd
glVertex2f(0.32f,0.43f);
glVertex2f(0.33f,0.43f);
glVertex2f(0.32f,0.42f);
glVertex2f(0.313f,0.422f);
glVertex2f(0.315f,0.414f);
glVertex2f(0.31f,0.40f);
glVertex2f(0.308f,0.417f);
glVertex2f(0.295f,0.414f);
glVertex2f(0.29f,0.422f);
glVertex2f(0.28f,0.43f);
glVertex2f(0.28f,0.431f);
glVertex2f(0.29f,0.43f);

 glEnd();
 glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.37f,0.517f);// 3rd
glVertex2f(0.39f,0.505f);
glVertex2f(0.405f,0.497f);
glVertex2f(0.39f,0.4914f);
glVertex2f(0.39f,0.494f);
glVertex2f(0.39f,0.488f);
glVertex2f(0.385f,0.488f);
glVertex2f(0.38f,0.48f);
glVertex2f(0.37f,0.494f);
glVertex2f(0.36f,0.4914f);
glVertex2f(0.366f,0.5f);
glVertex2f(0.363f,0.511f);
glVertex2f(0.37f,0.511f);

 glEnd();
 glPopMatrix();


}

void cloud1()
{
    glPushMatrix();
    glTranslatef(positionOfCloud, 0.05f, 0.0f);
        int i;

        GLfloat x=.5f; GLfloat y=.90f; GLfloat radius =.05f;
        int triangleAmount = 20;
        GLfloat twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255, 240, 255);
            glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat a=.55f; GLfloat b=.87f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(a, b); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        a + (radius * cos(i *  twicePi / triangleAmount)),
                    b + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat c=.45f; GLfloat d=.87f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(c, d); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        c + (radius * cos(i *  twicePi / triangleAmount)),
                    d + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat e=.52f; GLfloat f=.84f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(e, f); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        e + (radius * cos(i *  twicePi / triangleAmount)),
                    f+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat g=.6f; GLfloat h=.86f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(g, h); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        g + (radius * cos(i *  twicePi / triangleAmount)),
                    h+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();
    glPopMatrix();
}

void cloud2()
{

    glPushMatrix();
    glTranslatef(positionOfCloud2, 0.05f, 0.0f);

        int i;

        GLfloat x=-.5f; GLfloat y=.84f; GLfloat radius =.05f;
        int triangleAmount = 20;
        GLfloat twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255, 240, 255);
            glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat a=-.55f; GLfloat b=.81f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(a, b); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        a + (radius * cos(i *  twicePi / triangleAmount)),
                    b + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat c=-.45f; GLfloat d=.81f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(c, d); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        c + (radius * cos(i *  twicePi / triangleAmount)),
                    d + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat e=-.52f; GLfloat f=.78f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(e, f); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        e + (radius * cos(i *  twicePi / triangleAmount)),
                    f+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat g=-.6f; GLfloat h=.80f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(g, h); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        g + (radius * cos(i *  twicePi / triangleAmount)),
                    h+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();
    glPopMatrix();
}
void ground()
{
     glBegin(GL_POLYGON);
     glColor3ub(163,103,56);
     glVertex2f(-1.0,-0.22);
     glVertex2f(1.0,-0.22);
     glVertex2f(1.0,-1.0);
     glVertex2f(-1.0,-1.0);
     glEnd();
}
void groundNight()
{
     glBegin(GL_POLYGON);
     glColor3ub(147,115,74);
     glVertex2f(-1.0,-0.22);
     glVertex2f(1.0,-0.22);
     glVertex2f(1.0,-1.0);
     glVertex2f(-1.0,-1.0);
     glEnd();
}
void mountainsDay()
{
  glBegin(GL_POLYGON);
  glColor3ub(65,98,66);
  glVertex2f(-0.08,-0.22);
  glVertex2f(0.2,-0.22);
  glVertex2f(0.07,0.1);
  glEnd();
  glBegin(GL_POLYGON);
  glColor3ub(65,98,66);
  glVertex2f(0.18,-0.22);
  glVertex2f(0.65,-0.22);
  glVertex2f(0.415,0.3);
  glEnd();
    glBegin(GL_POLYGON);
  glColor3ub(65,98,66);
  glVertex2f(0.6,-0.22);
  glVertex2f(1.0,-0.22);
  glVertex2f(0.8,0.2);
  glEnd();
}
void tent()
{
     //tent1
     glBegin(GL_TRIANGLES);
     glColor3ub(0,0,0);
     glVertex2f(0.59,-0.508);  //border
     glVertex2f(0.81,-0.558);
     glVertex2f(0.7,-0.295);
     glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(244,226,64);
     glVertex2f(0.6,-0.5);
     glVertex2f(0.8,-0.55);
     glVertex2f(0.7,-0.3);
     glEnd();
          glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(0.795,-0.555);
     glVertex2f(0.695,-0.295); //border
     glVertex2f(0.855,-0.295);
     glVertex2f(0.955,-0.525);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(244,226,64);
     glVertex2f(0.8,-0.55);
     glVertex2f(0.7,-0.3);
     glVertex2f(0.85,-0.3);
     glVertex2f(0.95,-0.52);
     glEnd();
     glBegin(GL_TRIANGLES);
     glColor3ub(0,0,0);
     glVertex2f(0.665,-0.52); //border
     glVertex2f(0.715,-0.535);
     glVertex2f(0.7,-0.3);
     glEnd();
     glBegin(GL_TRIANGLES);
     glColor3ub(88,74,17);
     glVertex2f(0.67,-0.52);
     glVertex2f(0.71,-0.53);
     glVertex2f(0.7,-0.29);
     glEnd();
     //tent2
     glBegin(GL_TRIANGLES);
     glColor3ub(0,0,0);
     glVertex2f(0.195,-0.555); //border
     glVertex2f(0.405,-0.505);
     glVertex2f(0.305,-0.305);
     glEnd();
     glBegin(GL_TRIANGLES);
     glColor3ub(245,93,45);
     glVertex2f(0.2,-0.55);
     glVertex2f(0.4,-0.5);
     glVertex2f(0.3,-0.3);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(0.205,-0.555); //border
     glVertex2f(0.305,-0.295);
     glVertex2f(0.145,-0.295);
     glVertex2f(0.045,-0.525);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(245,93,45);
     glVertex2f(0.2,-0.55);
     glVertex2f(0.3,-0.3);
     glVertex2f(0.15,-0.3);
     glVertex2f(0.05,-0.52);
     glEnd();
     glBegin(GL_TRIANGLES);
     glColor3ub(0,0,0);
     glVertex2f(0.265,-0.54);
     glVertex2f(0.315,-0.527); //border
     glVertex2f(0.3,-0.295);
     glEnd();
     glBegin(GL_TRIANGLES);
     glColor3ub(132,55,31);
     glVertex2f(0.27,-0.535);
     glVertex2f(0.31,-0.522);
     glVertex2f(0.3,-0.3);
     glEnd();
}
void wood()
{
   glBegin(GL_POLYGON);
     glColor3ub(80,55,49);
     glVertex2f(0.45,-0.52);
     glVertex2f(0.44,-0.53); //wood
     glVertex2f(0.55,-0.6);
     glVertex2f(0.56,-0.59);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(80,55,49);
     glVertex2f(0.54,-0.52);
     glVertex2f(0.45,-0.59);//wood
     glVertex2f(0.46,-0.6);
     glVertex2f(0.55,-0.53);
     glEnd();
}
void fire()
{
     glPushMatrix();
//glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x14=0.5; GLfloat y14=-0.53; GLfloat radius14 =0.03f;
int triangleAmount14 = 100; //# of triangles used to draw circle

GLfloat twicePi14 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(200,0,0);
glVertex2f(x14, y14); // Center of circle
for(int i2 = 0; i2 <= triangleAmount14;i2++)
{
glVertex2f(
x14 + (radius14 * cos(i2 * twicePi14 / triangleAmount14)),
y14 + (radius14 * sin(i2 * twicePi14 / triangleAmount14))
);
}
glEnd();
glPopMatrix();
     glBegin(GL_POLYGON);
     glColor3ub(200,0,0);
     glVertex2f(0.47,-0.52);
     glVertex2f(0.5,-0.52); //fire triangle
     glVertex2f(0.484,-0.47);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(200,0,0);
     glVertex2f(0.53,-0.52);
     glVertex2f(0.5,-0.52); //fire triangle
     glVertex2f(0.516,-0.47);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(200,0,0);
     glVertex2f(0.51,-0.52);
     glVertex2f(0.49,-0.52); //fire triangle
     glVertex2f(0.5,-0.45);
     glEnd();
}


void army1()
{
//army1
//head of army
glPushMatrix();
glTranslatef(positionOfArmy,0.0f,0.0f);
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x15=-0.8; GLfloat y15=-0.44; GLfloat radius15 =0.03f;
int triangleAmount15 = 100; //# of triangles used to draw circle

GLfloat twicePi15 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(220,186,134);
glVertex2f(x15, y15); // Center of circle
for(int i2 = 0; i2 <= triangleAmount15;i2++)
{
glVertex2f(
x15 + (radius15 * cos(i2 * twicePi15 / triangleAmount15)),
y15 + (radius15 * sin(i2 * twicePi15 / triangleAmount15))
);
}
glEnd();
glPopMatrix();
//hAT OF ARMY
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x16=-0.8; GLfloat y16=-0.42; GLfloat radius16 =0.035f;
int triangleAmount16= 100; //# of triangles used to draw circle

GLfloat Pi16 = 1.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(55,104,59);
glVertex2f(x16, y16); // Center of circle
for(int i2 = 0; i2 <= triangleAmount16;i2++)
{
glVertex2f(
x16 + (radius16 * cos(i2 * Pi16 / triangleAmount16)),
y16 + (radius16 * sin(i2 * Pi16 / triangleAmount16))
);
}
glEnd();
glPopMatrix();
glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.791,-0.424);
     glVertex2f(-0.791,-0.441); //sun glass border
     glVertex2f(-0.769,-0.441);
     glVertex2f(-0.769,-0.424);
     glEnd();
glBegin(GL_POLYGON);
     glColor3ub(94,112,120);
     glVertex2f(-0.79,-0.425);
     glVertex2f(-0.79,-0.44); //sun glass
     glVertex2f(-0.77,-0.44);
     glVertex2f(-0.77,-0.425);
     glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.775, -0.46); //lips
    glVertex2f(-0.785, -0.455);
    glEnd();
    //neck

    glBegin(GL_POLYGON);
     glColor3ub(56,106,60);
     glVertex2f(-0.82,-0.48);
     glVertex2f(-0.80,-0.47);
     glVertex2f(-0.78,-0.48); //army body
     glVertex2f(-0.77,-0.55);
     glVertex2f(-0.83,-0.55);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.8,-0.5);
     glVertex2f(-0.75,-0.5); //army pistol
     glVertex2f(-0.75,-0.52);
     glVertex2f(-0.8,-0.52);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.75,-0.502);
     glVertex2f(-0.72,-0.502); //army pistol-narrow
     glVertex2f(-0.72,-0.512);
     glVertex2f(-0.75,-0.512);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.775,-0.52);
     glVertex2f(-0.78,-0.52); //army pistol-holder
     glVertex2f(-0.79,-0.54);
     glVertex2f(-0.78,-0.54);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.77,-0.52);
     glVertex2f(-0.765,-0.52); //army pistol-holder
     glVertex2f(-0.755,-0.535);
     glVertex2f(-0.765,-0.535);
     glEnd();
      glBegin(GL_POLYGON);
     glColor3ub(56,106,60);
     glVertex2f(-0.829,-0.55);
     glVertex2f(-0.8,-0.55); //army left leg
     glVertex2f(-0.81,-0.59);
     glVertex2f(-0.831,-0.59);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(56,106,60);
     glVertex2f(-0.81,-0.55);
     glVertex2f(-0.78,-0.55); //army right leg
     glVertex2f(-0.775,-0.59);
     glVertex2f(-0.798,-0.59);
     glEnd();
      glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.825,-0.59);
     glVertex2f(-0.828,-0.61); //army left shoe
     glVertex2f(-0.805,-0.61);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.785,-0.59);
     glVertex2f(-0.788,-0.61); //army right shoe
     glVertex2f(-0.765,-0.61);
     glEnd();
     glPopMatrix();

}

//army2
void army2()
//head of army
{
    glPushMatrix();
glTranslatef(positionOfArmy,0.0f,0.0f);
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x17=-0.6; GLfloat y17=-0.55; GLfloat radius17 =0.03f;
int triangleAmount17 = 100; //# of triangles used to draw circle

GLfloat twicePi17 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(220,186,134);
glVertex2f(x17, y17); // Center of circle
for(int i2 = 0; i2 <= triangleAmount17;i2++)
{
glVertex2f(
x17 + (radius17 * cos(i2 * twicePi17 / triangleAmount17)),
y17 + (radius17 * sin(i2 * twicePi17 / triangleAmount17))
);
}
glEnd();
glPopMatrix();
//hAT OF ARMY
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x18=-0.6; GLfloat y18=-0.53; GLfloat radius18 =0.035f;
int triangleAmount18= 100; //# of triangles used to draw circle

GLfloat Pi18 = 1.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(55,104,59);
glVertex2f(x18, y18); // Center of circle
for(int i2 = 0; i2 <= triangleAmount18;i2++)
{
glVertex2f(
x18 + (radius18 * cos(i2 * Pi18 / triangleAmount18)),
y18 + (radius18 * sin(i2 * Pi18 / triangleAmount18))
);
}
glEnd();
glPopMatrix();
glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.591,-0.534);
     glVertex2f(-0.591,-0.551); //sun glass border
     glVertex2f(-0.569,-0.551);
     glVertex2f(-0.569,-0.534);
     glEnd();
glBegin(GL_POLYGON);
     glColor3ub(94,112,120);
     glVertex2f(-0.59,-0.535);
     glVertex2f(-0.59,-0.55); //sun glass
     glVertex2f(-0.57,-0.55);
     glVertex2f(-0.57,-0.535);
     glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.575, -0.57); //lips
    glVertex2f(-0.585, -0.565);
    glEnd();
    glBegin(GL_POLYGON);
     glColor3ub(56,106,60);
     glVertex2f(-0.62,-0.59);
     glVertex2f(-0.6,-0.58);
     glVertex2f(-0.58,-0.59); //army body
     glVertex2f(-0.57,-0.65);
     glVertex2f(-0.63,-0.65);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.6,-0.6);
     glVertex2f(-0.55,-0.6); //army pistol
     glVertex2f(-0.55,-0.62);
     glVertex2f(-0.6,-0.62);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.55,-0.602);
     glVertex2f(-0.52,-0.602); //army pistol-narrow
     glVertex2f(-0.52,-0.612);
     glVertex2f(-0.55,-0.612);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.575,-0.62);
     glVertex2f(-0.58,-0.62); //army pistol-holder
     glVertex2f(-0.59,-0.64);
     glVertex2f(-0.58,-0.64);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.57,-0.62);
     glVertex2f(-0.565,-0.62); //army pistol-holder
     glVertex2f(-0.555,-0.635);
     glVertex2f(-0.565,-0.635);
     glEnd();
      glBegin(GL_POLYGON);
     glColor3ub(56,106,60);
     glVertex2f(-0.629,-0.65);
     glVertex2f(-0.6,-0.65); //army left leg
     glVertex2f(-0.61,-0.69);
     glVertex2f(-0.631,-0.69);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(56,106,60);
     glVertex2f(-0.61,-0.65);
     glVertex2f(-0.58,-0.65); //army right leg
     glVertex2f(-0.575,-0.69);
     glVertex2f(-0.598,-0.69);
     glEnd();
      glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.625,-0.69);
     glVertex2f(-0.628,-0.71); //army left shoe
     glVertex2f(-0.605,-0.71);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.585,-0.69);
     glVertex2f(-0.588,-0.71); //army right shoe
     glVertex2f(-0.565,-0.71);
     glEnd();
     glPopMatrix();
}
//army3
void army3()
{
//head of army
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x19=-0.4; GLfloat y19=-0.45; GLfloat radius19 =0.03f;
int triangleAmount19 = 100; //# of triangles used to draw circle

GLfloat twicePi19 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(220,186,134);
glVertex2f(x19, y19); // Center of circle
for(int i2 = 0; i2 <= triangleAmount19;i2++)
{
glVertex2f(
x19 + (radius19 * cos(i2 * twicePi19 / triangleAmount19)),
y19 + (radius19 * sin(i2 * twicePi19 / triangleAmount19))
);
}
glEnd();
glPopMatrix();
//hAT OF ARMY
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x20=-0.4; GLfloat y20=-0.43; GLfloat radius20 =0.035f;
int triangleAmount20= 100; //# of triangles used to draw circle

GLfloat Pi20 = 1.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(55,104,59);
glVertex2f(x20, y20); // Center of circle
for(int i2 = 0; i2 <= triangleAmount20;i2++)
{
glVertex2f(
x20 + (radius20 * cos(i2 * Pi20 / triangleAmount20)),
y20 + (radius20 * sin(i2 * Pi20 / triangleAmount20))
);
}
glEnd();
glPopMatrix();
glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.391,-0.434);
     glVertex2f(-0.391,-0.451); //sun glass border
     glVertex2f(-0.369,-0.451);
     glVertex2f(-0.369,-0.434);
     glEnd();
glBegin(GL_POLYGON);
     glColor3ub(94,112,120);
     glVertex2f(-0.39,-0.435);
     glVertex2f(-0.39,-0.45); //sun glass
     glVertex2f(-0.37,-0.45);
     glVertex2f(-0.37,-0.435);
     glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.375, -0.47); //lips
    glVertex2f(-0.385, -0.465);
    glEnd();
    glBegin(GL_POLYGON);
     glColor3ub(56,106,60);
     glVertex2f(-0.42,-0.49);
     glVertex2f(-0.40,-0.48);
     glVertex2f(-0.38,-0.49); //army body
     glVertex2f(-0.37,-0.55);
     glVertex2f(-0.43,-0.55);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.4,-0.5);
     glVertex2f(-0.35,-0.5); //army pistol
     glVertex2f(-0.35,-0.52);
     glVertex2f(-0.4,-0.52);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.35,-0.502);
     glVertex2f(-0.32,-0.502); //army pistol-narrow
     glVertex2f(-0.32,-0.512);
     glVertex2f(-0.35,-0.512);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.375,-0.52);
     glVertex2f(-0.38,-0.52); //army pistol-holder
     glVertex2f(-0.39,-0.54);
     glVertex2f(-0.38,-0.54);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.37,-0.52);
     glVertex2f(-0.365,-0.52); //army pistol-holder
     glVertex2f(-0.355,-0.535);
     glVertex2f(-0.365,-0.535);
     glEnd();
      glBegin(GL_POLYGON);
     glColor3ub(56,106,60);
     glVertex2f(-0.429,-0.55);
     glVertex2f(-0.4,-0.55); //army left leg
     glVertex2f(-0.41,-0.59);
     glVertex2f(-0.431,-0.59);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(56,106,60);
     glVertex2f(-0.41,-0.55);
     glVertex2f(-0.38,-0.55); //army right leg
     glVertex2f(-0.375,-0.59);
     glVertex2f(-0.398,-0.59);
     glEnd();
      glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.425,-0.59);
     glVertex2f(-0.428,-0.61); //army left shoe
     glVertex2f(-0.405,-0.61);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.385,-0.59);
     glVertex2f(-0.388,-0.61); //army right shoe
     glVertex2f(-0.365,-0.61);
     glEnd();
}
//army4
void army4()
{
//head of army\

glPushMatrix();
glTranslatef(positionOfArmy,0.0f,0.0f);
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x21=-0.2; GLfloat y21=-0.65; GLfloat radius21 =0.03f;
int triangleAmount21 = 100; //# of triangles used to draw circle

GLfloat twicePi21 = 2.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(220,186,134);
glVertex2f(x21, y21); // Center of circle
for(int i2 = 0; i2 <= triangleAmount21;i2++)
{
glVertex2f(
x21 + (radius21 * cos(i2 * twicePi21 / triangleAmount21)),
y21 + (radius21 * sin(i2 * twicePi21 / triangleAmount21))
);
}
glEnd();
glPopMatrix();
//hAT OF ARMY
glPushMatrix();
glTranslatef(0.0f,positionBoard1, 0.0f);
GLfloat x22=-0.2; GLfloat y22=-0.63; GLfloat radius22 =0.035f;
int triangleAmount22= 100; //# of triangles used to draw circle

GLfloat Pi22 = 1.0f * PI;

 glBegin(GL_TRIANGLE_FAN);
glColor3ub(55,104,59);
glVertex2f(x22, y22); // Center of circle
for(int i2 = 0; i2 <= triangleAmount22;i2++)
{
glVertex2f(
x22 + (radius22 * cos(i2 * Pi22 / triangleAmount22)),
y22 + (radius22 * sin(i2 * Pi22 / triangleAmount22))
);
}
glEnd();
glPopMatrix();
glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.191,-0.634);
     glVertex2f(-0.191,-0.651); //sun glass border
     glVertex2f(-0.169,-0.651);
     glVertex2f(-0.169,-0.634);
     glEnd();
glBegin(GL_POLYGON);
     glColor3ub(94,112,120);
     glVertex2f(-0.19,-0.635);
     glVertex2f(-0.19,-0.65); //sun glass
     glVertex2f(-0.17,-0.65);
     glVertex2f(-0.17,-0.635);
     glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.175, -0.67); //lips
    glVertex2f(-0.185, -0.665);
    glEnd();
    glBegin(GL_POLYGON);
     glColor3ub(56,106,60);
     glVertex2f(-0.22,-0.69);
     glVertex2f(-0.20,-0.68);
     glVertex2f(-0.18,-0.69); //army body
     glVertex2f(-0.17,-0.75);
     glVertex2f(-0.23,-0.75);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.2,-0.7);
     glVertex2f(-0.15,-0.7); //army pistol
     glVertex2f(-0.15,-0.72);
     glVertex2f(-0.2,-0.72);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.15,-0.702);
     glVertex2f(-0.12,-0.702); //army pistol-narrow
     glVertex2f(-0.12,-0.712);
     glVertex2f(-0.15,-0.712);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.175,-0.72);
     glVertex2f(-0.18,-0.72); //army pistol-holder
     glVertex2f(-0.19,-0.74);
     glVertex2f(-0.18,-0.74);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.17,-0.72);
     glVertex2f(-0.165,-0.72); //army pistol-holder
     glVertex2f(-0.155,-0.735);
     glVertex2f(-0.165,-0.735);
     glEnd();
      glBegin(GL_POLYGON);
     glColor3ub(56,106,60);
     glVertex2f(-0.229,-0.75);
     glVertex2f(-0.2,-0.75); //army left leg
     glVertex2f(-0.21,-0.79);
     glVertex2f(-0.231,-0.79);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(56,106,60);
     glVertex2f(-0.21,-0.75);
     glVertex2f(-0.18,-0.75); //army right leg
     glVertex2f(-0.175,-0.79);
     glVertex2f(-0.198,-0.79);
     glEnd();
      glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.225,-0.79);
     glVertex2f(-0.228,-0.81); //army left shoe
     glVertex2f(-0.205,-0.81);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.185,-0.79);
     glVertex2f(-0.188,-0.81); //army right shoe
     glVertex2f(-0.165,-0.81);
     glEnd();
    glPopMatrix();
}
void Ttree()
{
//tree1
    glPushMatrix();
    glScaled(.6,.6,1);
        glBegin(GL_QUADS);
        glColor3ub(79, 38, 56);
        glVertex2f(0.35f,0.08f);
        glVertex2f(0.35f,-0.4f);
        glVertex2f(0.37f,-0.4f);
        glVertex2f(0.37f,0.08f);
        glEnd();



        glColor3ub(82, 194, 41);
        glBegin(GL_TRIANGLES);
        glVertex2f(0.36f,0.15f);
        glVertex2f(0.46f,0.05f);
        glVertex2f(0.26f,0.05f);
        glEnd();
        glPushMatrix();
        glTranslatef(0.0f,0.05f,0.0f);
        glBegin(GL_TRIANGLES);
        glVertex2f(0.36f,0.17f);
        glVertex2f(0.46f,0.07f);
        glVertex2f(0.26f,0.07f);
        glEnd();
        glPopMatrix();
        glPopMatrix();
//tree2
        glPushMatrix();
    glScaled(.6,.6,1);
        glBegin(GL_QUADS);
        glColor3ub(79, 38, 56);
        glVertex2f(1.01f,0.08f);
        glVertex2f(1.01f,-0.4f);
        glVertex2f(1.03f,-0.4f);
        glVertex2f(1.03f,0.08f);
        glEnd();

        glColor3ub(82, 194, 41);
        glBegin(GL_TRIANGLES);
        glVertex2f(1.023f,0.16f);
        glVertex2f(0.9f,0.06f);
        glVertex2f(1.13f,0.06f);
        glEnd();

        glPushMatrix();
        glTranslatef(0.0f,0.05f,0.0f);
        glBegin(GL_TRIANGLES);
        glVertex2f(1.023f,0.21f);
        glVertex2f(0.9f,0.08f);
        glVertex2f(1.13f,0.08f);
        glEnd();
        glPopMatrix();
        glPopMatrix();
//tree3
        glPushMatrix();
    glScaled(.6,.6,1);
        glBegin(GL_QUADS);
        glColor3ub(79, 38, 56);
        glVertex2f(1.595f,0.08f);
        glVertex2f(1.595f,-0.4f);
        glVertex2f(1.61f,-0.4f);
        glVertex2f(1.61f,0.08f);
        glEnd();

        glColor3ub(82, 194, 41);
        glBegin(GL_TRIANGLES);
        glVertex2f(1.6f,0.16f);
        glVertex2f(1.46f,0.06f);
        glVertex2f(1.7f,0.06f);
        glEnd();

        glPushMatrix();
        glTranslatef(0.0f,0.05f,0.0f);
        glBegin(GL_TRIANGLES);
        glVertex2f(1.6f,0.21f);
        glVertex2f(1.46f,0.08f);
        glVertex2f(1.7f,0.08f);
        glEnd();
        glPopMatrix();
        glPopMatrix();


}

void tree()
{
//tree1
    glPushMatrix();
        glScaled(.8,.8,1);
        int i;
        int lineAmount = 21;
        GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.1f;
        //GLfloat radius = 0.8f; //radius
        GLfloat twicePi = 2.0f * PI;
        glBegin(GL_QUADS);
        glColor3ub(108, 48, 23 );
        glVertex2f(0.5f,-0.364f);
        glVertex2f(0.53f,-0.364f);
        glVertex2f(0.53f,-0.064f);
        glVertex2f(0.5f,-0.064f);
        glEnd();
         x=0.46f; y=-.1f; radius =.1f;
        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(98, 146,55 );
            for(i = 0; i <= lineAmount;i++) {
                glVertex2f(
                    x + (radius * cos(i *  twicePi / lineAmount)),
                    y + (radius* sin(i * twicePi / lineAmount))
                );
            }

        glEnd();

         x=0.56f; y=-.1f; radius =.1f;
        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(98, 146,55 );
            for(i = 0; i <= lineAmount;i++)
            {
                glVertex2f(
                    x + (radius * cos(i *  twicePi / lineAmount)),
                    y + (radius* sin(i * twicePi / lineAmount))
                );
            }

        glEnd();
         x=0.51f; y=-0.0f; radius =.08f;
        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(98, 146,55 );
            for(i = 0; i <= lineAmount;i++) {
                glVertex2f(
                    x + (radius * cos(i *  twicePi / lineAmount)),
                    y + (radius* sin(i * twicePi / lineAmount))
                );
            }

        glEnd();
    glPopMatrix();

}
void carLine()
{
    glPushMatrix();
    glTranslated(0,-.455,0);
        glPushMatrix();
            glScaled(1,10,1);
            glTranslated(0,.448,0);
            glColor3ub(128,116,120);
            glBegin(GL_POLYGON);
            glVertex2f(-1,-.5);
            glVertex2f(-1,-.488);
            glVertex2f(1,-.488);
            glVertex2f(1,-.5);
            glEnd();
        glPopMatrix();

        glPushMatrix();
            glTranslated(0,.06,0);
            glBegin(GL_POLYGON);
            glVertex2f(-1,-.488);
            glVertex2f(-1,-.5);
            glVertex2f(1,-.5);
            glVertex2f(1,-.488);
            glEnd();
        glPopMatrix();

        //quad(-.99,-.48,-.99,);

    glPopMatrix();

}
void tank()
{
        glPushMatrix();
        glTranslatef(positionofTank,0.0f,0.0f);
        glBegin(GL_POLYGON);
            glColor3ub(0,0,0);
            glVertex2f(0.698,-0.93); //border
            glVertex2f(0.902,-0.93);
            glVertex2f(0.962,-0.8);
            glVertex2f(0.628,-0.8);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(128,119,40);
            glVertex2f(0.7,-0.93);
            glVertex2f(0.9,-0.93);
            glVertex2f(0.96,-0.8);
            glVertex2f(0.63,-0.8);
            glEnd();
             glBegin(GL_POLYGON);
            glColor3ub(0,0,0);
            glVertex2f(0.698,-0.738);
            glVertex2f(0.912,-0.738); //border
            glVertex2f(0.952,-0.802);
            glVertex2f(0.628,-0.802);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(128,119,40);
            glVertex2f(0.7,-0.74);
            glVertex2f(0.91,-0.74);
            glVertex2f(0.95,-0.8);
            glVertex2f(0.63,-0.8);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(86,80,30);
            glVertex2f(0.75,-0.74);
            glVertex2f(0.91,-0.74);
            glVertex2f(0.90,-0.70);
            glVertex2f(0.75,-0.70);
            glEnd();
            //tank pipe
            glBegin(GL_POLYGON);
            glColor3ub(0,0,0);
            glVertex2f(0.75,-0.733);
            glVertex2f(0.59,-0.733);
            glVertex2f(0.59,-0.713);
            glVertex2f(0.75,-0.713);
            glEnd();
            //pipe box
            glBegin(GL_POLYGON);
            glColor3ub(0,0,0);
            glVertex2f(0.62,-0.74);
            glVertex2f(0.59,-0.74);
            glVertex2f(0.59,-0.71);
            glVertex2f(0.62,-0.71);
            glEnd();

            //tire 1 of border
            glPushMatrix();
            GLfloat x24=0.73; GLfloat y24=-0.91; GLfloat radius24 =0.025f;
            int triangleAmount24= 100; //# of triangles used to draw circle

            GLfloat Pi24 = 2.0f * PI;

             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
            glVertex2f(x24, y24); // Center of circle
            for(int i2 = 0; i2 <= triangleAmount24;i2++)
            {
            glVertex2f(
            x24 + (radius24 * cos(i2 * Pi24 / triangleAmount24)),
            y24 + (radius24 * sin(i2 * Pi24 / triangleAmount24))
            );
            }
            glEnd();
            glPopMatrix();
            //tire1
            glPushMatrix();
            GLfloat x23=0.73; GLfloat y23=-0.91; GLfloat radius23 =0.018f;
            int triangleAmount23= 100; //# of triangles used to draw circle

            GLfloat Pi23 = 2.0f * PI;

             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(122,135,140);
            glVertex2f(x23, y23); // Center of circle
            for(int i2 = 0; i2 <= triangleAmount23;i2++)
            {
            glVertex2f(
            x23 + (radius23 * cos(i2 * Pi23 / triangleAmount23)),
            y23 + (radius23 * sin(i2 * Pi23 / triangleAmount23))
            );
            }
            glEnd();
            glPopMatrix();
            //tire 2 border
             //tire of border
            glPushMatrix();
            GLfloat x25=0.785; GLfloat y25=-0.91; GLfloat radius25 =0.03f;
            int triangleAmount25= 100; //# of triangles used to draw circle

            GLfloat Pi25 = 2.0f * PI;

             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
            glVertex2f(x25, y25); // Center of circle
            for(int i2 = 0; i2 <= triangleAmount25;i2++)
            {
            glVertex2f(
            x25 + (radius25 * cos(i2 * Pi25 / triangleAmount25)),
            y25+ (radius25* sin(i2 * Pi24 / triangleAmount25))
            );
            }
            glEnd();
            glPopMatrix();
            //tire 1
            glPushMatrix();
            GLfloat x26=0.785; GLfloat y26=-0.91; GLfloat radius26 =0.022f;
            int triangleAmount26= 100; //# of triangles used to draw circle

            GLfloat Pi26 = 2.0f * PI;

             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(122,135,140);
            glVertex2f(x26, y26); // Center of circle
            for(int i2 = 0; i2 <= triangleAmount26;i2++)
            {
            glVertex2f(
            x26 + (radius26 * cos(i2 * Pi26 / triangleAmount26)),
            y26 + (radius26 * sin(i2 * Pi26 / triangleAmount26))
            );
            }
            glEnd();
            glPopMatrix();
            //tire3
              //tire of border
            glPushMatrix();
            GLfloat x27=0.845; GLfloat y27=-0.91; GLfloat radius27 =0.03f;
            int triangleAmount27= 100; //# of triangles used to draw circle

            GLfloat Pi27 = 2.0f * PI;

             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
            glVertex2f(x27, y27); // Center of circle
            for(int i2 = 0; i2 <= triangleAmount27;i2++)
            {
            glVertex2f(
            x27 + (radius27 * cos(i2 * Pi27 / triangleAmount27)),
            y27+ (radius27* sin(i2 * Pi27 / triangleAmount27))
            );
            }
            glEnd();
            glPopMatrix();
            //tire 3
            glPushMatrix();
            GLfloat x28=0.845; GLfloat y28=-0.91; GLfloat radius28=0.022f;
            int triangleAmount28= 100; //# of triangles used to draw circle

            GLfloat Pi28 = 2.0f * PI;

             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(122,135,140);
            glVertex2f(x28, y28); // Center of circle
            for(int i2 = 0; i2 <= triangleAmount28;i2++)
            {
            glVertex2f(
            x28 + (radius28 * cos(i2 * Pi28 / triangleAmount28)),
            y28 + (radius28 * sin(i2 * Pi28 / triangleAmount28))
            );
            }
            glEnd();
            glPopMatrix();
            //tire 4
            //border
            glPushMatrix();
            GLfloat x30=0.9; GLfloat y30=-0.91; GLfloat radius30=0.025f;
            int triangleAmount30= 100; //# of triangles used to draw circle

            GLfloat Pi30 = 2.0f * PI;

             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
            glVertex2f(x30, y30); // Center of circle
            for(int i2 = 0; i2 <= triangleAmount30;i2++)
            {
            glVertex2f(
            x30+ (radius30 * cos(i2 * Pi30 / triangleAmount30)),
            y30+ (radius30 * sin(i2 * Pi30/ triangleAmount30))
            );
            }
            glEnd();
            glPopMatrix();
             glPushMatrix();
            GLfloat x29=0.9; GLfloat y29=-0.91; GLfloat radius29 =0.018f;
            int triangleAmount29= 100; //# of triangles used to draw circle

            GLfloat Pi29 = 2.0f * PI;

             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(122,135,140);
            glVertex2f(x29, y29); // Center of circle
            for(int i2 = 0; i2 <= triangleAmount29;i2++)
            {
            glVertex2f(
            x29+ (radius29 * cos(i2 * Pi29 / triangleAmount29)),
            y29 + (radius29 * sin(i2 * Pi29 / triangleAmount29))
            );
            }
            glEnd();
            glPopMatrix();
            glBegin(GL_LINES);
            glColor3f(0.0f,0.0f,0.0f);
            glVertex2f(0.95,-0.83);
            glVertex2f(0.64,-0.83);
            glEnd();
            glPopMatrix();


}
void bullet()
{
    //army1
    glPushMatrix();
    glTranslatef(positionOfBullet,0.0f,0.0f);
     glBegin(GL_POLYGON);
     glColor3ub(226,212,292);
     glVertex2f(-0.74,-0.501);
     glVertex2f(-0.715,-0.507);  //border1
     glVertex2f(-0.74,-0.513);

     glEnd();
    glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.738,-0.502); //bullet 1
     glVertex2f(-0.72,-0.507);
     glVertex2f(-0.738,-0.512);

     glEnd();
     //army2
     glBegin(GL_POLYGON);
      glColor3ub(226,212,292);
     glVertex2f(-0.54,-0.601);
     glVertex2f(-0.515,-0.607);  //border 2
     glVertex2f(-0.54,-0.613);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.538,-0.602);
     glVertex2f(-0.52,-0.607);  //bullet 2
     glVertex2f(-0.538,-0.612);
     glEnd();
    //army3
    glBegin(GL_POLYGON);
      glColor3ub(226,212,292);
     glVertex2f(-0.34,-0.501); //border3
     glVertex2f(-0.315,-0.507);
     glVertex2f(-0.34,-0.513);
     glEnd();
    glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.338,-0.502); //bullet 3
     glVertex2f(-0.32,-0.507);
     glVertex2f(-0.338,-0.512);
     glEnd();
    //army4 fire
     glBegin(GL_POLYGON);
      glColor3ub(226,212,292);
     glVertex2f(-0.14,-0.702);
     glVertex2f(-0.115,-0.707); //border4
     glVertex2f(-0.14,-0.7125);
     glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(0,0,0);
     glVertex2f(-0.138,-0.702);
     glVertex2f(-0.12,-0.707); //bullet 4
     glVertex2f(-0.138,-0.712);
     glEnd();

     glPopMatrix();

}
void flag()
{

        glBegin(GL_POLYGON);
        glColor3ub(53,134,56);
        glVertex2f(-0.11, 0.25);
        glVertex2f(0.05, 0.25);
        glVertex2f(0.05, 0.38);
        glVertex2f(-0.11, 0.38);
        glEnd();
        //circle

             glPushMatrix();
            GLfloat x32=-0.03; GLfloat y32=0.31; GLfloat radius32 =0.023f;
            int triangleAmount32= 100; //# of triangles used to draw circle

            GLfloat Pi32 = 2.0f * PI;

             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,5,5);
            glVertex2f(x32, y32); // Center of circle
            for(int i2 = 0; i2 <= triangleAmount32;i2++)
            {
            glVertex2f(
            x32+ (radius32 * cos(i2 * Pi32 / triangleAmount32)),
            y32 + (radius32 * sin(i2 * Pi32 / triangleAmount32))
            );
            }
            glEnd();
            glPopMatrix();

}

void flagMove()
{
         glPushMatrix();
  	glRotatef(counter2,-0.11,0.31,-0.0);
        counter2+=0.9;

        //circle
            glBegin(GL_POLYGON);
        glColor3ub(53,134,56);
        glVertex2f(-0.11, 0.23);
        glVertex2f(0.05, 0.23);
        glVertex2f(0.05, 0.38);
        glVertex2f(-0.11, 0.38);
        glEnd();

            GLfloat x32=-0.03; GLfloat y32=0.31; GLfloat radius32 =0.023f;
            int triangleAmount32= 100; //# of triangles used to draw circle

            GLfloat Pi32 = 2.0f * PI;

             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(250,5,5);
            glVertex2f(x32, y32); // Center of circle
            for(int i2 = 0; i2 <= triangleAmount32;i2++)
            {
            glVertex2f(
            x32+ (radius32 * cos(i2 * Pi32 / triangleAmount32)),
            y32 + (radius32 * sin(i2 * Pi32 / triangleAmount32))
            );
            }
            glEnd();
            glPopMatrix();

}

void line()
{
             glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(0.88,-0.92); //road line
            glVertex2f(0.95,-0.92);
            glVertex2f(0.95,-0.91);
            glVertex2f(0.88,-0.91);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(0.78,-0.92); //road line
            glVertex2f(0.83,-0.92);
            glVertex2f(0.83,-0.91);
            glVertex2f(0.78,-0.91);
            glEnd(); glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(0.68,-0.92); //road line
            glVertex2f(0.73,-0.92);
            glVertex2f(0.73,-0.91);
            glVertex2f(0.68,-0.91);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(0.58,-0.92); //road line
            glVertex2f(0.63,-0.92);
            glVertex2f(0.63,-0.91);
            glVertex2f(0.58,-0.91);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(0.48,-0.92);
            glVertex2f(0.53,-0.92);
            glVertex2f(0.53,-0.91);
            glVertex2f(0.48,-0.91);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(0.38,-0.92);
            glVertex2f(0.43,-0.92);
            glVertex2f(0.43,-0.91);
            glVertex2f(0.38,-0.91);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(0.28,-0.92);
            glVertex2f(0.33,-0.92);
            glVertex2f(0.33,-0.91);
            glVertex2f(0.28,-0.91);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(0.18,-0.92);
            glVertex2f(0.23,-0.92);
            glVertex2f(0.23,-0.91);
            glVertex2f(0.18,-0.91);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(0.08,-0.92);
            glVertex2f(0.13,-0.92);
            glVertex2f(0.13,-0.91);
            glVertex2f(0.08,-0.91);
            glEnd();
             glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(-0.02,-0.92);
            glVertex2f(0.03,-0.92);
            glVertex2f(0.03,-0.91);
            glVertex2f(-0.02,-0.91);
            glEnd();
             glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(-0.12,-0.92);
            glVertex2f(-0.07,-0.92);
            glVertex2f(-0.07,-0.91);
            glVertex2f(-0.12,-0.91);
            glEnd();
             glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(-0.22,-0.92);
            glVertex2f(-0.17,-0.92);
            glVertex2f(-0.17,-0.91);
            glVertex2f(-0.22,-0.91);
            glEnd();
             glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(-0.32,-0.92);
            glVertex2f(-0.27,-0.92);
            glVertex2f(-0.27,-0.91);
            glVertex2f(-0.32,-0.91);
            glEnd();
             glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(-0.42,-0.92);
            glVertex2f(-0.37,-0.92);
            glVertex2f(-0.37,-0.91);
            glVertex2f(-0.42,-0.91);
            glEnd();
             glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(-0.52,-0.92);
            glVertex2f(-0.47,-0.92);
            glVertex2f(-0.47,-0.91);
            glVertex2f(-0.52,-0.91);
            glEnd();
             glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(-0.62,-0.92);
            glVertex2f(-0.57,-0.92);
            glVertex2f(-0.57,-0.91);
            glVertex2f(-0.62,-0.91);
            glEnd();
             glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(-0.72,-0.92);
            glVertex2f(-0.67,-0.92);
            glVertex2f(-0.67,-0.91);
            glVertex2f(-0.72,-0.91);
            glEnd();
             glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(-0.82,-0.92);
            glVertex2f(-0.77,-0.92);
            glVertex2f(-0.77,-0.91);
            glVertex2f(-0.82,-0.91);
            glEnd();
             glBegin(GL_POLYGON);
            glColor3ub(216,213,213);
            glVertex2f(-0.92,-0.92);
            glVertex2f(-0.87,-0.92);
            glVertex2f(-0.87,-0.91);
            glVertex2f(-0.92,-0.91);
            glEnd();


}
void tankBullet()
{
    glPushMatrix();
    glTranslatef(-positionOfTankBullet,0.0f,0.0f);
     glBegin(GL_POLYGON);
            glColor3ub(255,248,218);
            glVertex2f(0.61,-0.74);
            glVertex2f(0.588,-0.725);
            glVertex2f(0.61,-0.71);
            glEnd();
     glBegin(GL_POLYGON);
            glColor3ub(0,0,0);
            glVertex2f(0.608,-0.74);
            glVertex2f(0.59,-0.725);
            glVertex2f(0.608,-0.71);
            glEnd();
            glPopMatrix();
}
void helicopter()
{
    glPushMatrix();
     glTranslatef(positionHelicopter,0.0f,0.0f);
     glBegin(GL_POLYGON);
            glColor3ub(95,95,95);
            glVertex2f(0.03,0.74);
            glVertex2f(0.1,0.68);
            glVertex2f(0.3,0.68);
            glVertex2f(0.32,0.7);
            glVertex2f(0.3,0.73);
            glVertex2f(0.27,0.77);
            glVertex2f(0.2,0.82);
            glVertex2f(0.1,0.77);
            glVertex2f(0.03,0.77);
            glEnd();
             glBegin(GL_POLYGON);
            glColor3ub(95,95,95);
            glVertex2f(-0.08,0.75);
            glVertex2f(0.03,0.74);
            glVertex2f(0.03,0.77);
            glVertex2f(-0.06,0.77);
            glVertex2f(-0.08,0.83);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(0,0,0);
            glVertex2f(0.3,0.73);
            glVertex2f(0.27,0.77);
            glVertex2f(0.25,0.77);
            glVertex2f(0.25,0.73);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(0,0,0);
            glVertex2f(0.17,0.73);
            glVertex2f(0.19,0.73);
            glVertex2f(0.19,0.77);
            glVertex2f(0.17,0.77);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(0,0,0);
            glVertex2f(0.21,0.73);
            glVertex2f(0.23,0.73);
            glVertex2f(0.23,0.77);
            glVertex2f(0.21,0.77);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(0,0,0);
            glVertex2f(0.07,0.82);
            glVertex2f(0.3,0.82);
            glVertex2f(0.3,0.83);
            glVertex2f(0.07,0.83);
            glEnd();
              glPushMatrix();
            GLfloat x34=-0.08; GLfloat y34=0.83; GLfloat radius34 =0.032f;
            int triangleAmount34= 100; //# of triangles used to draw circle

            GLfloat Pi34 = 2.0f * PI;

             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(0,0,0);
            glVertex2f(x34, y34); // Center of circle
            for(int i2 = 0; i2 <= triangleAmount34;i2++)
            {
            glVertex2f(
            x34+ (radius34* cos(i2 * Pi34 / triangleAmount34)),
            y34 + (radius34 * sin(i2 * Pi34 / triangleAmount34))
            );
            }
            glEnd();
            glPopMatrix();
             glPushMatrix();
            GLfloat x33=-0.08; GLfloat y33=0.83; GLfloat radius33 =0.03f;
            int triangleAmount33= 100; //# of triangles used to draw circle

            GLfloat Pi33 = 2.0f * PI;

             glBegin(GL_TRIANGLE_FAN);
            glColor3ub(95,95,95);
            glVertex2f(x33, y33); // Center of circle
            for(int i2 = 0; i2 <= triangleAmount33;i2++)
            {
            glVertex2f(
            x33+ (radius33* cos(i2 * Pi33 / triangleAmount33)),
            y33 + (radius33 * sin(i2 * Pi33 / triangleAmount33))
            );
            }
            glEnd();
            glPopMatrix();
           glBegin(GL_POLYGON);
            glColor3ub(0,0,0);
            glVertex2f(-0.08,0.83); //fan
            glVertex2f(-0.12,0.83);
            glVertex2f(-0.10,0.86);

            glColor3ub(0,0,0);
            glVertex2f(-0.08,0.83);
            glVertex2f(-0.045,0.85);
            glVertex2f(-0.06,0.88);

            glColor3ub(0,0,0);
            glVertex2f(-0.08,0.83);
            glVertex2f(-0.06,0.80);
            glVertex2f(-0.08,0.77);
            glEnd();
            glPopMatrix();

}
void cloud1rain()
{
    glPushMatrix();
    glTranslatef(positionOfCloud, 0.05f, 0.0f);
        int i;

        GLfloat x=.5f; GLfloat y=.90f; GLfloat radius =.05f;
        int triangleAmount = 20;
        GLfloat twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glColor3ub(207, 216, 222);
            glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat a=.55f; GLfloat b=.87f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(a, b); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        a + (radius * cos(i *  twicePi / triangleAmount)),
                    b + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat c=.45f; GLfloat d=.87f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(c, d); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        c + (radius * cos(i *  twicePi / triangleAmount)),
                    d + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat e=.52f; GLfloat f=.84f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(e, f); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        e + (radius * cos(i *  twicePi / triangleAmount)),
                    f+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat g=.6f; GLfloat h=.86f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(g, h); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        g + (radius * cos(i *  twicePi / triangleAmount)),
                    h+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();
    glPopMatrix();
}

void cloud2rain()
{

    glPushMatrix();
    glTranslatef(positionOfCloud2, 0.05f, 0.0f);

        int i;

        GLfloat x=-.5f; GLfloat y=.84f; GLfloat radius =.05f;
        int triangleAmount = 20;
        GLfloat twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glColor3ub(207, 216, 222);
            glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat a=-.55f; GLfloat b=.81f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(a, b); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        a + (radius * cos(i *  twicePi / triangleAmount)),
                    b + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat c=-.45f; GLfloat d=.81f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(c, d); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        c + (radius * cos(i *  twicePi / triangleAmount)),
                    d + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat e=-.52f; GLfloat f=.78f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(e, f); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        e + (radius * cos(i *  twicePi / triangleAmount)),
                    f+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat g=-.6f; GLfloat h=.80f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(g, h); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        g + (radius * cos(i *  twicePi / triangleAmount)),
                    h+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();
    glPopMatrix();
}
void cloud1evening()
{
    glPushMatrix();
    glTranslatef(positionOfCloud, 0.05f, 0.0f);
        int i;

        GLfloat x=.5f; GLfloat y=.90f; GLfloat radius =.05f;
        int triangleAmount = 20;
        GLfloat twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glColor3ub(228,223 ,236);
            glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat a=.55f; GLfloat b=.87f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(a, b); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        a + (radius * cos(i *  twicePi / triangleAmount)),
                    b + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat c=.45f; GLfloat d=.87f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(c, d); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        c + (radius * cos(i *  twicePi / triangleAmount)),
                    d + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat e=.52f; GLfloat f=.84f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(e, f); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        e + (radius * cos(i *  twicePi / triangleAmount)),
                    f+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat g=.6f; GLfloat h=.86f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(g, h); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        g + (radius * cos(i *  twicePi / triangleAmount)),
                    h+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();
    glPopMatrix();
}

void cloud2evening()
{

    glPushMatrix();
    glTranslatef(positionOfCloud2, 0.05f, 0.0f);

        int i;

        GLfloat x=-.5f; GLfloat y=.84f; GLfloat radius =.05f;
        int triangleAmount = 20;
        GLfloat twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glColor3ub(228,223 ,236);
            glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat a=-.55f; GLfloat b=.81f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(a, b); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        a + (radius * cos(i *  twicePi / triangleAmount)),
                    b + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat c=-.45f; GLfloat d=.81f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(c, d); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        c + (radius * cos(i *  twicePi / triangleAmount)),
                    d + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat e=-.52f; GLfloat f=.78f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(e, f); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        e + (radius * cos(i *  twicePi / triangleAmount)),
                    f+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat g=-.6f; GLfloat h=.80f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(g, h); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        g + (radius * cos(i *  twicePi / triangleAmount)),
                    h+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();
    glPopMatrix();
}
void grass()
{
    glBegin(GL_POLYGON);
     glColor3ub(159,163,62);
     glVertex2f(0.0,-0.505);
     glVertex2f(0.01,-0.505); //grass
     glVertex2f(-0.03,-0.4);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(0.0,-0.505);
     glVertex2f(0.01,-0.505);//grass
     glVertex2f(0.005,-0.38);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(0.0,-0.505);
     glVertex2f(0.01,-0.505);//grass
     glVertex2f(0.04,-0.4);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(-0.005,-0.505);
     glVertex2f(0.01,-0.505);//grass
     glVertex2f(-0.06,-0.4);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(0.0,-0.505);
     glVertex2f(0.015,-0.505);//grass
     glVertex2f(0.07,-0.4);
     glEnd();

//2nd grASS
     glBegin(GL_POLYGON);
     glColor3ub(159,163,62);
     glVertex2f(0.2,-0.855);
     glVertex2f(0.21,-0.855); //grass
     glVertex2f(0.17,-0.75);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(0.2,-0.855);
     glVertex2f(0.21,-0.855);//grass
     glVertex2f(0.205,-0.72);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(0.2,-0.855);
     glVertex2f(0.21,-0.855);//grass
     glVertex2f(0.24,-0.75);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(0.195,-0.855);
     glVertex2f(0.21,-0.855);//grass
     glVertex2f(0.194,-0.75);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(0.2,-0.855);
     glVertex2f(0.215,-0.855);//grass
     glVertex2f(0.27,-0.75);
     glEnd();
     //3rd grass
      glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(-0.95,-0.505);
     glVertex2f(-0.94,-0.505); //grass
     glVertex2f(-0.97,-0.4);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(-0.95,-0.505);
     glVertex2f(-0.94,-0.505);//grass
     glVertex2f(-0.945,-0.38);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(-0.95,-0.505);
     glVertex2f(-0.94,-0.505);//grass
     glVertex2f(-0.99,-0.4);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(159,163,62);
     glVertex2f(-0.955,-0.505);
     glVertex2f(-0.94,-0.505);//grass
     glVertex2f(-0.92,-0.4);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(-0.955,-0.505);
     glVertex2f(-0.94,-0.505);//grass
     glVertex2f(-0.89,-0.4);
     glEnd();
     //4th
      glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(-0.95,-0.855);
     glVertex2f(-0.94,-0.855); //grass
     glVertex2f(-0.97,-0.75);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(-0.95,-0.855);
     glVertex2f(-0.94,-0.855);//grass
     glVertex2f(-0.945,-0.73);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(-0.95,-0.855);
     glVertex2f(-0.94,-0.855);//grass
     glVertex2f(-0.99,-0.75);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(159,163,62);
     glVertex2f(-0.955,-0.855);
     glVertex2f(-0.94,-0.855);//grass
     glVertex2f(-0.92,-0.75);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(-0.955,-0.855);
     glVertex2f(-0.94,-0.855);//grass
     glVertex2f(-0.89,-0.75);
     glEnd();
     //5th
     glBegin(GL_POLYGON);
     glColor3ub(159,163,62);
     glVertex2f(-0.55,-0.855);
     glVertex2f(-0.54,-0.855); //grass
     glVertex2f(-0.57,-0.75);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(-0.55,-0.855);
     glVertex2f(-0.54,-0.855);//grass
     glVertex2f(-0.545,-0.73);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(-0.55,-0.855);
     glVertex2f(-0.54,-0.855);//grass
     glVertex2f(-0.59,-0.75);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(-0.555,-0.855);
     glVertex2f(-0.54,-0.855);//grass
     glVertex2f(-0.52,-0.75);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(30,96,35);
     glVertex2f(-0.555,-0.855);
     glVertex2f(-0.54,-0.855);//grass
     glVertex2f(-0.49,-0.75);
     glEnd();
}
void display(void)
{
glClearColor(1,1,1,1);
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(10.0);
daysky();
sun();
cloud1();
cloud2();
ground();
carLine();
mountainsDay();
Ttree();
tree();
helicopter();
flag();
steadyObjects();
tent();
wood();
//fire();
shootingBoard();
shootingBoard2();
bullet();
army1();
army4();
army3();
army2();
grass();
line();
tankBullet();
tank();
birds();
glLoadIdentity();
glLineWidth(1.5);
  glPushMatrix();
        if(vrain)//rain portion
        {
            cloudsky();
             bird();
            cloud1rain();
            cloud2rain();
            ground();
            carLine();
            mountainsDay();
            Ttree();
            tree();
            steadyObjects();
            lighteningEye();
            tent();
            wood();
        shootingBoard();
            shootingBoard2();
            bullet();
            army1();
            army3();
            army2();
            army4();
            grass();
            line();
            tankBullet();
            tank();
            rain();
            flagMove();


        }
    glPopMatrix();


  glPushMatrix();
        if(vnight)//nigh portion
        {
            nightsky();
            bird();
            moon();
            stars();
            cloud1();
            cloud2();
            groundNight();
            carLine();
            mountainsDay();
            Ttree();
            tree();
            helicopter();
            steadyObjects();
            lighteningEye();
            flag();
            tent();
            wood();
            fire();
            shootingBoard();
            shootingBoard2();
            bullet();
            army1();
            army3();
            army2();
            army4();
            grass();
            line();
            tankBullet();
            tank();
           // birds();



        }
    glPopMatrix();



glPushMatrix();
        if(vday)
        {
        daysky();
            sun();
            cloud1();
            cloud2();
            ground();
            carLine();
            mountainsDay();
            Ttree();
            tree();
            helicopter();
            flag();
            steadyObjects();
            tent();
            wood();
            //fire();
            shootingBoard();
            shootingBoard2();
            bullet();
            army1();
            army4();
            army3();
            army2();
            grass();
            line();
            tankBullet();
            tank();
            birds();
            }
                glPopMatrix();

        glPushMatrix();
        if(vevening)
        {
        eveningsky();
            sunevening();
            cloud1evening();
            cloud2evening();
              bird();
            ground();
            carLine();
            mountainsDay();
            Ttree();
            tree();
            helicopter();
            flag();
            steadyObjects();
            tent();
            wood();
            //fire();
            shootingBoard();
            shootingBoard2();
            bullet();
            army1();
            army4();
            army3();
            army2();
            grass();
            line();
            tankBullet();
            tank();
                    }
                glPopMatrix();
               glutSwapBuffers();
               glFlush();
            }

            void keyboardHandle(unsigned char key, int x, int y)
            {

               switch (key) {

        case 'r':
            vrain=true;
            vnight=false;
            vday=false;
            vevening=false;
            sndPlaySound("rain.wav",SND_ASYNC);
            break;
        case 'n':
            vnight=true;
            vday=false;
            vrain=false;
            vevening=false;
            sndPlaySound("night.wav",SND_ASYNC);
            break;
        case 'd':
            vday=true;   //day and bird sounds
            vnight=false;
            vrain=false;
            vevening=false;
            sndPlaySound("day.wav",SND_ASYNC);
            break;
            case 'e':
            vevening=true;   //day and bird sounds
            vnight=false;
            vrain=false;
            vday=false;
            sndPlaySound("evening.wav",SND_ASYNC);
            break;

        case 's':
            speed3 = 0.0f; // stop tank
            break;
        case 'b':
            speed3 = -0.05f;
            sndPlaySound("tank.wav",SND_ASYNC); //tank backwards
            break;
        case 'a':
            speed3 =0.05f;
            sndPlaySound("tank.wav",SND_ASYNC); //tank forward
            break;
        case 'w':
            Speed6 =+0.005f; //armies walk
            break;

        case 'W':
            Speed6 =-0.005f; //armies walk
            break;

        case 'S':
            Speed6 =0.0f;
            break;
       case 'h':
            Speed12 =+0.05f;
            sndPlaySound("helicopter.wav",SND_ASYNC); //fire sounds
            break;

        case 'f':
            Speed7 =+0.02f;
            sndPlaySound("gun.wav",SND_ASYNC); //fire sounds
            break;
        case 'F':
            Speed8 =-0.02f;
            sndPlaySound("gun.wav",SND_ASYNC); //fire sounds of bullet
            break;
        case 'x':
            exit(0);
            break;
   }
}
int main(int argc, char** argv)
{

glutInit(&argc, argv);
    cout<<"\n -----------WELCOME TO ARMY CAMP-----------------\n";
    cout<<"\n| Press 'd' for Day mode.                        |";
    cout<<"\n| Press 'r' for Rain mode.                       |";
    cout<<"\n| Press 'e' for Evening mode.                    |";
    cout<<"\n| Press 'n' for Night mode.                      |";
    cout<<"\n| Press 'f' to fire bullets from guns.           |";
	cout<<"\n| Press 'F' to fire from Tank.                   |";
    cout<<"\n| Press 'h' for speeding up the helicopter.      |";
	cout<<"\n| Press 'a' for Tank move forward.               |";
	cout<<"\n| Press 's' to stop the tank                     |";
	cout<<"\n| Press 'b' to move the tank backwards.          |";
	cout<<"\n| Press 'w' to move the Armies.                  |";
    cout<<"\n| Press 'W' to make the armies walk backwards.   |";
    cout<<"\n| Press 'S' to stop the armies.                  |";
	cout<<"\n| Press 'x' for exit.                            |\n ";
    cout<<"\n ----------------THANK YOU------------------------";
glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
//glutInitWindowPosition(-1,-1);
glutInitWindowSize(1200,800);
glutCreateWindow("Army Camp");
init();
glutDisplayFunc(display);
glutIdleFunc(display);

glutKeyboardFunc(keyboardHandle);
 sndPlaySound("day.wav",SND_ASYNC);
glutTimerFunc(100, update, 0);
glutTimerFunc(100, update2, 0);
glutTimerFunc(100, update3, 0);
glutTimerFunc(100, update4, 0);
glutTimerFunc(100, update5, 0);
glutTimerFunc(100, update6, 0);
glutTimerFunc(100, update7, 0);
glutTimerFunc(100, update8, 0);
glutTimerFunc(100, update9, 0);
glutTimerFunc(100, update10, 0);
glutTimerFunc(100, update11, 0);
glutTimerFunc(100, update12, 0);
glutMainLoop();
return 0;
}
