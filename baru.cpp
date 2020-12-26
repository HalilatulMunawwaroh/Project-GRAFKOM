#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>

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
float delta3 = 0.1;
bool toLeft = true;
float x_pos = 30.0;
float x_pos7 = 50.0;
float y_pos = 0.0;


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

int angle;
float horizontalMove;
float verticalMove;

// Collider
float posisiX[2] = {10, 17};
float posisiY[2] = {-5, 0};


void ColliderTank(){ // Collider bentuk kotak
    glPushMatrix();
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable( GL_BLEND );
    glColor4f(0,0,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(posisiX[0], posisiY[0]);
        glVertex2f(posisiX[1], posisiY[0]);
        glVertex2f(posisiX[1], posisiY[1]);
        glVertex2f(posisiX[0], posisiY[1]);
        glEnd();
    glPopMatrix();
}


void TankView(){
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

    glMatrixMode(GL_MODELVIEW);
    glColor3f(1,0.5,0);
    glBegin(GL_POLYGON);
        glVertex2f(16, 9);
        glVertex2f(18.23, 9);
        glVertex2f(19.26, 7.25);
        glVertex2f(14.82, 7.21);

    glEnd();

	//body
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.5,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(13.97, 7.21);
        glVertex2f(19.95, 7.24);
        glVertex2f(22, 4);
        glVertex2f(12, 4);

	glEnd();


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

//belakang
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(13.23, 6.02);
        glVertex2f(11.73, 6.57);
        glVertex2f(11.64, 5.47);
        glVertex2f(12.72, 5.18);
    glEnd();

    //tembak
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(20.74, 6);
        glVertex2f(25, 6);
        glVertex2f(25, 5.3);
        glVertex2f(21.16, 5.33);
    glEnd();

}


void TankObject(){
    // Memasang collider pada object
    ColliderTank();
    glPushMatrix();
    glTranslatef(horizontalMove, verticalMove,0); // Mengendalikan posisi tank
    glTranslatef(3,-8,0); // Menengahkan view
    glScalef(0.5, 0.5, 0);
    glTranslatef(3, 3, 0);


    TankView(); // Memanggil view
    glPopMatrix();
}

// Fungsi untuk mengendalikan object
void characterController(int data)
{
    // Jika menekan tombol panah kiri
    if(GetAsyncKeyState(VK_LEFT)){
        if (posisiX[0] >= 10){
            posisiX[0] -= 0.1f;
            posisiX[1] -= 0.1f;
            horizontalMove-=0.1f;
        }
    // Jika menekan tombol panah kanan
    } else if(GetAsyncKeyState(VK_RIGHT)){
        if (posisiX[1] <= 60){   //60
            posisiX[0] += 0.1f;
            posisiX[1] += 0.1f;
            horizontalMove+=0.1f;
        }
    }

    // Jika menekan tombol panah atas
    if(GetAsyncKeyState(VK_UP)){
        if (posisiY[1] <= 9){
            posisiY[0] += 0.1f;
            posisiY[1] += 0.1f;
            verticalMove+=0.1f;
        }
    // Jika menekan tombol panah bawah
    } else if (GetAsyncKeyState(VK_DOWN)){
        if (posisiY[0] >= -5){
            posisiY[0] -= 0.1f;
            posisiY[1] -= 0.1f;
            verticalMove-=0.1f;
        }
    }

    glutPostRedisplay();
	glutTimerFunc(1,characterController,0);
}

void kota(){
//gedung

    glMatrixMode(GL_MODELVIEW);
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(10, 5);
        glVertex2f(10, 18);
        glVertex2f(12, 18);
        glVertex2f(12, 17);
        glVertex2f(13, 17);
        glVertex2f(12.99, 19.24);
        glVertex2f(22, 19.24);
        glVertex2f(22, 14);
        glVertex2f(30, 14);
        glVertex2f(29.97, 20.84);
        glVertex2f(38.02, 20.95);
        glVertex2f(38.02, 11.33);
        glVertex2f(41.96, 11.3);
        glVertex2f(42, 18);
        glVertex2f(48, 18);
        glVertex2f(47.99, 20.79);
        glVertex2f(59.99, 20.74);
        glVertex2f(60, 5);

    glEnd();
    glFlush();

//jendela

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(237, 236, 173);
    glBegin(GL_QUADS);
        glVertex2f(32.95, 18.61);
        glVertex2f(36, 18.61);
        glVertex2f(36, 16);
        glVertex2f(32.95, 16);

    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(237, 236, 173);
    glBegin(GL_QUADS);
        glVertex2f(45, 13.12);
        glVertex2f(48, 13.12);
        glVertex2f(48,10);
        glVertex2f(45, 10);

    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(237, 236, 173);
    glBegin(GL_QUADS);
        glVertex2f(53.11, 18.77);
        glVertex2f(56, 18.77);
        glVertex2f(56, 15.67);
        glVertex2f(53.11, 15.67);

    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(237, 236, 173);
    glBegin(GL_QUADS);
        glVertex2f(16, 18);
        glVertex2f(18, 18);
        glVertex2f(18, 16);
        glVertex2f(16, 16);

    glEnd();
    glFlush();

    glMatrixMode(GL_MODELVIEW);
    glColor3ub(237, 236, 173);
    glBegin(GL_QUADS);
        glVertex2f(24, 13.15);
        glVertex2f(26, 13.15);
        glVertex2f(26, 11.23);
        glVertex2f(24, 11.23);

    glEnd();
    glFlush();

}

// Collider
float posisi1X[2] = {40, 60};
float posisi1Y[2] = {2, 13};




void ColliderPersegi(float y){ // Collider bentuk kotak
    glPushMatrix();
    glBegin(GL_POLYGON);
	glColor4f(0,0,0,0);
	glVertex2f(posisi1X[0], posisi1Y[0]+y);
	glVertex2f(posisi1X[1], posisi1Y[0]+y);
	glVertex2f(posisi1X[1], posisi1Y[1]+y);
	glVertex2f(posisi1X[0], posisi1Y[1]+y);
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
        glVertex2f(51.71 + x_pos, 6.51);
        glVertex2f(51.7 + x_pos, 7.04);
        glVertex2f(51.37 + x_pos, 7.14);
        glVertex2f(51.09 + x_pos, 10.73);
        glVertex2f(50.92 + x_pos, 7.58);
        glVertex2f(50.82 + x_pos, 7.92);
        glVertex2f(50.89 + x_pos, 8.32);
        glVertex2f(51.06 + x_pos, 8.61);
        glVertex2f(51.35 + x_pos, 8.82);
        glVertex2f(51.7 + x_pos, 8.9);
        glVertex2f(52.05 + x_pos, 8.94);
        glVertex2f(52.35 + x_pos, 8.91);
        glVertex2f(52.63 + x_pos, 8.8);
        glVertex2f(52.87 + x_pos, 8.62);
        glVertex2f(53.02 + x_pos, 8.32);
        glVertex2f(53.09 + x_pos, 8.01);
        glVertex2f(53.05 + x_pos, 7.69);
        glVertex2f(52.93 + x_pos, 7.4);
        glVertex2f(52.7 + x_pos, 7.16);
        glVertex2f(52.3 + x_pos, 7.02);
        glVertex2f(52.3 + x_pos, 6.49);

    glEnd();
    //glFlush();

//atas2
    glMatrixMode(GL_MODELVIEW);
    glColor3b(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(51 + x_pos, 6);
        glVertex2f(51.51 + x_pos, 6.5);
        glVertex2f(52.51 + x_pos, 6.49);
        glVertex2f(53 + x_pos, 6);
    glEnd();
    //glFlush();

//body
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.5,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(48 + x_pos, 4);
        glVertex2f(50 + x_pos, 6);
        glVertex2f(54 + x_pos, 6);
        glVertex2f(56 + x_pos, 4);

	glEnd();
	//glFlush();

//rodaBelakang
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(53.29 + x_pos, 3.53);
        glVertex2f(53.01 + x_pos, 3.68);
        glVertex2f(52.89 + x_pos, 3.83);
        glVertex2f(52.79 + x_pos, 4.02);
        glVertex2f(52.89 + x_pos, 4.27);
        glVertex2f(53.04 + x_pos, 4.48);
        glVertex2f(53.3 + x_pos, 4.61);
        glVertex2f(53.6 + x_pos, 4.6);
        glVertex2f(53.91 + x_pos, 4.51);
        glVertex2f(54.07 + x_pos, 4.27);
        glVertex2f(54.12 + x_pos, 4.01);
        glVertex2f(54.09 + x_pos, 3.82);
        glVertex2f(53.95 + x_pos, 3.63);
        glVertex2f(53.66 + x_pos, 3.53);

    glEnd();
	//glFlush();

//rodaDepan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(50.58 + x_pos, 3.56);
        glVertex2f(50.35 + x_pos, 3.6);
        glVertex2f(50.15 + x_pos, 3.71);
        glVertex2f(49.97 + x_pos, 3.88);
        glVertex2f(49.91 + x_pos, 4.15);
        glVertex2f(50.01 + x_pos, 4.33);
        glVertex2f(50.17 + x_pos, 4.51);
        glVertex2f(50.4 + x_pos, 4.6);
        glVertex2f(50.68 + x_pos, 4.61);
        glVertex2f(50.89 + x_pos, 4.54);
        glVertex2f(51.12 + x_pos, 4.37);
        glVertex2f(51.2 + x_pos, 4.16);
        glVertex2f(51.21 + x_pos, 3.96);
        glVertex2f(51.13 + x_pos, 3.8);
        glVertex2f(51.03 + x_pos, 3.67);
        glVertex2f(50.84 + x_pos, 3.58);
    glEnd();
	//glFlush();


//belakang
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(54.8 + x_pos, 5.2);
        glVertex2f(55.80 + x_pos, 6.10);
        glVertex2f(55.88 + x_pos, 5.26);
        glVertex2f(55.3 + x_pos, 4.7);
    glEnd();
	//glFlush();

//tembak
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(48.8 + x_pos, 4.8);
        glVertex2f(46.5 + x_pos, 4.8);
        glVertex2f(45.5 + x_pos, 5.5);
        glVertex2f(49.5 + x_pos, 5.5);
    //glPopMatrix();
    glEnd();
	//glFlush();
}

void EnemyObject(){
    // Memasang collider pada object
    glPushMatrix();
    //glScalef(0.75, 0.75, 0);
    glTranslatef(x_pos,y_pos,0); // Menengahkan view
    //glTranslatef(horizontalMove, verticalMove,0);
    ColliderPersegi(y_pos);

    EnemyView(); // Memanggil view
    glPopMatrix();
}

void timerEnemy(int){
    glutPostRedisplay();
    glutTimerFunc(200/30, timerEnemy, 0);
    if(x_pos<100 && toLeft){
        posisi1X[0]-=delta2;
        posisi1X[1]-=delta2;
        x_pos-=delta2;
        }
    else
        toLeft=false;


    if(x_pos<100 && toLeft == false)
        if(x_pos < -40){
            x_pos = 35;
        }
        else{
            x_pos -= delta2;
        }
    else
        toLeft = true;

}

// Collider
float posisi2X[2] = {40, 60};
float posisi2Y[2] = {-2, 8};



void ColliderPersegi2(float y){ // Collider bentuk kotak
    glPushMatrix();
    glBegin(GL_POLYGON);
	glColor4f(0,0,0,0);
	glVertex2f(posisi2X[0] + x_pos7, posisi2Y[0]+y);
	glVertex2f(posisi2X[1] + x_pos7, posisi2Y[0]+y);
	glVertex2f(posisi2X[1] + x_pos7, posisi2Y[1]+y);
	glVertex2f(posisi2X[0] + x_pos7, posisi2Y[1]+y);
	glEnd();
    glPopMatrix();
}

//cobaa
void EnemyView1(){
    //glPushMatrix();
    //glTranslated(-10,0,0);
    //atas
    glMatrixMode(GL_MODELVIEW);
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(51.71 + x_pos7, 3.51);
        glVertex2f(51.7 + x_pos7, 4.04);
        glVertex2f(51.37 + x_pos7, 4.14);
        glVertex2f(51.09 + x_pos7, 7.73);
        glVertex2f(50.92 + x_pos7, 4.58);
        glVertex2f(50.82 + x_pos7, 4.92);
        glVertex2f(50.89 + x_pos7, 5.32);
        glVertex2f(51.06 + x_pos7, 5.61);
        glVertex2f(51.35 + x_pos7, 5.82);
        glVertex2f(51.7 + x_pos7, 5.9);
        glVertex2f(52.05 + x_pos7, 5.94);
        glVertex2f(52.35 + x_pos7, 5.91);
        glVertex2f(52.63 + x_pos7, 5.8);
        glVertex2f(52.87 + x_pos7, 5.62);
        glVertex2f(53.02 + x_pos7, 5.32);
        glVertex2f(53.09 + x_pos7, 5.01);
        glVertex2f(53.05 + x_pos7, 4.69);
        glVertex2f(52.93 + x_pos7, 4.4);
        glVertex2f(52.7 + x_pos7, 4.16);
        glVertex2f(52.3 + x_pos7, 4.02);
        glVertex2f(52.3 + x_pos7, 3.49);

    glEnd();
    //glFlush();

//atas2
    glMatrixMode(GL_MODELVIEW);
    glColor3b(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(51 + x_pos7, 3);
        glVertex2f(51.51 + x_pos7, 3.5);
        glVertex2f(52.51 + x_pos7, 3.49);
        glVertex2f(53 + x_pos7, 3);
    glEnd();
    //glFlush();

//body
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.5,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(48 + x_pos7, 1);
        glVertex2f(50 + x_pos7, 3);
        glVertex2f(54 + x_pos7, 3);
        glVertex2f(56 + x_pos7, 1);

	glEnd();
	//glFlush();

//rodaBelakang
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(53.29 + x_pos7, 0.53);
        glVertex2f(53.01 + x_pos7, 0.68);
        glVertex2f(52.89 + x_pos7, 0.83);
        glVertex2f(52.79 + x_pos7, 1.02);
        glVertex2f(52.89 + x_pos7, 1.27);
        glVertex2f(53.04 + x_pos7, 1.48);
        glVertex2f(53.3 + x_pos7, 1.61);
        glVertex2f(53.6 + x_pos7, 1.6);
        glVertex2f(53.91 + x_pos7, 1.51);
        glVertex2f(54.07 + x_pos7, 1.27);
        glVertex2f(54.12 + x_pos7, 1.01);
        glVertex2f(54.09 + x_pos7, 0.82);
        glVertex2f(53.95 + x_pos7, 0.63);
        glVertex2f(53.66 + x_pos7, 0.53);

    glEnd();
	//glFlush();

//rodaDepan
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(50.58 + x_pos7, 0.56);
        glVertex2f(50.35 + x_pos7, 0.6);
        glVertex2f(50.15 + x_pos7, 0.71);
        glVertex2f(49.97 + x_pos7, 0.88);
        glVertex2f(49.91 + x_pos7, 1.15);
        glVertex2f(50.01 + x_pos7, 1.33);
        glVertex2f(50.17 + x_pos7, 1.51);
        glVertex2f(50.4 + x_pos7, 1.6);
        glVertex2f(50.68 + x_pos7, 1.61);
        glVertex2f(50.89 + x_pos7, 1.54);
        glVertex2f(51.12 + x_pos7, 1.37);
        glVertex2f(51.2 + x_pos7, 1.16);
        glVertex2f(51.21 + x_pos7, 0.96);
        glVertex2f(51.13 + x_pos7, 0.8);
        glVertex2f(51.03 + x_pos7, 0.67);
        glVertex2f(50.84 + x_pos7, 0.58);
    glEnd();
	//glFlush();


//belakang
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(54.8 + x_pos7, 2.2);
        glVertex2f(55.80 + x_pos7, 3.10);
        glVertex2f(55.88 + x_pos7, 2.26);
        glVertex2f(55.3 + x_pos7, 1.7);
    glEnd();
	//glFlush();

//tembak
    glMatrixMode(GL_MODELVIEW);
    glColor3f(0,0,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(48.8 + x_pos7, 1.8);
        glVertex2f(46.5 + x_pos7, 1.8);
        glVertex2f(45.5 + x_pos7, 2.5);
        glVertex2f(49.5 + x_pos7, 2.5);
    //glPopMatrix();
    glEnd();
	//glFlush();
}

void EnemyObject1(){
    // Memasang collider pada object
    glPushMatrix();
    glScalef(0.75, 0.75, 0);
    //glTranslatef(horizontalMove, verticalMove,0);
    ColliderPersegi2(y_pos);
    glTranslatef(x_pos7,y_pos,0); // Menengahkan view
    EnemyView1(); // Memanggil view
    glPopMatrix();
}

void timerEnemy1(int){
    glutPostRedisplay();
    glutTimerFunc(200/30, timerEnemy1, 0);
    if(x_pos7<100 && toLeft){
        posisi2X[0]-=delta3;
        posisi2X[1]-=delta3;
        x_pos7-=delta3;
        }
    else
        toLeft=false;

    if(x_pos7<100 && toLeft)
        if(x_pos7 < -35){
            x_pos7 = 45;
        }
        else{
            x_pos7 -= delta3;
        }
    else
        toLeft = true;

}

void displayMe(void) {
	glClear(GL_COLOR_BUFFER_BIT);
    baground();
    awan();
    jalan();
    kota();

	// Memanggil object tank
    TankObject();
    EnemyObject();
    EnemyObject1();
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
	gluOrtho2D(10, 60, -5, 30);
	glutDisplayFunc(displayMe);
	glutTimerFunc(0, timer, 0);
	glutTimerFunc(1,characterController,0);
	glutTimerFunc(200/30, timerEnemy, 0);
	glutTimerFunc(200/30, timerEnemy1, 0);
	glutMainLoop();
	return 0;
}
