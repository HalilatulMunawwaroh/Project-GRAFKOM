clude <GL/glut.h>

float x_pos1 = 0.0;
float x_pos2 = 0.0;
float x_pos3 = 0.0;
float x_pos4 = 0.0;
float x_pos5 = 0.0;
float x_pos6 = 0.0;
float delta = 0.015;
float jalan_pos1 = 0.0;
float jalan_pos2 = 0.0;
float jalan_pos3 = 0.0;
float jalan_pos4 = 0.0;
float jalan_pos5 = 0.0;
float jalan_pos6 = 0.0;
float delta2 = 0.1;
bool toLeft = true;


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

void gedung(){
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(0, 0, 0);
    glBegin(GL_QUADS);
        glVertex2d(10, 5);
        glVertex2d(10, 20);
        glVertex2d(20, 20);
        glVertex2d(20, 5);
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(0, 0, 0);
    glBegin(GL_QUADS);
        glVertex2d(30, 5);
        glVertex2d(30, 15);
        glVertex2d(40, 15);
        glVertex2d(40, 5);
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(0, 0, 0);
    glBegin(GL_QUADS);
        glVertex2d(50, 5);
        glVertex2d(50, 20);
        glVertex2d(60, 20);
        glVertex2d(60, 5);
    glEnd();

//jendela
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(232, 231, 160);
    glBegin(GL_QUADS);
        glVertex2d(12.11, 10);
        glVertex2d(12.11, 15.27);
        glVertex2d(17.5, 15.27);
        glVertex2d(17.5, 10);
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(232, 231, 160);
    glBegin(GL_QUADS);
        glVertex2d(32.25, 7.85);
        glVertex2d(32.25, 12);
        glVertex2d(37.5, 12);
        glVertex2d(37.5, 7.85);
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(232, 231, 160);
    glBegin(GL_QUADS);
        glVertex2d(52.11, 10);
        glVertex2d(52.11, 15.27);
        glVertex2d(57.8, 15.27);
        glVertex2d(57.8, 10);
    glEnd();
}

void displayMe(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	baground();
    gedung();

	glFlush();
	glutSwapBuffers();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(900, 900);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Windows");
	gluOrtho2D(10, 60, -5, 45);
	glutDisplayFunc(displayMe);

	glutMainLoop();
	return 0;
}

