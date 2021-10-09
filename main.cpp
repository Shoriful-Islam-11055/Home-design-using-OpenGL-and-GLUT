#include<Windows.h>       // for MS Windows
#include<GL\glut.h>       // GLUT, include glu.h and gl.h
#include<stdio.h>
#include<math.h>
//Note: GLglut.h path depending on the system in use
void init()
{
    // Set display window color to as glClearColor(R,G,B,Alpha)
    glClearColor(0.5, 0.9, 0.4, 0.0);
    // Set projection parameters.
    glMatrixMode(GL_PROJECTION);
    // Set 2D Transformation as gluOrtho2D(Min Width, Max Width, Min Height, Max Height)
    gluOrtho2D(0.0, 900, 0.0, 700);
}
void home()
{
    //Top background
    glClear(GL_COLOR_BUFFER_BIT);     // Clear display window
    // Set line segment color as glColor3f(R,G,B)
    //glColor3f(.28, 0.78, 0.69);
    //glColor3f(0.20, 0.59, 0.85);
    glColor3f(0.5, 0.9, 0.4);
    glBegin(GL_POLYGON);
    glVertex2i(0, 700);
    glVertex2i(900, 700);
    glVertex2i(900, 200);
    glVertex2i(0, 200);
    glEnd();

    //down background
    glColor3f(0.09, 0.43, 0.23);
    glBegin(GL_POLYGON);
    glVertex2i(0, 200);
    glVertex2i(900, 200);
    glVertex2i(900, 0);
    glVertex2i(0, 0);
    glEnd();

    //middle roof
    //glColor3f(0.20, 0.59, 0.85);
    glColor3f(0.92, 0.43, 0.38);
    //glColor3f(0.91, 0.58, 0.47);
    glBegin(GL_POLYGON);
    glVertex2i(200, 650);
    glVertex2i(700, 650);
    glVertex2i(580, 480);
    glVertex2i(330, 480);
    glEnd();

    //middle arc design
    glColor3f(0.20, 0.59, 0.85);
    //glColor3f(0.92, 0.43, 0.38);
    //glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);

    for(int i = 0; i<=180; i++)
    {
        float angle = i*3.1416/180;
        glVertex2f(453+cos(angle)*130, 520+sin(angle)*115);
    }
    glEnd();

    //middle arc Line design
    //glColor3f(0.20, 0.59, 0.85);
    //glColor3f(0.92, 0.43, 0.38);
    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINES);

    for(int i = 0; i<=180; i++)
    {
        float angle = i*3.1416/180;
        glVertex2f(453+cos(angle)*130, 520+sin(angle)*115);
    }
    glEnd();



    //left roof
    glColor3f(0.92, 0.43, 0.38);
    glBegin(GL_TRIANGLES);
    glVertex2i(195, 660);
    glVertex2i(330, 480);
    glVertex2i(80, 480);
    glEnd();

    //left roof border line
    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    glVertex2i(195, 660);
    glVertex2i(330, 480);
    glVertex2i(195, 660);
    glVertex2i(80, 480);
    glEnd();

    //Right roof
    glColor3f(0.92, 0.43, 0.38);
    glBegin(GL_TRIANGLES);
    glVertex2i(705, 660);
    glVertex2i(830, 480);
    glVertex2i(580, 480);
    glEnd();

    //Right roof border line
    glColor3f(0, 0, 0);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    glVertex2i(705, 660);
    glVertex2i(830, 480);
    glVertex2i(705, 660);
    glVertex2i(580, 480);

    //middle roof border line
    glVertex2i(200, 650);
    glVertex2i(700, 650);
    glEnd();

    //left squre
    glColor3f(0.15, 0.70, 0.38);
    glBegin(GL_POLYGON);
    glVertex2i(95, 480);
    glVertex2i(320, 480);
    glVertex2i(320, 150);
    glVertex2i(95, 150);
    glEnd();

    //left squre window
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(140, 415);
    glVertex2i(265, 415);
    glVertex2i(265, 270);
    glVertex2i(140, 270);
    glEnd();

    //left squre window border(up, down)
    glColor3f(0, 0, 0);
    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2i(140, 415);
    glVertex2i(265, 415);
    glVertex2i(265, 270);
    glVertex2i(140, 270);
    glEnd();

     //left squre window border (left, right)
    glColor3f(0, 0, 0);
    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2i(140, 415);
    glVertex2i(140, 270);
    glVertex2i(265, 415);
    glVertex2i(265, 270);
    glEnd();

     //left squre window lines
    glColor3f(0, 0, 0);
    glLineWidth(3.0);
    glBegin(GL_LINES);
    glVertex2i(140, 300);
    glVertex2i(265, 300);
    glVertex2i(140, 342);
    glVertex2i(265, 342);
    glVertex2i(140, 386);
    glVertex2i(265, 386);
    //horizontal lines
    glVertex2i(180, 415);
    glVertex2i(180, 270);
    glVertex2i(223, 415);
    glVertex2i(223, 270);
    glEnd();


    //Right squre
    glColor3f(0.15, 0.70, 0.38);
    glBegin(GL_POLYGON);
    glVertex2i(595, 480);
    glVertex2i(810, 480);
    glVertex2i(810, 150);
    glVertex2i(595, 150);
    glEnd();

    //right squre window
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(645, 415);
    glVertex2i(770, 415);
    glVertex2i(770, 270);
    glVertex2i(645, 270);
    glEnd();

    //right squre window border (up, down)
    glColor3f(0, 0, 0);
    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2i(645, 415);
    glVertex2i(770, 415);
    glVertex2i(770, 270);
    glVertex2i(645, 270);
    glEnd();

    //right squre window border (left, right)
    glColor3f(0, 0, 0);
    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2i(645, 415);
    glVertex2i(645, 270);
    glVertex2i(770, 415);
    glVertex2i(770, 270);
    glEnd();

    //right squre window border Lines
    glColor3f(0, 0, 0);
    glLineWidth(3.0);
    glBegin(GL_LINES);
    glVertex2i(645, 300);
    glVertex2i(770, 300);
    glVertex2i(645, 342);
    glVertex2i(770, 342);
    glVertex2i(645, 386);
    glVertex2i(770, 386);

    glVertex2i(692, 415);
    glVertex2i(692, 270);
    glVertex2i(735, 415);
    glVertex2i(735, 270);
    glEnd();

    //main gate
    //glColor3f(0.91, 0.58, 0.47);
    glColor3f(0.20, 0.59, 0.85);
    glBegin(GL_POLYGON);
    glVertex2i(315, 480);
    glVertex2i(595, 480);
    glVertex2i(595, 150);
    glVertex2i(315, 150);
    glEnd();


    //main door
    //glColor3f(0.91, 0.58, 0.47);
    glColor3f(0.87, 0.72, 0.52);
    glBegin(GL_POLYGON);
    glVertex2i(390, 400);
    glVertex2i(530, 400);
    glVertex2i(530, 165);
    glVertex2i(390, 165);
    glEnd();

    //main door  border  Line
    //glColor3f(0.91, 0.58, 0.47);
    glLineWidth(10.0);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(390, 400);
    glVertex2i(530, 400);
    glVertex2i(530, 170);
    glVertex2i(390, 170);

    glVertex2i(390, 400);
    glVertex2i(390, 170);
    glVertex2i(530, 400);
    glVertex2i(530, 170);
    glEnd();


     //galicha
    glColor3f(0.91, 0.58, 0.47);
    //glColor3f(0.20, 0.59, 0.85);
    glBegin(GL_POLYGON);
    glVertex2i(315, 150);
    glVertex2i(595, 150);
    glVertex2i(570, 50);
    glVertex2i(280, 50);
    glEnd();

    //border line up and down
    glColor3f(0, 0, 0);
    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2i(80, 478);
    glVertex2i(830, 478);
    glVertex2i(810, 151);
    glVertex2i(95, 151);
    glEnd();

    //left squre border
    glColor3f(0, 0, 0);
    glLineWidth(4.0);
    glBegin(GL_LINES);
    glVertex2i(95, 480);
    glVertex2i(95, 150);

    glVertex2i(810, 480);
    glVertex2i(810, 150);
    glEnd();

    //left squre border
    glColor3f(0.09, 0.41, 0.23);
    glLineWidth(8.0);
    glBegin(GL_LINES);
    glVertex2i(317, 477);
    glVertex2i(317, 147);

    glVertex2i(594, 477);
    glVertex2i(594, 147);
    glEnd();


    glFlush();
}
int main(int argc, char ** argv)
{
    // Initialize GLUT
    glutInit(&argc, argv);
    // Set display mode
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    // Set top - left display window position.
    glutInitWindowPosition(100, 90);
    // Set display window width and height
    glutInitWindowSize(900, 700);
    // Create display window with the given title
    glutCreateWindow("my house");
    // Execute initialization procedure
    init();
    // Send graphics to display window
    glutDisplayFunc(home);
    // Display everything and wait.
    glutMainLoop();
}
