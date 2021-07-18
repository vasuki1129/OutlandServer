#include "window.h"
#include <windows.h>  // For MS Windows
#include "enginecore.h"
#include <freeglut/include/GL/glut.h>  // GLUT, includes glu.h and gl.h
#include <glm/glm/glm.hpp>
#include <thread>


using namespace std;

 /* Handler for window-repaint event. Call back when the window first appears and
	whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer

		//Render the current state of the system
		

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
//int main(int argc, char** argv) {
	
//	thread displayThread(run, argc, argv);
//	displayThread.join();
//	return 0;
//}

void run(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();
}