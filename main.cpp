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
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void displayMe(void){
//awan1
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(12, 23);
        glVertex2f(12.25, 23.57);
        glVertex2f(12.56, 23.9);
        glVertex2f(12.9, 24.1);
        glVertex2f(13.2, 24.51);
        glVertex2f(13.44, 24.86);
        glVertex2f(14, 25);
        glVertex2f(14.56, 24.86);
        glVertex2f(14.87, 24.51);
        glVertex2f(15, 24);
        glVertex2f(15.42, 23.87);
        glVertex2f(15.78, 23.56);
        glVertex2f(16, 23);
    glEnd();
    glFlush();

//awan2
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(16.8, 20);
        glVertex2f(16.58, 20.4);
        glVertex2f(16.73, 20.85);
        glVertex2f(17.14, 21.04);
        glVertex2f(17.56, 20.9);
        glVertex2f(17.69, 20.58);
        glVertex2f(18, 20.74);
        glVertex2f(18.34, 20.66);
        glVertex2f(18.55, 20.4);
        glVertex2f(18.42, 20);
    glEnd();
    glFlush();

//awan3
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(22, 24);
        glVertex2f(21.27, 24.3);
        glVertex2f(21, 25);
        glVertex2f(21.37, 25.77);
        glVertex2f(22, 26);
        glVertex2f(22.2, 26.82);
        glVertex2f(22.71, 27.61);
        glVertex2f(23.29, 28);
        glVertex2f(24, 28.2);
        glVertex2f(24.7, 28);
        glVertex2f(25.35, 27.54);
        glVertex2f(25.66, 26.91);
        glVertex2f(26.26, 27.1);
        glVertex2f(27, 27);
        glVertex2f(27.52, 26.45);
        glVertex2f(27.6, 25.86);
        glVertex2f(27.3, 25.23);
        glVertex2f(27.75, 25.5);
        glVertex2f(28.3, 25.4);
        glVertex2f(28.62, 25);
        glVertex2f(28.5, 24.4);
        glVertex2f(28, 24);
    glEnd();
    glFlush();

//awan4
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(34, 22);
        glVertex2f(33.54, 22.27);
        glVertex2f(33.59, 22.81);
        glVertex2f(34, 23);
        glVertex2f(34.38, 22.76);
        glVertex2f(34.25, 23.32);
        glVertex2f(34.57, 23.83);
        glVertex2f(35.23, 24.14);
        glVertex2f(36, 24.24);
        glVertex2f(36.88, 24.14);
        glVertex2f(37.45, 23.81);
        glVertex2f(37.76, 23.36);
        glVertex2f(37.64, 22.78);
        glVertex2f(38, 23);
        glVertex2f(38.42, 22.85);
        glVertex2f(38.5, 22.27);
        glVertex2f(38, 22);
    glEnd();
    glFlush();

//awan5
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(42, 25);
        glVertex2f(41.54, 25.42);
        glVertex2f(41.5, 26.1);
        glVertex2f(41.73, 26.75);
        glVertex2f(42.29, 27.18);
        glVertex2f(42.83, 27.25);
        glVertex2f(43.4, 27.15);
        glVertex2f(43.9, 26.75);
        glVertex2f(44, 26.2);
        glVertex2f(44, 25.7);
        glVertex2f(44.4, 25.8);
        glVertex2f(44.82, 25.62);
        glVertex2f(44.84, 25.25);
        glVertex2f(44.61, 25);
    glEnd();
    glFlush();

//awan6
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(50, 22);
        glVertex2f(49, 22.47);
        glVertex2f(48.95, 23.5);
        glVertex2f(49.6, 24.22);
        glVertex2f(50.47, 24.22);
        glVertex2f(50.83, 25.18);
        glVertex2f(51.32, 26);
        glVertex2f(52.2, 26.4);
        glVertex2f(53, 26.43);
        glVertex2f(53.88, 26.35);
        glVertex2f(54.5, 26.1);
        glVertex2f(55, 25.56);
        glVertex2f(55.5, 24.83);
        glVertex2f(55.66, 24);
        glVertex2f(56.3, 23.5);
        glVertex2f(56.34, 22.72);
        glVertex2f(56, 22);
    glEnd();
    glFlush();

//jalan
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(107, 105, 105);
    glBegin(GL_POLYGON);
        glVertex2f(10, 5);
        glVertex2f(10, -5);
        glVertex2f(60, -5);
        glVertex2f(60, 5);
    glEnd();
    glFlush();

//garis jalan
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(12, 1);
        glVertex2f(16, 1);
        glVertex2f(16, -1);
        glVertex2f(12, -1);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(20, 1);
        glVertex2f(24, 1);
        glVertex2f(24, -1);
        glVertex2f(20, -1);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(28, 1);
        glVertex2f(32, 1);
        glVertex2f(32, -1);
        glVertex2f(28, -1);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(36, 1);
        glVertex2f(40, 1);
        glVertex2f(40, -1);
        glVertex2f(36, -1);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(44, 1);
        glVertex2f(48, 1);
        glVertex2f(48, -1);
        glVertex2f(44, -1);
    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(52, 1);
        glVertex2f(56, 1);
        glVertex2f(56, -1);
        glVertex2f(52, -1);
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
