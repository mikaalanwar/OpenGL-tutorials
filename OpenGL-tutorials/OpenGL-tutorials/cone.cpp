#include "pch.h"
//#include <GL/glut.h>
//#include <iostream>
//#include <cmath>
//
//
///* Global variables */
//char title[] = "3D Shapes";
//
///* Initialize OpenGL Graphics */
//void initGL() {
//	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
//	glClearDepth(1.0f);                   // Set background depth to farthest
//	glEnable(GL_DEPTH_TEST);   // Enable depth testing for z-culling
//	glDepthFunc(GL_LEQUAL);    // Set the type of depth-test
//	glShadeModel(GL_SMOOTH);   // Enable smooth shading
//	// glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  // Nice perspective corrections
//}
//
///* Handler for window-repaint event. Called back when the window first appears and
//whenever the window needs to be re-painted. */
//void display() {
//	for (float i = 0; i <= 360; i += 1.0) {
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffers
//		glMatrixMode(GL_MODELVIEW);     // To operate on model-view matrix  
//		// Render a color-cube consisting of 6 quads with different colors
//		glLoadIdentity();                 // Reset the model-view matrix
//		glTranslatef(0.0f, 0.0f, -7.0);  // Move into the screen
//		glRotatef(i++, 0.5, 1.0, 0.0);
//
//		glColor3f(1.0, 0.0, 0.5);
//
//		for (float i = 0; i <= 360; i += 0.01) {
//			glBegin(GL_LINES);
//
//
//			glVertex3f(0.5*cos(i), 0.5*sin(i), 1.0);
//			glVertex3f(0.0, 0.0, -1.0);
//			glEnd();
//		}
//
//		glutSwapBuffers();  // Swap the front and back frame buffers (double buffering)
//	}
//}
//
///* Handler for window re-size event. Called back when the window first appears and
//whenever the window is re-sized with its new width and height */
//void reshape(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
//	// Compute aspect ratio of the new window
//	if (height == 0) height = 1;                // To prevent divide by 0
//	GLfloat aspect = (GLfloat)width / (GLfloat)height;
//
//	// Set the viewport to cover the new window
//	glViewport(0, 0, width, height);
//
//	// Set the aspect ratio of the clipping volume to match the viewport
//	glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
//	glLoadIdentity();             // Reset
//	// Enable perspective projection with fovy, aspect, zNear and zFar
//	gluPerspective(45.0f, aspect, 0.1f, 100.0f);
//}
//
///* Main function: GLUT runs as a console application starting at main() */
//int main(int argc, char** argv) {
//	glutInit(&argc, argv);            // Initialize GLUT
//	glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode   
//	glutInitWindowSize(640, 480);   // Set the window's initial width & height
//	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner  
//	glutCreateWindow(title);          // Create window with the given title
//	glutDisplayFunc(display);       // Register callback handler for window re-paint event
//	glutReshapeFunc(reshape);       // Register callback handler for window re-size event
//	initGL();                       // Our own OpenGL initialization
//	glutMainLoop();                 // Enter the infinite event-processing loop
//	return 0;
//}
