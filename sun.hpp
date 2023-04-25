//
//  sun.hpp
//  random
//
//  Created by Gurkirat Singh on 25/04/23.
//

#ifndef sun_hpp
#define sun_hpp
#define GL_SILENCE_DEPRECATION
#include<GLUT/glut.h>
#include<OpenGL/glu.h>
#include<OpenGL/gl.h>
#include<iostream>
#include<math.h>
# define PI           3.14159265358979323846
#include<cstdio>
#include <stdio.h>

GLfloat x=.8f; GLfloat y=.8f;GLfloat radius =.1f;
int triangleAmount = 20; //# of triangles used to draw circle
GLfloat twicePi = 2.0f * PI;
void sun(){
    glColor3ub(242, 255, 0);

      int k;
      GLfloat x=.8f; GLfloat y=.8f;GLfloat radius =.1f;
       int triangleAmount = 20; //# of triangles used to draw circle

      //GLfloat radius = 0.8f; //radius
      GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(k = 0; k <= triangleAmount;k++) {
                glVertex2f(
                        x + (radius * cos(k *  twicePi / triangleAmount)),
                    y + (radius * sin(k * twicePi / triangleAmount))
                );
            }
        glEnd();
}
void sky(){
    //SKY
         glBegin(GL_QUADS);
         glColor3ub(128, 223, 255);  //bright sky color
         glVertex2f(1.0,-0.4);
         glVertex2f(1.0,1.0);
         glVertex2f(-1.0,1.0);
         glVertex2f(-1.0,-0.4);
         glEnd();
}
void evening(){
    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);  //bright sky color
    glVertex2f(1.0,-0.4);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glVertex2f(-1.0,-0.4);
    glEnd();
}
void eveningSun(){
    glColor3ub(242, 255, 0);

       int k;
       GLfloat x=.8f; GLfloat y=.06f;GLfloat radius =.1f;
        int triangleAmount = 20; //# of triangles used to draw circle

       //GLfloat radius = 0.8f; //radius
       GLfloat twicePi = 2.0f * PI;

       glBegin(GL_TRIANGLE_FAN);
           glVertex2f(x, y); // center of circle
           for(k = 0; k <= triangleAmount;k++) {
               glVertex2f(
                       x + (radius * cos(k *  twicePi / triangleAmount)),
                   y + (radius * sin(k * twicePi / triangleAmount))
               );
           }
       glEnd();
}
#endif /* sun_hpp */
