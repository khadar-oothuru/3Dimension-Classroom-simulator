// window.h
#ifndef WINDOW_H
#define WINDOW_H

#include <GL/glut.h>

class Window {
public:
    void drawWindow1();
    void drawWindow2();
    void drawWindowSill();

    void drawWindow1WithDoor();
    void drawWindow2WithDoor();
    void drawWindowSillWithDoor();
};

#endif  // WINDOW_H
