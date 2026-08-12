#include <GL/glut.h>

// Function called every time the window needs to be repainted
void displayMe(void) {
    // Clear the screen buffer with the predefined background color
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Draw a basic green 2D polygon (square)
    glBegin(GL_POLYGON);
        glColor3f(0.0f, 1.0f, 0.0f); // Set color to Green
        glVertex3f(-0.5f, -0.5f, 0.0f);
        glVertex3f(0.5f, -0.5f, 0.0f);
        glVertex3f(0.5f, 0.5f, 0.0f);
        glVertex3f(-0.5f, 0.5f, 0.0f);
    glEnd();
    
    // Flush the graphics pipeline to render onto the screen
    glFlush();
}

int main(int argc, char** argv) {
    // Initialize GLUT and context
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    
    // Configure window settings
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Mesa 3D OpenGL Example");
    
    // Register the display callback function
    glutDisplayFunc(displayMe);
    
    // Enter the infinite event-processing loop
    glutMainLoop();
    return 0;
}
