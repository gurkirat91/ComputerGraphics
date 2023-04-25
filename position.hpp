//
//  position.hpp
//  random
//
//  Created by Gurkirat Singh on 25/04/23.
//

#ifndef position_hpp
#define position_hpp
#define GL_SILENCE_DEPRECATION
#include<GLUT/glut.h>
#include<OpenGL/glu.h>
#include<OpenGL/gl.h>
#include<iostream>
#include<math.h>
# define PI           3.14159265358979323846
#include<cstdio>
#include <stdio.h>
GLfloat position = 0.0f;
GLfloat speed = 0.01f;
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.011f;//c4
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.018f;//car
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.015f;//car2
GLfloat position4 = 0.0f;
GLfloat speed4 = 0.07f;//bcarl
GLfloat position5 = 0.0f;
GLfloat speed5 = 0.08f;
GLfloat position6 = 0.0f;
GLfloat speed6 = 0.01f;
GLfloat position7 = 0.0f;
GLfloat speed7 = 0.015f;
GLfloat position8 = 0.0f;
GLfloat speed8 = 0.017f;
GLfloat position9 = 0.0f;
GLfloat speed9 = 0.016f;
GLfloat position10 = 0.0f;
GLfloat speed10 = 0.07f;
GLfloat position11 = 0.0f;
GLfloat speed11 = 0.04f;
GLfloat position12 = 0.0f;
GLfloat speed12 = 0.09f;

GLfloat position13 = 0.0f;//car3-4
GLfloat speed13 = 0.03f;

GLfloat position14 = 0.0f;//car3-4
GLfloat speed14 = 0.04f;

GLfloat position15 = 0.0f;//car3-4
GLfloat speed15 = 0.03f;
void update(int value) {

    if(position > 1.0)
        position = -1.0f;

    position += speed;

    glutPostRedisplay();


    glutTimerFunc(100, update, 0);
}


void update1(int value) {

    if(position1 > 1.50)
        position1 = -1.0f;

    position1 += speed1;

    glutPostRedisplay();


    glutTimerFunc(100, update1, 0);
}

void update2(int value) {

    if(position2 < -1.20)
        position2 = .99f;

    position2 -= speed2;

    glutPostRedisplay();


    glutTimerFunc(100, update2, 0);
}

void update3(int value) {

    if(position3 < -1.50)
        position3 = 1.0f;

    position3 -= speed3;

    glutPostRedisplay();


    glutTimerFunc(100, update3, 0);
}

void update4(int value) {

    if(position4 > 1.0)
        position4 = -1.0f;

    position4 += speed4;

    glutPostRedisplay();


    glutTimerFunc(100, update4, 0);
}

void update5(int value) {

    if(position5 < -1.20)
        position5 = .99f;

    position5 -= speed5;

    glutPostRedisplay();


    glutTimerFunc(100, update5, 0);
}

void update6(int value) {

    if(position6 > 1.0)
        position6 = -1.0f;

    position6 += speed6;

    glutPostRedisplay();


    glutTimerFunc(100, update6, 0);
}
void update7(int value) {

    if(position7 < -1.20)
        position7 = .99f;

    position7 -= speed7;

    glutPostRedisplay();


    glutTimerFunc(100, update7, 0);
}
void update8(int value) {

    if(position8 > 1.0)
        position8 = -1.0f;

    position8 += speed8;

    glutPostRedisplay();


    glutTimerFunc(100, update8, 0);
}
void update9(int value) {

    if(position9 < -1.20)
        position9 = .99f;

    position9 -= speed9;

    glutPostRedisplay();


    glutTimerFunc(100, update9, 0);
}
void update10(int value) {

    if(position10 < -1.20)
        position10 = .99f;

    position10 -= speed10;

    glutPostRedisplay();


    glutTimerFunc(100, update10, 0);
}
void update11(int value) {

    if(position11 > 1.0)
        position11 = -1.0f;

    position11 += speed11;

    glutPostRedisplay();


    glutTimerFunc(100, update11, 0);
}

void update12(int value) {

    if(position12 > 1.0)
        position12 = -1.0f;

    position12 += speed12;

    glutPostRedisplay();


    glutTimerFunc(100, update12, 0);
}

void update13(int value) //car3-4
{

    if(position13 > 1.50)
        position13 = -1.50f;

    position13 += speed13;

    glutPostRedisplay();


    glutTimerFunc(100, update13, 0);
}

void update14(int value) //car3-4
{

    if(position14 > 1.50)
        position14 = -1.50f;

    position14 += speed14;

    glutPostRedisplay();


    glutTimerFunc(100, update14, 0);
}

void update15(int value) {

    if(position15 <-1.5)
        position15 = 2.0f;

    position15 -= speed15;

    glutPostRedisplay();


    glutTimerFunc(100, update15, 0);
}
#endif /* position_hpp */