void awan(){
//awan1
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(12 + x_pos1, 23);
        glVertex2f(12.25 + x_pos1, 23.57);
        glVertex2f(12.56 + x_pos1, 23.9);
        glVertex2f(12.9 + x_pos1, 24.1);
        glVertex2f(13.2 + x_pos1, 24.51);
        glVertex2f(13.44 + x_pos1, 24.86);
        glVertex2f(14 + x_pos1, 25);
        glVertex2f(14.56 + x_pos1, 24.86);
        glVertex2f(14.87 + x_pos1, 24.51);
        glVertex2f(15 + x_pos1, 24);
        glVertex2f(15.42 + x_pos1, 23.87);
        glVertex2f(15.78 + x_pos1, 23.56);
        glVertex2f(16 + x_pos1, 23);
    glEnd();

//awan2
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(16.8 + x_pos2, 20);
        glVertex2f(16.58 + x_pos2, 20.4);
        glVertex2f(16.73 + x_pos2, 20.85);
        glVertex2f(17.14 + x_pos2, 21.04);
        glVertex2f(17.56 + x_pos2, 20.9);
        glVertex2f(17.69 + x_pos2, 20.58);
        glVertex2f(18 + x_pos2, 20.74);
        glVertex2f(18.34 + x_pos2, 20.66);
        glVertex2f(18.55 + x_pos2, 20.4);
        glVertex2f(18.42 + x_pos2, 20);
    glEnd();

//awan3
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(22 + x_pos3, 24);
        glVertex2f(21.27 + x_pos3, 24.3);
        glVertex2f(21 + x_pos3, 25);
        glVertex2f(21.37 + x_pos3, 25.77);
        glVertex2f(22 + x_pos3, 26);
        glVertex2f(22.2 + x_pos3, 26.82);
        glVertex2f(22.71 + x_pos3, 27.61);
        glVertex2f(23.29 + x_pos3, 28);
        glVertex2f(24 + x_pos3, 28.2);
        glVertex2f(24.7 + x_pos3, 28);
        glVertex2f(25.35 + x_pos3, 27.54);
        glVertex2f(25.66 + x_pos3, 26.91);
        glVertex2f(26.26 + x_pos3, 27.1);
        glVertex2f(27 + x_pos3, 27);
        glVertex2f(27.52 + x_pos3, 26.45);
        glVertex2f(27.6 + x_pos3, 25.86);
        glVertex2f(27.3 + x_pos3, 25.23);
        glVertex2f(27.75 + x_pos3, 25.5);
        glVertex2f(28.3 + x_pos3, 25.4);
        glVertex2f(28.62 + x_pos3, 25);
        glVertex2f(28.5 + x_pos3, 24.4);
        glVertex2f(28 + x_pos3, 24);
    glEnd();

//awan4
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(34 + x_pos4, 22);
        glVertex2f(33.54 + x_pos4, 22.27);
        glVertex2f(33.59 + x_pos4, 22.81);
        glVertex2f(34 + x_pos4, 23);
        glVertex2f(34.38 + x_pos4, 22.76);
        glVertex2f(34.25 + x_pos4, 23.32);
        glVertex2f(34.57 + x_pos4, 23.83);
        glVertex2f(35.23 + x_pos4, 24.14);
        glVertex2f(36 + x_pos4, 24.24);
        glVertex2f(36.88 + x_pos4, 24.14);
        glVertex2f(37.45 + x_pos4, 23.81);
        glVertex2f(37.76 + x_pos4, 23.36);
        glVertex2f(37.64 + x_pos4, 22.78);
        glVertex2f(38 + x_pos4, 23);
        glVertex2f(38.42 + x_pos4, 22.85);
        glVertex2f(38.5 + x_pos4, 22.27);
        glVertex2f(38 + x_pos4, 22);
    glEnd();

//awan5
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(42 + x_pos5, 25);
        glVertex2f(41.54 + x_pos5, 25.42);
        glVertex2f(41.5 + x_pos5, 26.1);
        glVertex2f(41.73 + x_pos5, 26.75);
        glVertex2f(42.29 + x_pos5, 27.18);
        glVertex2f(42.83 + x_pos5, 27.25);
        glVertex2f(43.4 + x_pos5, 27.15);
        glVertex2f(43.9 + x_pos5, 26.75);
        glVertex2f(44 + x_pos5, 26.2);
        glVertex2f(44 + x_pos5, 25.7);
        glVertex2f(44.4 + x_pos5, 25.8);
        glVertex2f(44.82 + x_pos5, 25.62);
        glVertex2f(44.84 + x_pos5, 25.25);
        glVertex2f(44.61 + x_pos5, 25);
    glEnd();

//awan6
    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(50 + x_pos6, 22);
        glVertex2f(49 + x_pos6, 22.47);
        glVertex2f(48.95 + x_pos6, 23.5);
        glVertex2f(49.6 + x_pos6, 24.22);
        glVertex2f(50.47 + x_pos6, 24.22);
        glVertex2f(50.83 + x_pos6, 25.18);
        glVertex2f(51.32 + x_pos6, 26);
        glVertex2f(52.2 + x_pos6, 26.4);
        glVertex2f(53 + x_pos6, 26.43);
        glVertex2f(53.88 + x_pos6, 26.35);
        glVertex2f(54.5 + x_pos6, 26.1);
        glVertex2f(55 + x_pos6, 25.56);
        glVertex2f(55.5 + x_pos6, 24.83);
        glVertex2f(55.66 + x_pos6, 24);
        glVertex2f(56.3 + x_pos6, 23.5);
        glVertex2f(56.34 + x_pos6, 22.72);
        glVertex2f(56 + x_pos6, 22);
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
        glVertex2f(12 + jalan_pos1, 1);
        glVertex2f(16 + jalan_pos1, 1);
        glVertex2f(16 + jalan_pos1, -1);
        glVertex2f(12 + jalan_pos1, -1);
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(20 + jalan_pos2, 1);
        glVertex2f(24 + jalan_pos2, 1);
        glVertex2f(24 + jalan_pos2, -1);
        glVertex2f(20 + jalan_pos2, -1);
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(28 + jalan_pos3, 1);
        glVertex2f(32 + jalan_pos3, 1);
        glVertex2f(32 + jalan_pos3, -1);
        glVertex2f(28 + jalan_pos3, -1);
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(36 + jalan_pos4, 1);
        glVertex2f(40 + jalan_pos4, 1);
        glVertex2f(40 + jalan_pos4, -1);
        glVertex2f(36 + jalan_pos4, -1);
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(44 + jalan_pos5, 1);
        glVertex2f(48 + jalan_pos5, 1);
        glVertex2f(48 + jalan_pos5, -1);
        glVertex2f(44 + jalan_pos5, -1);
    glEnd();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(252, 252, 252);
    glBegin(GL_POLYGON);
        glVertex2f(52 + jalan_pos6, 1);
        glVertex2f(56 + jalan_pos6, 1);
        glVertex2f(56 + jalan_pos6, -1);
        glVertex2f(52 + jalan_pos6, -1);
    glEnd();
}

