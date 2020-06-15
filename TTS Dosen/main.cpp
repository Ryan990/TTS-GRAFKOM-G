#include <iostream>
#include <GL/freeglut.h>

void KopiPecah() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);

		glBegin(GL_POLYGON);
		glVertex2f(10, 490); //A     *#
		glVertex2f(40, 460); //B     ##
		glVertex2f(32, 460); //B1
		glVertex2f(26, 461); //B2
		glVertex2f(15, 466); //C
		glVertex2f(10, 475); //C1
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(14, 491); //A      *#
		glVertex2f(43, 463); //B      ##
		glVertex2f(43, 473); //B1
		glVertex2f(41, 480); //B2
		glVertex2f(39, 485); //C
		glVertex2f(30, 490); //C1
		glVertex2f(25, 491); //C2
		glEnd();

		glPointSize(5);
		glBegin(GL_POINTS);
		glVertex2f(48, 455); // Titik Tengah
		glVertex2f(7, 495); // Titik Atas Kiri
		glVertex2f(92, 495); // Titik Atas Kanan
		glVertex2f(7, 413); // Titik Bawah Kiri
		glVertex2f(92, 413); // Titik Bawah Kanan
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(56, 447); //A     ##
		glVertex2f(86, 417); //B     #*
		glVertex2f(76, 417); //B1
		glVertex2f(72, 418); //B2
		glVertex2f(61, 423); //C
		glVertex2f(56, 432); //C1
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(58, 449); //A      ##
		glVertex2f(87, 421); //B      #*
		glVertex2f(87, 431); //B1
		glVertex2f(85, 438); //B2
		glVertex2f(83, 443); //C
		glVertex2f(74, 448); //C1
		glVertex2f(69, 449); //C2
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(39, 450); //A     ##
		glVertex2f(10, 420); //B     *#
		glVertex2f(10, 431); //B1
		glVertex2f(11, 433); //B2
		glVertex2f(17, 445); //C
		glVertex2f(27, 450); //C1
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(44, 447); //A     ##
		glVertex2f(14, 418); //B     *#
		glVertex2f(21, 418); //B1
		glVertex2f(32, 421); //B2
		glVertex2f(40, 427); //C
		glVertex2f(44, 437); //C1
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(83, 490); //A     #*
		glVertex2f(54, 460); //B     ##
		glVertex2f(54, 471); //B1
		glVertex2f(55, 473); //B2
		glVertex2f(61, 485); //C
		glVertex2f(71, 490); //C1
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(88, 487); //A     #*
		glVertex2f(58, 458); //B     ##
		glVertex2f(65, 458); //B1
		glVertex2f(76, 461); //B2
		glVertex2f(86, 467); //C
		glVertex2f(88, 477); //C1
		glEnd();

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
