#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

int angle;
float horizontalMove;
float verticalMove;
float x_pos = 0.0;
float delta = 0.05;
bool toLeft = true;

// Collider
float posisiX[2] = {40, 60};
float posisiY[2] = {2, 13};




void ColliderPersegi(float y){ // Collider bentuk kotak
    glPushMatrix();
    glBegin(GL_POLYGON);
	glColor4f(0,0,0,0);
	glVertex2f(posisiX[0], posisiY[0]+y);
	glVertex2f(posisiX[1], posisiY[0]+y);
	glVertex2f(posisiX[1], posisiY[1]+y);
	glVertex2f(posisiX[0], posisiY[1]+y);
	glEnd();
    glPopMatrix();
}



//Gambar karakter tank
void EnemyView(){
    //glPushMatrix();
    //glTranslated(-10,0,0);
    //atas
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(51.71, 6.51);
        glVertex2f(51.7 , 7.04);
        glVertex2f(51.37, 7.14);
        glVertex2f(51.09, 10.73);
        glVertex2f(50.92, 7.58);
        glVertex2f(50.82 , 7.92);
        glVertex2f(50.89 , 8.32);
        glVertex2f(51.06 , 8.61);
        glVertex2f(51.35 , 8.82);
        glVertex2f(51.7 , 8.9);
        glVertex2f(52.05, 8.94);
        glVertex2f(52.35, 8.91);
        glVertex2f(52.63, 8.8);
        glVertex2f(52.87, 8.62);
        glVertex2f(53.02, 8.32);
        glVertex2f(53.09, 8.01);
        glVertex2f(53.05, 7.69);
        glVertex2f(52.93, 7.4);
        glVertex2f(52.7 , 7.16);
        glVertex2f(52.3 , 7.02);
        glVertex2f(52.3 , 6.49);

    glEnd();

//atas2
    glMatrixMode(GL_MODELVIEW);
    glColor3b(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(51, 6);
        glVertex2f(51.51 , 6.5);
        glVertex2f(52.51 , 6.49);
        glVertex2f(53, 6);
    glEnd();

//body
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.5,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(48 , 4);
        glVertex2f(50 , 6);
        glVertex2f(54 , 6);
        glVertex2f(56 , 4);

	glEnd();

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
        glVertex2f(53.3 , 4.61);
        glVertex2f(53.6 , 4.6);
        glVertex2f(53.91, 4.51);
        glVertex2f(54.07, 4.27);
        glVertex2f(54.12, 4.01);
        glVertex2f(54.09, 3.82);
        glVertex2f(53.95, 3.63);
        glVertex2f(53.66, 3.53);

    glEnd();

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
        glVertex2f(50.4 , 4.6);
        glVertex2f(50.68, 4.61);
        glVertex2f(50.89, 4.54);
        glVertex2f(51.12, 4.37);
        glVertex2f(51.2 , 4.16);
        glVertex2f(51.21, 3.96);
        glVertex2f(51.13, 3.8);
        glVertex2f(51.03, 3.67);
        glVertex2f(50.84, 3.58);
    glEnd();


//belakang
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(54.8, 5.2);
        glVertex2f(55.80, 6.10);
        glVertex2f(55.88, 5.26);
        glVertex2f(55.3, 4.7);
    glEnd();

//tembak
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(48.8, 4.8);
        glVertex2f(46.5, 4.8);
        glVertex2f(45.5, 5.5);
        glVertex2f(49.5, 5.5);
    //glPopMatrix();
    glEnd();
}

void EnemyObject(float y_pos){
    // Memasang collider pada object
    //ColliderPersegi();
    glPushMatrix();
    //glTranslatef(horizontalMove, verticalMove,0);
    ColliderPersegi(y_pos);
    glTranslatef(x_pos,y_pos,0); // Menengahkan view
    EnemyView(); // Memanggil view
    glPopMatrix();
}

void timer(int){
    glutPostRedisplay();
    glutTimerFunc(1000/30, timer, 0);
    if(x_pos<50 && toLeft){
        posisiX[0]-=delta;
        posisiX[1]-=delta;
        x_pos-=delta;
        }
    else
        toLeft=false;
}

void displayMe(void){
//baground
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(52, 225, 235);
    glBegin(GL_QUADS);
        glVertex2d(-900, 900);
        glVertex2d(900, 900);
        glVertex2d(900, -900);
        glVertex2d(-900, -900);
    glEnd();
    EnemyObject(0);
    //EnemyObject(0);
    glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(900, 900);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Hello world!");
	glutDisplayFunc(displayMe);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	gluOrtho2D(10, 60, -5, 30);
	glutTimerFunc(1000/30, timer, 0);
	glutMainLoop();
}
