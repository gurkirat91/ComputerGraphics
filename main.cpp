#define GL_SILENCE_DEPRECATION
#include<GLUT/glut.h>
#include<OpenGL/glu.h>
#include<OpenGL/gl.h>
#include<iostream>
#include<math.h>

//#include <windows.h>  // for MS Windows
//#include<GL/glut.h> // GLUT, include glu.h and gl.h
//#include<math.h>>
# define PI           3.14159265358979323846
#include<cstdio>
//#include <GL/gl.h>
#include "sun.hpp"
#include "position.hpp"
#include "clouds.hpp"
#include "buildings.hpp"
#include "green.hpp"
#include "road.hpp"
 void display()
 {
    glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);

//SKY
     sky();

//sun
     glColor3ub(242, 255, 0);
     sun();   //function for sun
//cloud
     clouds();
//right blding 1
     buildings();
//tree
     tree();
//grass
     grass();
 //road1
     road1();
//car
glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_QUADS);
     glColor3ub(230, 255, 255);
     glVertex2f(.23,-0.58);
     glVertex2f(.23,-0.55);
     glVertex2f(.32,-0.55);
     glVertex2f(.32,-0.58);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(230, 255, 255);
     glVertex2f(.26,-0.55);
     glVertex2f(.26,-0.51);
     glVertex2f(.313,-0.51);
     glVertex2f(.313,-0.55);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(.265,-0.55);
     glVertex2f(.265,-0.515);
     glVertex2f(.309,-0.515);
     glVertex2f(.309,-0.55);
     glEnd();
    glColor3ub(7, 8, 7);
    int i;

     x=.25f;  y=-.578f;  radius =.01f;
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();


glColor3ub(7, 8, 7);
    int j;

     x=.30f;  y=-.578f;  radius =.01f;
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y); // center of circle
        for(j = 0; j <= triangleAmount;j++) {
            glVertex2f(
                    x + (radius * cos(j *  twicePi / triangleAmount)),
                y + (radius * sin(j * twicePi / triangleAmount))
            );
        }
    glEnd();
glPopMatrix();


glBegin(GL_QUADS);
     glColor3ub(230, 255, 255);
     glVertex2f(1.0,-0.595);
     glVertex2f(1.0,-0.590);
     glVertex2f(-1.0,-0.590);
     glVertex2f(-1.0,-0.595);
     glEnd();

//road 2
     road2();
//car3
glPushMatrix();
glTranslatef(position13,0.0f, 0.0f);

     glBegin(GL_QUADS);
     glColor3ub(184, 0, 230);
     glVertex2f(-.23,-0.68);
     glVertex2f(-.23,-0.65);
     glVertex2f(-.32,-0.65);
     glVertex2f(-.32,-0.68);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(184, 0, 230);
     glVertex2f(-.26,-0.65);
     glVertex2f(-.26,-0.61);
     glVertex2f(-.313,-0.61);
     glVertex2f(-.313,-0.65);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(-.265,-0.65);
     glVertex2f(-.265,-0.615);
     glVertex2f(-.309,-0.615);
     glVertex2f(-.309,-0.65);
     glEnd();
    glColor3ub(7, 8, 7);
    int m;

     x=-.25f;  y=-.678f;  radius =.01f;
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y); // center of circle
        for(m = 0; m <= triangleAmount;m++) {
            glVertex2f(
                    x + (radius * cos(m *  twicePi / triangleAmount)),
                y + (radius * sin(m * twicePi / triangleAmount))
            );
        }
    glEnd();


glColor3ub(7, 8, 7);
    int M;

     x=-.30f;  y=-.678f;  radius =.01f;
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y); // center of circle
        for(M = 0; M <= triangleAmount;M++) {
            glVertex2f(
                    x + (radius * cos(M *  twicePi / triangleAmount)),
                y + (radius * sin(M * twicePi / triangleAmount))
            );
        }
    glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(position14,0.0f, 0.0f);
