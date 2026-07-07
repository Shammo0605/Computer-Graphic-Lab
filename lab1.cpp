#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Roof
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.9, 0.0);
    glVertex3f(0.0, 0.9, 0.0);
    glVertex3f(-0.8, 0.2, 0.0);
    glVertex3f(0.8, 0.2, 0.0);
    glEnd();

    // House body
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(-0.6, -0.7, 0.0);
    glVertex3f(0.6, -0.7, 0.0);
    glVertex3f(0.6, 0.2, 0.0);
    glVertex3f(-0.6, 0.2, 0.0);
    glEnd();

    // Door
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.2, 0.0);
    glVertex3f(-0.1, -0.7, 0.0);
    glVertex3f(0.1, -0.7, 0.0);
    glVertex3f(0.1, -0.3, 0.0);
    glVertex3f(-0.1, -0.3, 0.0);
    glEnd();

    glutSwapBuffers();
}

void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0); // White background

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("House");

    init();

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}