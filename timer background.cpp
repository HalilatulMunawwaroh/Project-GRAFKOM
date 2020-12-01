#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

float x_pos = 0.0;
float delta = 0.005;
float jalan_pos = 0.0;
float delta2 = 0.035;
bool toLeft = true;
bool toRight = true;

void baground(){
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(52, 225,235);
    glBegin(GL_QUADS);
        glVertex2d(-900, 900);
        glVertex2d(900, 900);
        glVertex2d(900, -900);
        glVertex2d(-900, -900);
    glEnd();
}
void awan(){
//awan1
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(12 + x_pos, 23);
        glVertex2f(12.25 + x_pos, 23.57);
        glVertex2f(12.56 + x_pos, 23.9);
        glVertex2f(12.9 + x_pos, 24.1);
        glVertex2f(13.2 + x_pos, 24.51);
        glVertex2f(13.44 + x_pos, 24.86);
        glVertex2f(14 + x_pos, 25);
        glVertex2f(14.56 + x_pos, 24.86);
        glVertex2f(14.87 + x_pos, 24.51);
        glVertex2f(15 + x_pos, 24);
        glVertex2f(15.42 + x_pos, 23.87);
        glVertex2f(15.78 + x_pos, 23.56);
        glVertex2f(16 + x_pos, 23);
    glEnd();

//awan2
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(16.8 + x_pos, 20);
        glVertex2f(16.58 + x_pos, 20.4);
        glVertex2f(16.73 + x_pos, 20.85);
        glVertex2f(17.14 + x_pos, 21.04);
        glVertex2f(17.56 + x_pos, 20.9);
        glVertex2f(17.69 + x_pos, 20.58);
        glVertex2f(18 + x_pos, 20.74);
        glVertex2f(18.34 + x_pos, 20.66);
        glVertex2f(18.55 + x_pos, 20.4);
        glVertex2f(18.42 + x_pos, 20);
    glEnd();

//awan3
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(22 + x_pos, 24);
        glVertex2f(21.27 + x_pos, 24.3);
        glVertex2f(21 + x_pos, 25);
        glVertex2f(21.37 + x_pos, 25.77);
        glVertex2f(22 + x_pos, 26);
        glVertex2f(22.2 + x_pos, 26.82);
        glVertex2f(22.71 + x_pos, 27.61);
        glVertex2f(23.29 + x_pos, 28);
        glVertex2f(24 + x_pos, 28.2);
        glVertex2f(24.7 + x_pos, 28);
        glVertex2f(25.35 + x_pos, 27.54);
        glVertex2f(25.66 + x_pos, 26.91);
        glVertex2f(26.26 + x_pos, 27.1);
        glVertex2f(27 + x_pos, 27);
        glVertex2f(27.52 + x_pos, 26.45);
        glVertex2f(27.6 + x_pos, 25.86);
        glVertex2f(27.3 + x_pos, 25.23);
        glVertex2f(27.75 + x_pos, 25.5);
        glVertex2f(28.3 + x_pos, 25.4);
        glVertex2f(28.62 + x_pos, 25);
        glVertex2f(28.5 + x_pos, 24.4);
        glVertex2f(28 + x_pos, 24);
    glEnd();

//awan4
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(34 + x_pos, 22);
        glVertex2f(33.54 + x_pos, 22.27);
        glVertex2f(33.59 + x_pos, 22.81);
        glVertex2f(34 + x_pos, 23);
        glVertex2f(34.38 + x_pos, 22.76);
        glVertex2f(34.25 + x_pos, 23.32);
        glVertex2f(34.57 + x_pos, 23.83);
        glVertex2f(35.23 + x_pos, 24.14);
        glVertex2f(36 + x_pos, 24.24);
        glVertex2f(36.88 + x_pos, 24.14);
        glVertex2f(37.45 + x_pos, 23.81);
        glVertex2f(37.76 + x_pos, 23.36);
        glVertex2f(37.64 + x_pos, 22.78);
        glVertex2f(38 + x_pos, 23);
        glVertex2f(38.42 + x_pos, 22.85);
        glVertex2f(38.5 + x_pos, 22.27);
        glVertex2f(38 + x_pos, 22);
    glEnd();

//awan5
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(42 + x_pos, 25);
        glVertex2f(41.54 + x_pos, 25.42);
        glVertex2f(41.5 + x_pos, 26.1);
        glVertex2f(41.73 + x_pos, 26.75);
        glVertex2f(42.29 + x_pos, 27.18);
        glVertex2f(42.83 + x_pos, 27.25);
        glVertex2f(43.4 + x_pos, 27.15);
        glVertex2f(43.9 + x_pos, 26.75);
        glVertex2f(44 + x_pos, 26.2);
        glVertex2f(44 + x_pos, 25.7);
        glVertex2f(44.4 + x_pos, 25.8);
        glVertex2f(44.82 + x_pos, 25.62);
        glVertex2f(44.84 + x_pos, 25.25);
        glVertex2f(44.61 + x_pos, 25);
    glEnd();

//awan6
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(50 + x_pos, 22);
        glVertex2f(49 + x_pos, 22.47);
        glVertex2f(48.95 + x_pos, 23.5);
        glVertex2f(49.6 + x_pos, 24.22);
        glVertex2f(50.47 + x_pos, 24.22);
        glVertex2f(50.83 + x_pos, 25.18);
        glVertex2f(51.32 + x_pos, 26);
        glVertex2f(52.2 + x_pos, 26.4);
        glVertex2f(53 + x_pos, 26.43);
        glVertex2f(53.88 + x_pos, 26.35);
        glVertex2f(54.5 + x_pos, 26.1);
        glVertex2f(55 + x_pos, 25.56);
        glVertex2f(55.5 + x_pos, 24.83);
        glVertex2f(55.66 + x_pos, 24);
        glVertex2f(56.3 + x_pos, 23.5);
        glVertex2f(56.34 + x_pos, 22.72);
        glVertex2f(56 + x_pos, 22);
    glEnd();
}
void jalan(){

//jalan
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(107, 105, 105);
    glBegin(GL_POLYGON);
        glVertex2f(10, 5);
        glVertex2f(10, -5);
        glVertex2f(60, -5);
        glVertex2f(60, 5);
    glEnd();

//garis jalan
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(12 + jalan_pos, 1);
        glVertex2f(16 + jalan_pos, 1);
        glVertex2f(16 + jalan_pos, -1);
        glVertex2f(12 + jalan_pos, -1);
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(20 + jalan_pos, 1);
        glVertex2f(24 + jalan_pos, 1);
        glVertex2f(24 + jalan_pos, -1);
        glVertex2f(20 + jalan_pos, -1);
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(28 + jalan_pos, 1);
        glVertex2f(32 + jalan_pos, 1);
        glVertex2f(32 + jalan_pos, -1);
        glVertex2f(28 + jalan_pos, -1);
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(36 + jalan_pos, 1);
        glVertex2f(40 + jalan_pos, 1);
        glVertex2f(40 + jalan_pos, -1);
        glVertex2f(36 + jalan_pos, -1);
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(44 + jalan_pos, 1);
        glVertex2f(48 + jalan_pos, 1);
        glVertex2f(48 + jalan_pos, -1);
        glVertex2f(44 + jalan_pos, -1);
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(52 + jalan_pos, 1);
        glVertex2f(56 + jalan_pos, 1);
        glVertex2f(56 + jalan_pos, -1);
        glVertex2f(52 + jalan_pos, -1);
    glEnd();
}
void timer(int){
    glutPostRedisplay();
    glutTimerFunc(1000/30, timer, 0);
    if(x_pos<50 && toLeft)
        x_pos -= delta;
    else
        toLeft = true;

    if(jalan_pos<50 && toRight)
        jalan_pos += delta2;
    else
        toRight = true;

}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);
    baground();
    awan();
    jalan();

    glutSwapBuffers();
}


int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(900, 900);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Hello world!");
	glutDisplayFunc(displayMe);
	gluOrtho2D(10, 60, -5, 30);
	glutTimerFunc(0, timer, 0);
	glutMainLoop();
	return 0;
}