//car4
     glBegin(GL_QUADS);
     glColor3ub(255, 77, 136);
     glVertex2f(.23,-0.68);
     glVertex2f(.23,-0.65);
     glVertex2f(.32,-0.65);
     glVertex2f(.32,-0.68);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 77, 136);
     glVertex2f(.29,-0.65);
     glVertex2f(.29,-0.61);
     glVertex2f(.24,-0.61);
     glVertex2f(.24,-0.65);
     glEnd();


glBegin(GL_QUADS);
     glColor3ub(0, 0, 0);
     glVertex2f(.285,-0.65);
     glVertex2f(.285,-0.615);
     glVertex2f(.245,-0.615);
     glVertex2f(.245,-0.65);
     glEnd();
    glColor3ub(7, 8, 7);
    int n;

     x=.25f;  y=-.678f;  radius =.01f;
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y); // center of circle
        for(n = 0; n <= triangleAmount;n++) {
            glVertex2f(
                    x + (radius * cos(n *  twicePi / triangleAmount)),
                y + (radius * sin(n * twicePi / triangleAmount))
            );
        }
    glEnd();


glColor3ub(7, 8, 7);
    int N;

     x=.30f;  y=-.678f;  radius =.01f;
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y); // center of circle
        for(N = 0; N <= triangleAmount;N++) {
            glVertex2f(
                    x + (radius * cos(N *  twicePi / triangleAmount)),
                y + (radius * sin(N * twicePi / triangleAmount))
            );
        }
    glEnd();
glPopMatrix();

//road3
     road3();
 //piller
     red_pillar();
//car2
glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
glBegin(GL_QUADS);
     glColor3f(0,0,1);
     glVertex2f(.43,-0.78);
     glVertex2f(.43,-0.75);
     glVertex2f(.52,-0.75);
     glVertex2f(.52,-0.78);
     glEnd();
glBegin(GL_QUADS);
     glColor3f(0,0,1);
     glVertex2f(.46,-0.75);
     glVertex2f(.46,-0.71);
     glVertex2f(.513,-0.71);
     glVertex2f(.513,-0.75);
     glVertex2f(.465,-0.715);
     glVertex2f(.509,-0.715);
     glVertex2f(.509,-0.75);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(.49,-0.71);
     glVertex2f(.49,-0.702);
     glVertex2f(.5,-0.702);
     glVertex2f(.5,-0.71);
     glEnd();

glBegin(GL_QUADS);
     glColor3f(0, 0, 0);
     glVertex2f(.465,-0.75);
     glVertex2f(.465,-0.715);
     glVertex2f(.509,-0.715);
     glVertex2f(.509,-0.75);
     glEnd();
glBegin(GL_QUADS);
     glColor3ub(255, 0, 0);
     glVertex2f(.49,-0.71);
     glVertex2f(.49,-0.702);
     glVertex2f(.5,-0.702);
     glVertex2f(.5,-0.71);
     glEnd();

    glColor3ub(7, 8, 7);
    int a;

     x=.45f;  y=-.778f;  radius =.01f;
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y); // center of circle
        for(a = 0; a <= triangleAmount;a++) {
            glVertex2f(
                    x + (radius * cos(a *  twicePi / triangleAmount)),
                y + (radius * sin(a * twicePi / triangleAmount))
            );
        }
    glEnd();


    glColor3ub(7, 8, 7);
    int s;

     x=.50f;  y=-.778f;  radius =.01f;
     triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
     twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y); // center of circle
        for(s = 0; s <= triangleAmount;s++) {
            glVertex2f(
                    x + (radius * cos(s *  twicePi / triangleAmount)),
                y + (radius * sin(s * twicePi / triangleAmount))
            );
        }
    glEnd();
glPopMatrix();

//road4
     road4();
 }













