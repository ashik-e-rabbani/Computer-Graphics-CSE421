/*	Ashik-E-Rabbani
 *	Daffodil International University
 */

#include<windows.h>
#include <GL/glut.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>

void display(void)
{
/*	clear all pixels  */
	glClear(GL_COLOR_BUFFER_BIT);

/*	draw white polygon (rectangle) with corners at
 *	(0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
 */
 float theta;

// background
glColor4f (0.105, 0.45, 0.61,0.2);
	glBegin(GL_POLYGON);


         glVertex3f (-9,9, 0.0);
         glVertex3f (9,9, 0.0);
         glVertex3f (9, -9, 0.0);
         glVertex3f (-9,-9, 0.0);
glEnd();

/*
 glColor3f (1.0, 0.65, 0.0);
 	glBegin(GL_LINE_LOOP);

// for loop shade

 	for(int i=0;i<360;i++)
    {
        theta = i*3.142/180;
        glVertex2f(5+1.05*cosf(theta),7+1.05*sinf(theta));
    }
    glEnd();

 glColor3f (1.0, 0.65, 0.0);
 	glBegin(GL_LINE_LOOP);
    for(int i=0;i<360;i++)
    {
        theta = i*3.142/180;
        glVertex2f(5+1.1*cosf(theta),7+1.1*sinf(theta));
    }
    glEnd();



 glColor3f (1.0, 0.65, 0.0);
 	glBegin(GL_LINE_LOOP);
    for(int i=0;i<360;i++)
    {
        theta = i*3.142/180;
        glVertex2f(5+1.15*cosf(theta),7+1.15*sinf(theta));
    }
    glEnd();

*/

//moon brush


 	glColor4f (1.0, 1.0, 0.9,1.0);
 	glBegin(GL_POLYGON);

 	for(int i=0;i<360;i++)
    {
        theta = i*3.142/180;

         glVertex2f(5+1*cosf(theta),7+1*sinf(theta));
    }
    glEnd(); // end of moon




 // end of left roof
	glColor4f (0.81, 0.16, 0.26,1.0);

	glBegin(GL_POLYGON);
        glVertex3f (-2.5, 6, 0.0);
        glVertex3f (3.8, 6, 0.0);
        glVertex3f (1.5,3.4, 0.0);
        glVertex3f (-4, 3.5, 0.0);


	glEnd();

//right traingle
		glColor3f (0.92, 0.83, 0.14);

	glBegin(GL_POLYGON);
       glVertex3f (3.8, 6, 0.0);
       glVertex3f (5, 3.4, 0.0);
       glVertex3f (1.5,3.4, 0.0);

	glEnd();

	 // polygon under tringle
				glColor3f (0.92, 0.83, 0.14);

	glBegin(GL_POLYGON);
        glVertex3f (1.5,3.4, 0.0);
        glVertex3f (5, 3.4, 0.0);
        glVertex3f (5, 1.1, 0.0);
        glVertex3f (1.5,0.7, 0.0);

	glEnd();

	// shades of chal
	glColor3f (0.25, 0.03, 0.14);

	glBegin(GL_POLYGON);

       glVertex3f (3.5, 5.7, 0.0);
       glVertex3f (3.8, 6, 0.0);
       glVertex3f (5,3.4, 0.0);
       glVertex3f (4.95, 3.4, 0.0);


	glEnd();

	// under roof
			glColor4f (0.74, 0.35, 0.05,1.5);
		glBegin(GL_POLYGON);
            glVertex3f (-3.5,3.5, 0.0);
            glVertex3f (1.5, 3.4, 0.0);
            glVertex3f (1.5,0.7, 0.0);
            glVertex3f (-3.5, 0.9, 0.0);

	glEnd();

	 // under right window
			glColor3f (0.81, 0.16, 0.26);
		glBegin(GL_POLYGON);
            glVertex3f (2.5,3.5, 0.0);
            glVertex3f (4.1, 3.6, 0.0);
            glVertex3f (4.1,1.8, 0.0);
            glVertex3f (2.5, 1.6, 0.0);

	glEnd();


	// door background
			glColor4f (0.0, 0.0, 0.0,0.9);
		glBegin(GL_POLYGON);
            glVertex3f (-1.7,3.0, 0.0);
            glVertex3f (-0.2, 3.0, 0.0);
            glVertex3f (-0.2,0.75, 0.0);
            glVertex3f (-1.7, 0.8, 0.0);

        glEnd();

	// door
			glColor4f (0.07, 0.7, 0.6,0.9);
		glBegin(GL_POLYGON);
            glVertex3f (-1.7,3.0, 0.0);
            glVertex3f (-0.9, 2.75, 0.0);
            glVertex3f (-0.9,1.1, 0.0);
            glVertex3f (-1.7, 0.8, 0.0);

        glEnd();





				glColor3f (0.0, 0.0, 0.0);
		glBegin(GL_LINES);
            glVertex3f (-0.8,3.0, 0.0);
            glVertex3f (-0.8, 0.8, 0.0);


	glEnd(); // door lines

// window bg
			glColor3f (0.0, 0.0, 0.0);
		glBegin(GL_POLYGON);
            glVertex3f (-3.0,3.0, 0.0);
            glVertex3f (-2.0, 3.0, 0.0);

            glVertex3f (-2.0, 2.0, 0.0);
            glVertex3f (-3.0,2.0, 0.0);

        glEnd();

			glColor4f (0.0, 0.8, 0.0,0.95);
		glBegin(GL_POLYGON);
            glVertex3f (-3.0,3.0, 0.0);
            glVertex3f (-2.5, 2.9, 0.0);

            glVertex3f (-2.5, 2.1, 0.0);
            glVertex3f (-3.0,2.0, 0.0);

	glEnd();


			glColor4f (0.0, 0.8, 0.0,0.95);
		glBegin(GL_POLYGON);
            glVertex3f (-2.45, 2.9, 0.0);
            glVertex3f (-2.0, 3.0, 0.0);

            glVertex3f (-2.0, 2.0, 0.0);
            glVertex3f (-2.45, 2.1, 0.0);

	glEnd();


	// right window lines --- Global
        //vertical lines
	glColor3f (0.0, 0.0, 0.0);
		glBegin(GL_LINES);
            glVertex3f (2.5,2.48, 0.0);
            glVertex3f (4.1, 2.58, 0.0);


	glEnd();

	glColor3f (0.0, 0.0, 0.0);
		glBegin(GL_LINES);
            glVertex3f (2.5,2.5, 0.0);
            glVertex3f (4.1, 2.6, 0.0);


	glEnd();

	//horizontal lines
	glColor3f (0.0, 0.0, 0.0);
		glBegin(GL_LINES);
            glVertex3f (3.3,1.7, 0.0);
            glVertex3f (3.3, 3.5, 0.0);


	glEnd();
		glColor3f (0.0, 0.0, 0.0);
		glBegin(GL_LINES);
            glVertex3f (3.32,1.7, 0.0);
            glVertex3f (3.32, 3.5, 0.0);


	glEnd();




	// full home ground border

			glColor3f (0.15, 0.111, 0.019);
	glBegin(GL_POLYGON);

         glVertex3f (-3.5, 0.9, 0.0);
         glVertex3f (1.5,0.7, 0.0);
         glVertex3f (1.5,0.4, 0.0);
         glVertex3f (-3.5, 0.6, 0.0);
glEnd();

glColor3f (0.15, 0.111, 0.019);
	glBegin(GL_POLYGON);


         glVertex3f (1.5,0.7, 0.0);
         glVertex3f (5,1.2, 0.0);
         glVertex3f (5, 0.9, 0.0);
         glVertex3f (1.5,0.4, 0.0);
glEnd();



glColor3f (0.0, 1.0, 0.0);
	glBegin(GL_POINTS);
// stars

         glVertex3f (-4,6, 0.0);
         glVertex3f (-5.5,6.2, 0.0);
         glVertex3f (-4.5,7.3, 0.0);
         glVertex3f (-4.8,8, 0.0);
         glVertex3f (-6.6,6.9, 0.0);
         glVertex3f (-5,6, 0.0);
         glVertex3f (-1,6.5, 0.0);
         glVertex3f (-0.5,6.3, 0.0);
         glVertex3f (0.5,8, 0.0);
         glVertex3f (1,6.6, 0.0);
         glVertex3f (.5,6.7, 0.0);
         glVertex3f (0.5,8.2, 0.0);
         glVertex3f (1.3,7.4, 0.0);
         glVertex3f (-3,7.5, 0.0);
         glVertex3f (-0.8,8.5, 0.0);

         glVertex3f (-4.1,8.2, 0.0);

         glVertex3f (-3.8,4.1, 0.0);
         glVertex3f (-6.2,4.2, 0.0);
         glVertex3f (-0.8,8.5, 0.0);
         glVertex3f (-5.35,4.6, 0.0);

         glVertex3f (-1.2,6.5, 0.0);
         glVertex3f (-0.9,6.3, 0.0);
         glVertex3f (-4.3,8, 0.0);
         glVertex3f (-4.2,7.6, 0.0);
         glVertex3f (2.5,6.7, 0.0);
         glVertex3f (1.5,8.2, 0.0);
         glVertex3f (-1.3,7.4, 0.0);
         glVertex3f (1,8.5, 0.0);
         glVertex3f (-0.8,8.5, 0.0);



glEnd();








   glFlush();
}

void init (void)
{
/* select clearing color 	*/
   glClearColor (0.0, 0.0, 0.0, 0.0);

/* initialize viewing values  */
   //glLoadIdentity();
   glOrtho(-9, 9, -9, 9, -9, 9);
}

/*
 * Declare initial window size, position, and display mode
 * (single buffer and RGBA).  Open window with "hello"
 * in its title bar.  Call initialization routines.
 * Register callback function to display graphics.
 * Enter main loop and process events.
 */

int main()
{
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);  //Mode for later glutCreateWindow() call
   glutInitWindowSize (700, 700);
   glutInitWindowPosition (0, 0);
   glutCreateWindow("Home");
   //for transparet bg
   glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); glEnable( GL_BLEND ); glClearColor(0.0,0.0,0.0,0.0);
   // end bg
   init();

   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}
