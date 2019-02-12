// firstopengl.cpp : Defines the entry point for the console application.
//

#include "pch.h"
//#include <gl/glut.h>
//#include <thread>
//
//void display(void)
//{
//	for (int i = 0; i < 360; i++) {
//
//		glClear(GL_COLOR_BUFFER_BIT);
//		glMatrixMode(GL_MODELVIEW);
//		glLoadIdentity();
//
//		glPushMatrix();
//		std::this_thread::sleep_for(std::chrono::milliseconds(10));
//		//glRotatef(i, 0.5, 0.5, 1.0);
//		glPushMatrix();
//		glRotatef(i, 0.0, 0.0, i);
//		glBegin(GL_QUADS);
//
//		glColor3f(1.0, 0.0, 0.5);
//
//		glVertex3f(0.6, 0.1, 0.5);
//		glVertex3f(0.7, 0.1, 0.5);
//		glVertex3f(0.7, -0.1, 0.5);
//		glVertex3f(0.6, -0.1, 0.5);
//
//		glColor3f(1.0, 0.5, 0.5);
//
//		glVertex3f(0.6, 0.1, -0.5);
//		glVertex3f(0.7, 0.1, -0.5);
//		glVertex3f(0.7, -0.1, -0.5);
//		glVertex3f(0.6, -0.1, -0.5);
//
//		glColor3f(0.5, 0.0, 0.5);
//
//		glVertex3f(0.6, 0.1, -0.5);
//		glVertex3f(0.7, 0.1, -0.5);
//		glVertex3f(0.7, 0.1, 0.5);
//		glVertex3f(0.6, 0.1, 0.5);
//
//		glColor3f(0.0, 0.0, 0.5);
//
//		glVertex3f(0.6, -0.1, -0.5);
//		glVertex3f(0.7, -0.1, -0.5);
//		glVertex3f(0.7, -0.1, 0.5);
//		glVertex3f(0.6, -0.1, 0.5);
//
//		glColor3f(1.0, 0.0, 0.0);
//
//		glVertex3f(0.6, 0.1, -0.5);
//		glVertex3f(0.6, 0.1, 0.5);
//		glVertex3f(0.6, -0.1, 0.5);
//		glVertex3f(0.6, -0.1, -0.5);
//
//		glColor3f(0.0, 0.5, 0.5);
//
//		glVertex3f(0.7, 0.1, -0.5);
//		glVertex3f(0.7, 0.1, 0.5);
//		glVertex3f(0.7, -0.1, 0.5);
//		glVertex3f(0.7, -0.1, -0.5);
//		glEnd();
//		glPopMatrix();
//
//		glPopMatrix();
//
//		glFlush();
//	}
//}
//
//int _tmain(int argc, CHAR * argv[])
//{
//	glutInit(&argc, argv);
//	glutInitWindowSize(512, 512);
//	glutCreateWindow("Window Creation");
//	glutDisplayFunc(display);
//	glutMainLoop();
//	return 0;
//}

