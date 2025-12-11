#include <iostream>
using namespace std;

class Rectangle {
    float length;
    float breadth;
    float area_val;   // store the area
public:
    void get();
    void area();
    void disp();
};

void Rectangle::get() {
    cout << "Enter length and breadth: ";
    cin >> length >> breadth;
}

void Rectangle::area() {
    area_val = length * breadth;
}

void Rectangle::disp() {
    cout << "Area of the Rectangle = " << area_val << endl;
}

int main() {
    Rectangle W;
    W.get();
    W.area();
    W.disp();
    return 0;
}
