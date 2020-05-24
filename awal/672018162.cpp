#include<GL/freeglut.h>      

void init(){
    glClearColor(0.1, 0.2, 0.9, 0.3);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 1200, 0.0, 600);
}

void isi(){

    
    glClear(GL_COLOR_BUFFER_BIT );

    //lampu
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2i(750, 450);
        glVertex2i(830, 450);
        glVertex2i(830, 460);
        glVertex2i(750, 460);
    glEnd();
    //lampu
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2i(820, 450);
        glVertex2i(830, 450);
        glVertex2i(830, 430);
        glVertex2i(820, 430);
    glEnd();
    //lampu
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2i(750, 100);
        glVertex2i(760, 100);
        glVertex2i(760, 450);
        glVertex2i(750, 450);
    glEnd();
    //lampu
    glColor3f(0.0, 0.0, 0.0);
        glBegin(GL_POLYGON);
        glVertex2i(795, 400);
        glVertex2i(855, 400);
        glVertex2i(835, 430);
        glVertex2i(815, 430);
    glEnd();


    //rumput
    glColor3f(0.1, 0.5, 0.0);
        glBegin(GL_TRIANGLES);
        glVertex2i(840, 100);
        glVertex2i(820, 100);
        glVertex2i(830, 220);
    glEnd();
    //rumput
    glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(860, 100);
        glVertex2i(840, 100);
        glVertex2i(850, 160);
    glEnd();
    //rumput
    glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(880, 100);
        glVertex2i(860, 100);
        glVertex2i(870, 230);
    glEnd();
    //rumput
    glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(820, 100);
        glVertex2i(800, 100);
        glVertex2i(810, 150);
    glEnd();
    //rumput
    glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(780, 100);
        glVertex2i(800, 100);
        glVertex2i(790, 200);
    glEnd();


    //cemara
    glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(870, 200);
        glVertex2i(990, 200);
        glVertex2i(930, 500);
    glEnd();
    //cemara
    glColor3f(0.2, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(875, 270);
        glVertex2i(985, 270);
        glVertex2i(930, 500);
    glEnd();
    //cemara
    glColor3f(0.2, 0.6, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(885, 350);
        glVertex2i(975, 350);
        glVertex2i(930, 500);
    glEnd();
    //cemara
    glColor3f(0.5, 0.2, 0.2);
    glBegin(GL_POLYGON);
        glVertex2i(920, 200);
        glVertex2i(940, 200);
        glVertex2i(940, 100);
        glVertex2i(920, 100);
    glEnd();

    //gentenggd
    glColor3f(0.8, 0.3, 0.2);
    glBegin(GL_POLYGON);
        glVertex2i(200, 500);
        glVertex2i(600, 500);
        glVertex2i(500, 350);
        glVertex2i(100, 350);
    glEnd();
    //gentengkcl
    glColor3f(0.9, 0.2, 0.1);
    glBegin(GL_TRIANGLES);
        glVertex2i(600, 500);
        glVertex2i(500, 350);
        glVertex2i(700, 350);
    glEnd();
    //tembokkcl
    glColor3f(0.9, 0.9, 0.3);
    glBegin(GL_POLYGON);
        glVertex2i(500, 350);
        glVertex2i(700, 350);
        glVertex2i(700, 100);
        glVertex2i(500, 100);
    glEnd();
    //pintu
    glColor3f(0.00, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2i(580, 300);
        glVertex2i(690, 300);
        glVertex2i(690, 100);
        glVertex2i(580, 100);
    glEnd();
    //gagang
    glColor3f(0.7, 0.2, 0.1);
    glPointSize(12);
    glBegin(GL_POINTS);
        glVertex2i(670, 200);
    glEnd();

    //tembokgd
    glColor3f(0.8, 0.8, 0.3);
    glBegin(GL_POLYGON);
        glVertex2i(100, 350);
        glVertex2i(500, 350);
        glVertex2i(500, 100);
        glVertex2i(100, 100);
    glEnd();
    //jendela1
    glColor3f(0.1, 0.7, 0.5);
    glBegin(GL_POLYGON);
        glVertex2i(330, 320);
        glVertex2i(450, 320);
        glVertex2i(450, 230);
        glVertex2i(330, 230);
    glEnd();
    //batas1
    glColor3f(0.2, 0.4, 0.3);
    glLineWidth(5);
    glBegin(GL_LINES);
        glVertex2i(390, 320);
        glVertex2i(390, 230);
        glVertex2i(330, 273);
        glVertex2i(450, 273);
    glEnd();
    //jendela2
    glColor3f(0.1, 0.7, 0.5);
    glBegin(GL_POLYGON);
            glVertex2i(150, 320);
            glVertex2i(270, 320);
            glVertex2i(270, 230);
            glVertex2i(150, 230);
     glEnd();
    //batas2
    glColor3f(0.2, 0.4, 0.3);
    glLineWidth(5);
    glBegin(GL_LINES);
        glVertex2i(210, 320);
        glVertex2i(210, 230);
        glVertex2i(150, 273);
        glVertex2i(270, 273);
    glEnd();

    //keset
    glColor3f(0.9, 0.4, 0.7);
    glLineWidth(3);
    glBegin(GL_POLYGON);
        glVertex2i(700, 95);
        glVertex2i(590, 95);
        glVertex2i(630, 70);
        glVertex2i(745, 70);
    glEnd();

    //pot
    glColor3f(0.3, 0.5, 0.7);
    glBegin(GL_POLYGON);
        glVertex2i(515, 165);
        glVertex2i(555, 165);
        glVertex2i(565, 195);
        glVertex2i(505, 195);
    glEnd();
    //bunga
    glColor3f(0.2, 0.9, 0.3);
    glBegin(GL_POLYGON);
        glVertex2i(538, 195);
        glVertex2i(533, 195);
        glVertex2i(533, 240);
        glVertex2i(538, 240);
    glEnd();
    //bunga
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(17);
    glBegin(GL_POINTS);
        glVertex2i(535, 240);
    glEnd();

    //meja
    glColor3f(0.4, 0.20, 0.3);
    glBegin(GL_POLYGON);
        glVertex2i(500, 150);
        glVertex2i(575, 150);
        glVertex2i(575, 165);
        glVertex2i(500, 165);
    glEnd();
    //meja
    glColor3f(0.4, 0.20, 0.3); 
    glBegin(GL_POLYGON);
        glVertex2i(500, 150);
        glVertex2i(510, 150);
        glVertex2i(510, 90);
        glVertex2i(500, 90);
    glEnd();
    //meja
    glColor3f(0.4, 0.20, 0.3); 
    glBegin(GL_POLYGON);
        glVertex2i(575, 150);
        glVertex2i(565, 150);
        glVertex2i(565, 90);
        glVertex2i(575, 90);
    glEnd();

    glFlush();
}
int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50, 50);
    glutInitWindowSize(1100, 600);
    glutCreateWindow("Rumah & 5 Objek Lainnya");
    init();
    glutDisplayFunc(isi);
    glutMainLoop();
}