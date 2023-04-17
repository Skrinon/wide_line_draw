#include <GL/glew.h>
#include <GLFW/glfw3.h>


int main()
{
    // Инициализация GLFW
    glfwInit();

    // Создание окна
    GLFWwindow* window = glfwCreateWindow(640, 480, "OpenGL Window", NULL, NULL);
    glfwMakeContextCurrent(window);

    // Инициализация GLEW
    glewInit();

    // Очистка экрана и установка цвета
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    // Установка матрицы проекции
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 640, 0, 480, -1, 1);

    // Установка матрицы моделирования-вида
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // Рисование линии
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2i(0,240);
    glVertex2i(640, 240);
    glEnd();


    // Отображение результата
    glfwSwapBuffers(window);

    // Ожидание закрытия окна
        while (!glfwWindowShouldClose(window))
    {
            glfwPollEvents();
    }

    // Очистка GLFW
    glfwTerminate();

    return 0;
}
