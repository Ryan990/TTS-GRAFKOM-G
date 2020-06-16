#include <iostream>
#include <GL/freeglut.h>

void KopiPecah() {
	int x = 0;
	int y = 0;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	for (int i = 0; i <= 5 ; i++ ) {
		x = 0;
		for (int r = 0; r <= 5; r++) {
			glBegin(GL_POLYGON);
			glVertex2f(10 + x, 490 + y); //A     *#
			glVertex2f(40 + x, 460 + y); //B     ##
			glVertex2f(32 + x, 460 + y); //B1
			glVertex2f(26 + x, 461 + y); //B2
			glVertex2f(15 + x, 466 + y); //C
			glVertex2f(10 + x, 475 + y); //C1
			glEnd();

			glBegin(GL_POLYGON);
			glVertex2f(14 + x, 491 + y); //A      *#
			glVertex2f(43 + x, 463 + y); //B	  ##
			glVertex2f(43 + x, 473 + y); //B1
			glVertex2f(41 + x, 480 + y); //B2
			glVertex2f(39 + x, 485 + y); //C
			glVertex2f(30 + x, 490 + y); //C1
			glVertex2f(25 + x, 491 + y); //C2
			glEnd();

			glPointSize(5);
			glBegin(GL_POINTS);
			glVertex2f(48 + x, 455 + y); // Titik Tengah
			glVertex2f(4 + x, 495 + y); // Titik Atas Kiri
			glVertex2f(96 + x, 495 + y); // Titik Atas Kanan
			glVertex2f(4 + x, 413 + y); // Titik Bawah Kiri
			glVertex2f(96 + x, 413 + y); // Titik Bawah Kanan
			glEnd();

			glBegin(GL_POLYGON);
			glVertex2f(56 + x, 447 + y); //A     ##
			glVertex2f(86 + x, 417 + y); //B     #*
			glVertex2f(76 + x, 417 + y); //B1
			glVertex2f(72 + x, 418 + y); //B2
			glVertex2f(61 + x, 423 + y); //C
			glVertex2f(56 + x, 432 + y); //C1
			glEnd();

			glBegin(GL_POLYGON);
			glVertex2f(58 + x, 449 + y); //A      ##
			glVertex2f(87 + x, 421 + y); //B	  #*
			glVertex2f(87 + x, 431 + y); //B1
			glVertex2f(85 + x, 438 + y); //B2
			glVertex2f(83 + x, 443 + y); //C
			glVertex2f(74 + x, 448 + y); //C1
			glVertex2f(69 + x, 449 + y); //C2
			glEnd();

			glBegin(GL_POLYGON);
			glVertex2f(39 + x, 450 + y); //A     ##
			glVertex2f(10 + x, 420 + y); //B     *#
			glVertex2f(10 + x, 431 + y); //B1
			glVertex2f(11 + x, 433 + y); //B2
			glVertex2f(17 + x, 445 + y); //C
			glVertex2f(27 + x, 450 + y); //C1
			glEnd();

			glBegin(GL_POLYGON);
			glVertex2f(44 + x, 447 + y); //A     ##
			glVertex2f(14 + x, 418 + y); //B     *#
			glVertex2f(21 + x, 418 + y); //B1
			glVertex2f(32 + x, 421 + y); //B2
			glVertex2f(40 + x, 427 + y); //C
			glVertex2f(44 + x, 437 + y); //C1
			glEnd();

			glBegin(GL_POLYGON);
			glVertex2f(83 + x, 490 + y); //A     #*
			glVertex2f(54 + x, 460 + y); //B     ##
			glVertex2f(54 + x, 471 + y); //B1
			glVertex2f(55 + x, 473 + y); //B2
			glVertex2f(61 + x, 485 + y); //C
			glVertex2f(71 + x, 490 + y); //C1
			glEnd();

			glBegin(GL_POLYGON);
			glVertex2f(88 + x, 487 + y); //A     #*
			glVertex2f(58 + x, 458 + y); //B     ##
			glVertex2f(65 + x, 458 + y); //B1
			glVertex2f(76 + x, 461 + y); //B2
			glVertex2f(86 + x, 467 + y); //C
			glVertex2f(88 + x, 477 + y); //C1
			glEnd();
			
			x += 92;
			
		}
		y -= 81;
	}
	glutSwapBuffers();
}

void myinit() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(300, 0);
	glutCreateWindow("Ryan R. Siematauw 672018096");
	glutDisplayFunc(KopiPecah);
	glEnable(GL_POINT_SMOOTH);
	myinit();
	glutMainLoop();

	return 0;
}
