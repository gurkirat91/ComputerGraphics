//
//  road.hpp
//  random
//
//  Created by Gurkirat Singh on 25/04/23.
//

#ifndef road_hpp
#define road_hpp

#include <stdio.h>
void road1(){
        glBegin(GL_QUADS);
         glColor3ub(115, 115, 115);
         glVertex2f(1.0,-0.6);
         glVertex2f(1.0,-0.53);
         glVertex2f(-1.0,-0.53);
         glVertex2f(-1.0,-0.6);
         glEnd();

        glBegin(GL_QUADS);//road line
         glColor3ub(230, 255, 255);
         glVertex2f(1.0,-0.54);
         glVertex2f(1.0,-0.5390);
         glVertex2f(-1.0,-0.5390);
         glVertex2f(-1.0,-0.54);
         glEnd();


         glBegin(GL_QUADS);
         glColor3ub(255, 255, 255 );
         glVertex2f(-0.50,-0.565);
         glVertex2f(-0.50,-0.557);
         glVertex2f(-1.0,-0.557);
         glVertex2f(-1.0,-0.565);
         glEnd();

        glBegin(GL_QUADS);
         glColor3ub(255, 255, 255);
         glVertex2f(0.20,-0.565);
         glVertex2f(0.20,-0.557);
         glVertex2f(-0.30,-0.557);
         glVertex2f(-0.30,-0.565);
         glEnd();
          glBegin(GL_QUADS);
         glColor3ub(255, 255, 255);
         glVertex2f(0.40,-0.565);
         glVertex2f(0.40,-0.557);
         glVertex2f(0.90,-0.557);
         glVertex2f(0.90,-0.565);
         glEnd();
}
void road2(){
//    grass
    glBegin(GL_QUADS);
         glColor3ub(102, 153, 0);
         glVertex2f(1.0,-0.61);
         glVertex2f(1.0,-0.6);
         glVertex2f(-1.0,-0.6);
         glVertex2f(-1.0,-0.61);
         glEnd();
//    road
    glBegin(GL_QUADS);
         glColor3ub(115, 115, 115);
         glVertex2f(1.0,-0.7);
         glVertex2f(1.0,-0.6195);
         glVertex2f(-1.0,-0.6195);
         glVertex2f(-1.0,-0.7);
         glEnd();

    glBegin(GL_QUADS);
          glColor3ub(230, 255, 255);
         glVertex2f(1.0,-0.6295);
         glVertex2f(1.0,-0.625);
         glVertex2f(-1.0,-0.625);
         glVertex2f(-1.0,-0.6295);
         glEnd();

    glBegin(GL_QUADS);
          glColor3ub(230, 255, 255);
         glVertex2f(1.0,-0.695);
         glVertex2f(1.0,-0.69);
         glVertex2f(-1.0,-0.69);
         glVertex2f(-1.0,-0.695);
         glEnd();


    glBegin(GL_QUADS);
          glColor3ub(255, 255, 255);
         glVertex2f(-.5,-0.66);
         glVertex2f(-.50,-0.67);
         glVertex2f(-1.0,-0.67);
         glVertex2f(-1.0,-0.66);
         glEnd();


    glBegin(GL_QUADS);
          glColor3ub(255, 255, 255);
         glVertex2f(.2,-0.66);
         glVertex2f(.20,-0.67);
         glVertex2f(-.30,-0.67);
         glVertex2f(-.30,-0.66);
         glEnd();
    glBegin(GL_QUADS);
          glColor3ub(255, 255, 255);
         glVertex2f(.4,-0.66);
         glVertex2f(.40,-0.67);
         glVertex2f(.90,-0.67);
         glVertex2f(.90,-0.66);
         glEnd();
}
void road3(){
    //grass 3

    glBegin(GL_QUADS);
         glColor3ub(102, 153, 0);
         glVertex2f(1.0,-0.71);
         glVertex2f(1.0,-0.7);
         glVertex2f(-1.0,-0.7);
         glVertex2f(-1.0,-0.71);
         glEnd();
    //road 3
    glBegin(GL_QUADS);
         glColor3ub(115, 115, 115);
         glVertex2f(1.0,-0.8);
         glVertex2f(1.0,-0.7195);
         glVertex2f(-1.0,-0.7195);
         glVertex2f(-1.0,-0.8);
         glEnd();


         glBegin(GL_QUADS);
          glColor3ub(230, 255, 255);
         glVertex2f(1.0,-0.7295);
         glVertex2f(1.0,-0.725);
         glVertex2f(-1.0,-0.725);
         glVertex2f(-1.0,-0.7295);
         glEnd();


    glBegin(GL_QUADS);
          glColor3ub(230, 255, 255);
         glVertex2f(1.0,-0.795);
         glVertex2f(1.0,-0.79);
         glVertex2f(-1.0,-0.79);
         glVertex2f(-1.0,-0.795);
         glEnd();


    glBegin(GL_QUADS);
          glColor3ub(255, 255, 255);
         glVertex2f(-.5,-0.76);
         glVertex2f(-.50,-0.77);
         glVertex2f(-1.0,-0.77);
         glVertex2f(-1.0,-0.76);
         glEnd();

         glBegin(GL_QUADS);
          glColor3ub(255, 255, 255);
         glVertex2f(.2,-0.76);
         glVertex2f(.20,-0.77);
         glVertex2f(-.30,-0.77);
         glVertex2f(-.30,-0.76);
         glEnd();


         glBegin(GL_QUADS);
          glColor3ub(255, 255, 255);
         glVertex2f(.4,-0.76);
         glVertex2f(.40,-0.77);
         glVertex2f(.90,-0.77);
         glVertex2f(.90,-0.76);
         glEnd();
}
void road4(){
    
    //GRASS 4
    glBegin(GL_QUADS);
    glColor3ub(102, 153, 0);
         glVertex2f(1.0,-0.85);
         glVertex2f(1.0,-0.8);
         glVertex2f(-1.0,-0.8);
         glVertex2f(-1.0,-0.85);
         glEnd();
    //road4
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
         glVertex2f(1.0,-0.86);
         glVertex2f(1.0,-0.97);
         glVertex2f(-1.0,-0.97);
         glVertex2f(-1.0,-0.86);
         glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
         glVertex2f(1.0,-0.87);
         glVertex2f(1.0,-0.875);
         glVertex2f(-1.0,-0.875);
         glVertex2f(-1.0,-0.87);
         glEnd();

         glBegin(GL_QUADS);
          glColor3ub(255, 255, 255);
         glVertex2f(-.5,-0.91);
         glVertex2f(-.50,-0.92);
         glVertex2f(-1.0,-0.92);
         glVertex2f(-1.0,-0.91);
         glEnd();

         glBegin(GL_QUADS);
          glColor3ub(255, 255, 255);
         glVertex2f(.2,-0.91);
         glVertex2f(.20,-0.92);
         glVertex2f(-.30,-0.92);
         glVertex2f(-.30,-0.91);
         glEnd();


         glBegin(GL_QUADS);
          glColor3ub(255, 255, 255);
         glVertex2f(.4,-0.91);
         glVertex2f(.40,-0.92);
         glVertex2f(.90,-0.92);
         glVertex2f(.90,-0.91);
         glEnd();



    //grass4
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
         glVertex2f(1.0,-0.965);
         glVertex2f(1.0,-0.96);
         glVertex2f(-1.0,-0.96);
         glVertex2f(-1.0,-0.965);
         glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 153, 0);
         glVertex2f(1.0,-0.97);
         glVertex2f(1.0,-1.0);
         glVertex2f(-1.0,-1.0);
         glVertex2f(-1.0,-0.97);
         glEnd();
         glFlush();
}
void red_pillar(){
    //lal thomba
     glBegin(GL_QUADS);
   glColor3ub(255, 0, 0);
        glVertex2f(.43,-0.8);
        glVertex2f(.43,-0.7);
        glVertex2f(.42,-0.7);
        glVertex2f(.42,-0.8);
        glEnd();
    glBegin(GL_QUADS);
   glColor3ub(255, 255, 255);
        glVertex2f(.43,-0.7);
        glVertex2f(.43,-0.6);
        glVertex2f(.42,-0.6);
        glVertex2f(.42,-0.7);
        glEnd();
   glBegin(GL_QUADS);
   glColor3ub(255, 0, 0);
        glVertex2f(.43,-0.6);
        glVertex2f(.43,-0.5);
        glVertex2f(.42,-0.5);
        glVertex2f(.42,-0.6);
        glEnd();
   glBegin(GL_QUADS);
   glColor3ub(255, 255, 255);
        glVertex2f(.43,-0.5);
        glVertex2f(.43,-0.45);
        glVertex2f(.42,-0.45);
        glVertex2f(.42,-0.5);
        glEnd();
   glBegin(GL_QUADS);
   glColor3ub(0, 0, 0);
        glVertex2f(.43,-0.45);
        glVertex2f(.43,-0.4);
        glVertex2f(.42,-0.4);
        glVertex2f(.42,-0.45);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(255, 0, 0);
        glVertex2f(.44,-0.43);
        glVertex2f(.435,-0.45);
        glVertex2f(.405,-0.45);
        glVertex2f(.41,-0.43);
        glEnd();
}
#endif /* road_hpp */
