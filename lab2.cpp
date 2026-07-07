#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    int rows = 8;
    int cols = 8;
    float size = 0.2f;
    float x_start = -1.0f;
    float y_start = -1.0f;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if ((i + j) % 2 == 0)
                glColor3f(1.0f, 1.0f, 1.0f);
            else
                glColor3f(0.5f, 0.0f, 0.5f);
    
            float X = x_start + j * size;
            float Y = y_start + i * size;

            glBegin(GL_QUADS);
                glVertex2f(X, Y);
                glVertex2f(X + size, Y);
                glVertex2f(X + size, Y + size);
                glVertex2f(X, Y + size);
            glEnd();
        }
    }

    glFlush();
}

void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1, 1, -1, 1);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Chessboard");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}


