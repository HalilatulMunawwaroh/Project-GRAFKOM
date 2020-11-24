#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void displayMe(void){
//baground
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(52, 225,235);
    glBegin(GL_QUADS);
        glVertex2d(-900, 900);
        glVertex2d(900, 900);
        glVertex2d(900, -900);
        glVertex2d(-900, -900);
    glEnd();
    glFlush();

//Gambar karakter tank
//atas
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
        glVertex2f(16.71, 9);
        glVertex2f(16.67, 10.2);
        glVertex2f(16.02, 10.26);
        glVertex2f(15.45, 10.73);
        glVertex2f(15.45, 11.23);
        glVertex2f(15.71, 11.59);
        glVertex2f(16.28, 11.82);
        glVertex2f(16.93, 11.82);
        glVertex2f(17.57, 11.84);
        glVertex2f(18.15, 11.78);
        glVertex2f(18.66, 11.53);
        glVertex2f(18.75, 10.99);
        glVertex2f(18.43, 10.5);
        glVertex2f(18.08, 10.28);
        glVertex2f(17.49, 10.28);
        glVertex2f(17.49, 9);

    glEnd();
    glFlush();

//atas2
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1,0.5,0);
    glBegin(GL_POLYGON);
        glVertex2f(16, 9);
        glVertex2f(18.23, 9);
        glVertex2f(19.26, 7.25);
        glVertex2f(14.82, 7.21);
    glEnd();
    glFlush();

//body
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.5,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(13.97, 7.21);
        glVertex2f(19.95, 7.24);
        glVertex2f(22, 4);
        glVertex2f(12, 4);

	glEnd();
	glFlush();

//rodaBelakang
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(14.57, 4.8);
        glVertex2f(14.29, 4.63);
        glVertex2f(14.1, 4.26);
        glVertex2f(14.17, 4);
        glVertex2f(14.26, 3.71);
        glVertex2f(14.5, 3.5);
        glVertex2f(15, 3.5);
        glVertex2f(15.26, 3.57);
        glVertex2f(15.5, 3.75);
        glVertex2f(15.65, 4.01);
        glVertex2f(15.6, 4.35);
        glVertex2f(15.45, 4.66);
        glVertex2f(15.09, 4.82);

    glEnd();
	glFlush();

//rodaDepan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(18.68, 4.75);
        glVertex2f(18.52, 4.58);
        glVertex2f(18.4, 4.4);
        glVertex2f(18.36, 4.19);
        glVertex2f(18.4, 4);
        glVertex2f(18.51, 3.84);
        glVertex2f(18.66, 3.64);
        glVertex2f(19.01, 3.51);
        glVertex2f(19.37, 3.51);
        glVertex2f(19.59, 3.62);
        glVertex2f(19.82, 3.84);
        glVertex2f(19.88, 4.02);
        glVertex2f(19.94, 4.36);
        glVertex2f(19.85, 4.55);
        glVertex2f(19.65, 4.68);
        glVertex2f(19.43, 4.8);
        glVertex2f(19.06, 4.84);
    glEnd();
	glFlush();


//belakang
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(13.23, 6.02);
        glVertex2f(11.73, 6.57);
        glVertex2f(11.64, 5.47);
        glVertex2f(12.72, 5.18);
    glEnd();
	glFlush();

//tembak
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(20.74, 6);
        glVertex2f(25, 6);
        glVertex2f(25, 5.3);
        glVertex2f(21.16, 5.33);
    glEnd();
	glFlush();

//peluru
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(25.56, 5.82);
        glVertex2f(25.55, 5.42);
        glVertex2f(26.53, 5.61);
    glEnd();
	glFlush();

}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitWindowSize(900, 900);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Hello world!");
	glutDisplayFunc(displayMe);
	gluOrtho2D(10, 60, -5, 30);
	glutMainLoop();
}
