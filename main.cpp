#include <iostream>
#include <eigen3/Eigen/Dense>
#include "graphics.h"
#include "mathRB.h"


int main(int argc, char **argv) {
    int mode=0;
    glutInit(&argc, argv);            // Initialize GLUT
    glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode
    glutInitWindowSize(640, 480);   // Set the window's initial width & height
    glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
    glutCreateWindow("Scene");          // Create window with the given title
    cout << "Press - 1: cube\n Press -2 : sphere\n";
    cin >> mode;
    if (mode == 2) {
        glutDisplayFunc(display_sp);
    } else {
        glutDisplayFunc(display);
    }   // Register callback handler for window re-paint event
    glutReshapeFunc(reshape);       // Register callback handler for window re-size event
    initGL(mode);                       // Our own OpenGL initialization
    glutMainLoop();                 // Enter the infinite event-processing loop


    return 0;
}