void display2()
{
     glClearColor(1.0,1.0,1.0,1.0);
     glClear(GL_COLOR_BUFFER_BIT);

//SKY
    evening();
//sun
    eveningSun();
//cloud
    clouds();
//right blding 1
    buildings();
//tree
    tree();
    grass();
//road1
    road1();
//car
//road2
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
        glBegin(GL_QUADS);
         glColor3ub(230, 255, 255);
         glVertex2f(.23,-0.58);
         glVertex2f(.23,-0.55);
         glVertex2f(.32,-0.55);
         glVertex2f(.32,-0.58);
         glEnd();
    glBegin(GL_QUADS);
         glColor3ub(230, 255, 255);
         glVertex2f(.26,-0.55);
         glVertex2f(.26,-0.51);
         glVertex2f(.313,-0.51);
         glVertex2f(.313,-0.55);
         glEnd();


    glBegin(GL_QUADS);
         glColor3ub(0, 0, 0);
         glVertex2f(.265,-0.55);
         glVertex2f(.265,-0.515);
         glVertex2f(.309,-0.515);
         glVertex2f(.309,-0.55);
         glEnd();
        glColor3ub(7, 8, 7);
        int i;

         x=.25f;  y=-.578f;  radius =.01f;
         triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();


    glColor3ub(7, 8, 7);
        int j;

         x=.30f;  y=-.578f;  radius =.01f;
         triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(j = 0; j <= triangleAmount;j++) {
                glVertex2f(
                        x + (radius * cos(j *  twicePi / triangleAmount)),
                    y + (radius * sin(j * twicePi / triangleAmount))
                );
            }
        glEnd();
    glPopMatrix();


    glBegin(GL_QUADS);
         glColor3ub(230, 255, 255);
         glVertex2f(1.0,-0.595);
         glVertex2f(1.0,-0.590);
         glVertex2f(-1.0,-0.590);
         glVertex2f(-1.0,-0.595);
         glEnd();

    //road 2
         road2();
    //car3
    glPushMatrix();
    glTranslatef(position13,0.0f, 0.0f);

         glBegin(GL_QUADS);
         glColor3ub(184, 0, 230);
         glVertex2f(-.23,-0.68);
         glVertex2f(-.23,-0.65);
         glVertex2f(-.32,-0.65);
         glVertex2f(-.32,-0.68);
         glEnd();
    glBegin(GL_QUADS);
         glColor3ub(184, 0, 230);
         glVertex2f(-.26,-0.65);
         glVertex2f(-.26,-0.61);
         glVertex2f(-.313,-0.61);
         glVertex2f(-.313,-0.65);
         glEnd();


    glBegin(GL_QUADS);
         glColor3ub(0, 0, 0);
         glVertex2f(-.265,-0.65);
         glVertex2f(-.265,-0.615);
         glVertex2f(-.309,-0.615);
         glVertex2f(-.309,-0.65);
         glEnd();
        glColor3ub(7, 8, 7);
        int m;

         x=-.25f;  y=-.678f;  radius =.01f;
         triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(m = 0; m <= triangleAmount;m++) {
                glVertex2f(
                        x + (radius * cos(m *  twicePi / triangleAmount)),
                    y + (radius * sin(m * twicePi / triangleAmount))
                );
            }
        glEnd();


    glColor3ub(7, 8, 7);
        int M;

         x=-.30f;  y=-.678f;  radius =.01f;
         triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(M = 0; M <= triangleAmount;M++) {
                glVertex2f(
                        x + (radius * cos(M *  twicePi / triangleAmount)),
                    y + (radius * sin(M * twicePi / triangleAmount))
                );
            }
        glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(position14,0.0f, 0.0f);
    //car4
         glBegin(GL_QUADS);
         glColor3ub(255, 77, 136);
         glVertex2f(.23,-0.68);
         glVertex2f(.23,-0.65);
         glVertex2f(.32,-0.65);
         glVertex2f(.32,-0.68);
         glEnd();
    glBegin(GL_QUADS);
         glColor3ub(255, 77, 136);
         glVertex2f(.29,-0.65);
         glVertex2f(.29,-0.61);
         glVertex2f(.24,-0.61);
         glVertex2f(.24,-0.65);
         glEnd();


    glBegin(GL_QUADS);
         glColor3ub(0, 0, 0);
         glVertex2f(.285,-0.65);
         glVertex2f(.285,-0.615);
         glVertex2f(.245,-0.615);
         glVertex2f(.245,-0.65);
         glEnd();
        glColor3ub(7, 8, 7);
        int n;

         x=.25f;  y=-.678f;  radius =.01f;
         triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(n = 0; n <= triangleAmount;n++) {
                glVertex2f(
                        x + (radius * cos(n *  twicePi / triangleAmount)),
                    y + (radius * sin(n * twicePi / triangleAmount))
                );
            }
        glEnd();


    glColor3ub(7, 8, 7);
        int N;

         x=.30f;  y=-.678f;  radius =.01f;
         triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(N = 0; N <= triangleAmount;N++) {
                glVertex2f(
                        x + (radius * cos(N *  twicePi / triangleAmount)),
                    y + (radius * sin(N * twicePi / triangleAmount))
                );
            }
        glEnd();
    glPopMatrix();

    //road3
         road3();
     //piller
         red_pillar();
    //car2
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
         glColor3f(0,0,1);
         glVertex2f(.43,-0.78);
         glVertex2f(.43,-0.75);
         glVertex2f(.52,-0.75);
         glVertex2f(.52,-0.78);
         glEnd();
    glBegin(GL_QUADS);
         glColor3f(0,0,1);
         glVertex2f(.46,-0.75);
         glVertex2f(.46,-0.71);
         glVertex2f(.513,-0.71);
         glVertex2f(.513,-0.75);
         glVertex2f(.465,-0.715);
         glVertex2f(.509,-0.715);
         glVertex2f(.509,-0.75);
         glEnd();
    glBegin(GL_QUADS);
         glColor3ub(255, 0, 0);
         glVertex2f(.49,-0.71);
         glVertex2f(.49,-0.702);
         glVertex2f(.5,-0.702);
         glVertex2f(.5,-0.71);
         glEnd();

    glBegin(GL_QUADS);
         glColor3f(0, 0, 0);
         glVertex2f(.465,-0.75);
         glVertex2f(.465,-0.715);
         glVertex2f(.509,-0.715);
         glVertex2f(.509,-0.75);
         glEnd();
    glBegin(GL_QUADS);
         glColor3ub(255, 0, 0);
         glVertex2f(.49,-0.71);
         glVertex2f(.49,-0.702);
         glVertex2f(.5,-0.702);
         glVertex2f(.5,-0.71);
         glEnd();

        glColor3ub(7, 8, 7);
        int a;

         x=.45f;  y=-.778f;  radius =.01f;
         triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(a = 0; a <= triangleAmount;a++) {
                glVertex2f(
                        x + (radius * cos(a *  twicePi / triangleAmount)),
                    y + (radius * sin(a * twicePi / triangleAmount))
                );
            }
        glEnd();


        glColor3ub(7, 8, 7);
        int s;

         x=.50f;  y=-.778f;  radius =.01f;
         triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(s = 0; s <= triangleAmount;s++) {
                glVertex2f(
                        x + (radius * cos(s *  twicePi / triangleAmount)),
                    y + (radius * sin(s * twicePi / triangleAmount))
                );
            }
        glEnd();
    glPopMatrix();

    //road4
    road4();
}

void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
glutDisplayFunc(display);

break;
case GLUT_KEY_DOWN:
glutDisplayFunc(display2);
break;
}
speed=.01;
glutPostRedisplay();}

int main(int argc,char ** argv){
     glutInit(&argc,argv);
     glutCreateWindow("City Scape");
     glutInitWindowSize(450,450);
     glutDisplayFunc(display);
     glutTimerFunc(100, update, 0);
     glutTimerFunc(100, update1, 0);
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
     glutTimerFunc(100, update13, 0);
     glutTimerFunc(100, update14, 0);
     glutTimerFunc(100, update15, 0);
     glutSpecialFunc(SpecialInput);

     glutMainLoop();
     return 0;
 }
