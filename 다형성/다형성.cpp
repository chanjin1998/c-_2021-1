#include <iostream>

using namespace std;

class Shape {
protected:
    int x, y;
public:
    void setOrigin(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void draw() {
        cout << "Shape ( " << x << "," << y << ")";
    }
};
class Rectangle : public Shape {
    int width, height;
public:
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }
    void draw() {
        Shape::draw();
        cout << "Rectangle : " << width << "x" << height;
    } 
};

class Circle : public Shape {
    int radius;
public :
    void setRadius(int r) { radius = r; }
    void draw() {
        Shape::draw();
        cout << "Circle : " << radius;
    }
};
int main()
{
    Rectangle r;
    r.setOrigin(1, 1);
    r.setWidth(3);
    r.draw();
    cout << endl;

    Circle c;
    c.setOrigin(4, 4);
    c.setRadius(5);
    c.draw();
    cout << endl;

    Shape* p_s;
    p_s = &r;
    p_s->draw(); cout << endl;
    p_s = &c;
    p_s->draw(); cout << endl;

    Shape& s1 = r;
    s1.draw(); cout << endl;
    Shape& s2 = c;
    s2.draw(); cout << endl;
}

 