void timer(int){
    glutPostRedisplay();
    glutTimerFunc(1000/30, timer, 0);
    if(x_pos1<50 && toLeft)
        if(x_pos1 < -7){
            x_pos1 = 45;
        }
        else{
            x_pos1 -= delta;
        }
    else
        toLeft = true;

    if(x_pos2<50 && toLeft)
        if(x_pos2 < -10){
            x_pos2 = 42;
        }
        else{
            x_pos2 -= delta;
        }
    else
        toLeft = true;

    if(x_pos3<50 && toLeft)
        if(x_pos3 < -20){
            x_pos3 = 38;
        }
        else{
            x_pos3 -= delta;
        }
    else
        toLeft = true;

    if(x_pos4<50 && toLeft)
        if(x_pos4 < -30){
            x_pos4 = 30;
        }
        else{
            x_pos4 -= delta;
        }
    else
        toLeft = true;

    if(x_pos5<50 && toLeft)
        if(x_pos5 < -35){
            x_pos5 = 25;
        }
        else{
            x_pos5 -= delta;
        }
    else
        toLeft = true;

    if(x_pos6<50 && toLeft)
        if(x_pos6 < -50){
            x_pos6 = 15;
        }
        else{
            x_pos6 -= delta;
        }
    else
        toLeft = true;


    if(jalan_pos1<50 && toLeft)
        if(jalan_pos1 < -6){
            jalan_pos1 = 42;
        }
        else{
            jalan_pos1 -= delta2;
        }
    else
        toLeft = true;

    if(jalan_pos2<50 && toLeft)
        if(jalan_pos2 < -14){
            jalan_pos2 = 34;
        }
        else{
            jalan_pos2 -= delta2;
        }
    else
        toLeft = true;

    if(jalan_pos3<50 && toLeft)
        if(jalan_pos3 < -22){
            jalan_pos3 = 26;
        }
        else{
            jalan_pos3 -= delta2;
        }
    else
        toLeft = true;

    if(jalan_pos4<50 && toLeft)
        if(jalan_pos4 < -30){
            jalan_pos4 = 18;
        }
        else{
            jalan_pos4 -= delta2;
        }
    else
        toLeft = true;

    if(jalan_pos5<50 && toLeft)
        if(jalan_pos5 < -38){
            jalan_pos5 = 10;
        }
        else{
            jalan_pos5 -= delta2;
        }
    else
        toLeft = true;

    if(jalan_pos6<50 && toLeft)
        if(jalan_pos6 < -46){
            jalan_pos6 = 2;
        }
        else{
            jalan_pos6 -= delta2;
        }
    else
        toLeft = true;
}

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

