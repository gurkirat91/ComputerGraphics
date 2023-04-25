//
//  clouds.hpp
//  random
//
//  Created by Gurkirat Singh on 25/04/23.
//

#ifndef clouds_hpp
#define clouds_hpp
#define GL_SILENCE_DEPRECATION
#include<GLUT/glut.h>
#include<OpenGL/glu.h>
#include<OpenGL/gl.h>
#include<iostream>
#include<math.h>
# define PI           3.14159265358979323846
#include<cstdio>
#include <stdio.h>
//GLfloat x=.8f; GLfloat y=.8f;GLfloat radius =.1f;
//int triangleAmount = 20; //# of triangles used to draw circle
//GLfloat twicePi = 2.0f * PI;
void clouds(){
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

     glColor3ub(255, 255, 255);

        int f;
         x=.6f; y=.7f;radius =.03f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(f = 0; f <= triangleAmount;f++) {
                glVertex2f(
                        x + (radius * cos(f *  twicePi / triangleAmount)),
                    y + (radius * sin(f * twicePi / triangleAmount))
                );
            }
        glEnd();

    glColor3ub(255, 255, 255);

        int g;
         x=.64f; y=.7f;radius =.04f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(g = 0; g <= triangleAmount;g++) {
                glVertex2f(
                        x + (radius * cos(g *  twicePi / triangleAmount)),
                    y + (radius * sin(g * twicePi / triangleAmount))
                );
            }
        glEnd();

    glColor3ub(255, 255, 255);

        int h;
         x=.67f; y=.675f;radius =.032f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(h = 0; h <= triangleAmount;h++) {
                glVertex2f(
                        x + (radius * cos(h *  twicePi / triangleAmount)),
                    y + (radius * sin(h * twicePi / triangleAmount))
                );
            }
        glEnd();

    glColor3ub(255, 255, 255);

        int l;
         x=.625f; y=.665f;radius =.03f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(l = 0; l <= triangleAmount;l++) {
                glVertex2f(
                        x + (radius * cos(l *  twicePi / triangleAmount)),
                    y + (radius * sin(l * twicePi / triangleAmount))
                );
            }
        glEnd();

    //c2

    glColor3ub(255, 255, 255);

        int F;
         x=.06f; y=.55f;radius =.03f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(F = 0; F <= triangleAmount;F++) {
                glVertex2f(
                        x + (radius * cos(F *  twicePi / triangleAmount)),
                    y + (radius * sin(F * twicePi / triangleAmount))
                );
            }
        glEnd();

    glColor3ub(255, 255, 255);


        int G;
         x=.1f; y=.55f;radius =.04f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(G = 0; G <= triangleAmount;G++) {
                glVertex2f(
                        x + (radius * cos(G *  twicePi / triangleAmount)),
                    y + (radius * sin(G * twicePi / triangleAmount))
                );
            }
        glEnd();

    int H;
         x=.13f; y=.525f;radius =.032f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(H = 0; H <= triangleAmount;H++) {
                glVertex2f(
                        x + (radius * cos(H *  twicePi / triangleAmount)),
                    y + (radius * sin(H * twicePi / triangleAmount))
                );
            }
        glEnd();

    glColor3ub(255, 255, 255);

        int L;
         x=.08f; y=.515f;radius =.03f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(L = 0; L <= triangleAmount;L++) {
                glVertex2f(
                        x + (radius * cos(L *  twicePi / triangleAmount)),
                    y + (radius * sin(L * twicePi / triangleAmount))
                );
            }
        glEnd();

    //c3
    glColor3ub(255, 255, 255);

        int Q;
         x=-.2f; y=.8f;radius =.03f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(Q = 0; Q <= triangleAmount;Q++) {
                glVertex2f(
                        x + (radius * cos(Q *  twicePi / triangleAmount)),
                    y + (radius * sin(Q * twicePi / triangleAmount))
                );
            }
        glEnd();

    glColor3ub(255, 255, 255);

        int W;
         x=-.16f; y=.8f;radius =.04f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(W = 0; W <= triangleAmount;W++) {
                glVertex2f(
                        x + (radius * cos(W *  twicePi / triangleAmount)),
                    y + (radius * sin(W * twicePi / triangleAmount))
                );
            }
        glEnd();

    glColor3ub(255, 255, 255);

        int E;
         x=-.13f; y=.775f;radius =.032f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(E = 0; E <= triangleAmount;E++) {
                glVertex2f(
                        x + (radius * cos(E *  twicePi / triangleAmount)),
                    y + (radius * sin(E * twicePi / triangleAmount))
                );
            }
        glEnd();

    glColor3ub(255, 255, 255);

        int R;
         x=-.175f; y=.765f;radius =.032f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(R = 0; R <= triangleAmount;R++) {
                glVertex2f(
                        x + (radius * cos(R *  twicePi / triangleAmount)),
                    y + (radius * sin(R * twicePi / triangleAmount))
                );
            }
        glEnd();
    glPopMatrix();
    //c4
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glColor3ub(255, 255, 255);

        int T;
         x=-.7f; y=.7f;radius =.03f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(T = 0; T <= triangleAmount;T++) {
                glVertex2f(
                        x + (radius * cos(T *  twicePi / triangleAmount)),
                    y + (radius * sin(T * twicePi / triangleAmount))
                );
            }
        glEnd();

    glColor3ub(255, 255, 255);

        int U;
         x=-.66f; y=.7f;radius =.04f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(U = 0; U <= triangleAmount;U++) {
                glVertex2f(
                        x + (radius * cos(U *  twicePi / triangleAmount)),
                    y + (radius * sin(U * twicePi / triangleAmount))
                );
            }
        glEnd();

        int I;
         x=-.63f; y=.675f;radius =.032f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(I = 0; I <= triangleAmount;I++) {
                glVertex2f(
                        x + (radius * cos(I *  twicePi / triangleAmount)),
                    y + (radius * sin(I * twicePi / triangleAmount))
                );
            }
        glEnd();

    int O;
         x=-.675f; y=.665f;radius =.032f;
          triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(O = 0; O <= triangleAmount;O++) {
                glVertex2f(
                        x + (radius * cos(O *  twicePi / triangleAmount)),
                    y + (radius * sin(O * twicePi / triangleAmount))
                );
            }
        glEnd();
    glPopMatrix();
}
#endif /* clouds_hpp */
