#include <iostream>

class Rectangle {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const {
        return width * height;
    }

    double perimeter() const {
        return 2 * (width + height);
    }

    bool isSquare() const {
        return width == height;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    std::cout << "Area: " << rect.area() << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;
    std::cout << "Is square? " << (rect.isSquare() ? "Yes" : "No") << std::endl;
    return 0;
}