//Gambar tank enemy
//atas
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(51.71, 6.51);
        glVertex2f(51.7, 7.04);
        glVertex2f(51.37, 7.14);
        glVertex2f(51.09, 10.73);
        glVertex2f(50.92, 7.58);
        glVertex2f(50.82, 7.92);
        glVertex2f(50.89, 8.32);
        glVertex2f(51.06, 8.61);
        glVertex2f(51.35, 8.82);
        glVertex2f(51.7, 8.9);
        glVertex2f(52.05, 8.94);
        glVertex2f(52.35, 8.91);
        glVertex2f(52.63, 8.8);
        glVertex2f(52.87, 8.62);
        glVertex2f(53.02, 8.32);
        glVertex2f(53.09, 8.01);
        glVertex2f(53.05, 7.69);
        glVertex2f(52.93, 7.4);
        glVertex2f(52.7, 7.16);
        glVertex2f(52.3, 7.02);
        glVertex2f(52.3, 6.49);

    glEnd();
    glFlush();

//atas2
    glMatrixMode(GL_MODELVIEW);
    glColor3b(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(51, 6);
        glVertex2f(51.51, 6.5);
        glVertex2f(52.51, 6.49);
        glVertex2f(53, 6);
    glEnd();
    glFlush();

//body
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.5,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(48, 4);
        glVertex2f(50, 6);
        glVertex2f(54, 6);
        glVertex2f(56, 4);

	glEnd();
	glFlush();

//rodaBelakang
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(53.29, 3.53);
        glVertex2f(53.01, 3.68);
        glVertex2f(52.89, 3.83);
        glVertex2f(52.79, 4.02);
        glVertex2f(52.89, 4.27);
        glVertex2f(53.04, 4.48);
        glVertex2f(53.3, 4.61);
        glVertex2f(53.6, 4.6);
        glVertex2f(53.91, 4.51);
        glVertex2f(54.07, 4.27);
        glVertex2f(54.12, 4.01);
        glVertex2f(54.09, 3.82);
        glVertex2f(53.95, 3.63);
        glVertex2f(53.66, 3.53);

    glEnd();
	glFlush();

//rodaDepan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(50.58, 3.56);
        glVertex2f(50.35, 3.6);
        glVertex2f(50.15, 3.71);
        glVertex2f(49.97, 3.88);
        glVertex2f(49.91, 4.15);
        glVertex2f(50.01, 4.33);
        glVertex2f(50.17, 4.51);
        glVertex2f(50.4, 4.6);
        glVertex2f(50.68, 4.61);
        glVertex2f(50.89, 4.54);
        glVertex2f(51.12, 4.37);
        glVertex2f(51.2, 4.16);
        glVertex2f(51.21, 3.96);
        glVertex2f(51.13, 3.8);
        glVertex2f(51.03, 3.67);
        glVertex2f(50.84, 3.58);
    glEnd();
	glFlush();


//belakang
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(54.8, 5.2);
        glVertex2f(55.80, 6.10);
        glVertex2f(55.88, 5.26);
        glVertex2f(55.3, 4.7);
    glEnd();
	glFlush();

//tembak
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(48.8, 4.8);
        glVertex2f(46.5, 4.8);
        glVertex2f(45.5, 5.5);
        glVertex2f(49.5, 5.5);
    glEnd();
	glFlush();
}

void displayMe(void) {
	glClear(GL_COLOR_BUFFER_BIT);
    baground();
    awan();
    jalan();

	glFlush();
	glutSwapBuffers();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(900, 900);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Windows");
	gluOrtho2D(10, 60, -5, 45);
	glutDisplayFunc(displayMe);
	glutTimerFunc(0, timer, 0);

	glutMainLoop();
	return 0;
}
