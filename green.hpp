//
//  green.hpp
//  random
//
//  Created by Gurkirat Singh on 25/04/23.
//

#ifndef green_hpp
#define green_hpp

#include <stdio.h>
void tree(){
    glColor3ub(51, 102, 0);
        int r;

         x=0.22f;  y=-.48f;  radius =.03f;
         triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(r = 0; r <= triangleAmount;r++) {
                glVertex2f(
                        x + (radius * cos(r *  twicePi / triangleAmount)),
                    y + (radius * sin(r * twicePi / triangleAmount))
                );
            }
        glEnd();

    glColor3ub(51, 102, 0);
        int t;

         x=0.25f;  y=-.5f;  radius =.03f;
         triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(t = 0; t <= triangleAmount;t++) {
                glVertex2f(
                        x + (radius * cos(t *  twicePi / triangleAmount)),
                    y + (radius * sin(t * twicePi / triangleAmount))
                );
            }
        glEnd();

    glColor3ub(77, 153, 0);
        int u;

         x=0.28f;  y=-.49f;  radius =.02f;
         triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(u = 0; u <= triangleAmount;u++) {
                glVertex2f(
                        x + (radius * cos(u *  twicePi / triangleAmount)),
                    y + (radius * sin(u * twicePi / triangleAmount))
                );
            }
        glEnd();


    glColor3ub(77, 153, 0);
        int o;

         x=0.31f;  y=-.48f;  radius =.02f;
         triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(o = 0; o <= triangleAmount;o++) {
                glVertex2f(
                        x + (radius * cos(o *  twicePi / triangleAmount)),
                    y + (radius * sin(o * twicePi / triangleAmount))
                );
            }
        glEnd();

    glColor3ub(77, 153, 0);
        int p;

         x=0.34f;  y=-.49f;  radius =.02f;
         triangleAmount = 20; //# of triangles used to draw circle

        //GLfloat radius = 0.8f; //radius
         twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x, y); // center of circle
            for(p = 0; p <= triangleAmount;p++) {
                glVertex2f(
                        x + (radius * cos(p *  twicePi / triangleAmount)),
                    y + (radius * sin(p * twicePi / triangleAmount))
                );
            }
        glEnd();
}

void grass(){
    glBegin(GL_QUADS);
         glColor3ub(102, 153, 0);
         glVertex2f(1.0,-0.53);
         glVertex2f(1.0,-0.50);
         glVertex2f(-1.0,-0.50);
         glVertex2f(-1.0,-0.53);
         glEnd();
}
#endif /* green_hpp */
