#include <iostream>
using namespace std;

// Class definition
class Rectangle {
private:
    double length;
    double breadth;

public:
    // Constructor to initialize the rectangle
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    // Setter methods to modify length and breadth
    void setLength(double l) {
        if (l > 0) {
            length = l;
        } else {
            cout << "Length should be positive!" << endl;
        }
    }

    void setBreadth(double b) {
        if (b > 0) {
            breadth = b;
        } else {
            cout << "Breadth should be positive!" << endl;
        }
    }

    // Getter methods to retrieve length and breadth
    double getLength() {
        return length;
    }

    double getBreadth() {
        return breadth;
    }

    // Method to calculate area
    double area() {
        return length * breadth;
    }

    // Method to calculate perimeter
    double perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rect(5.0, 3.0);

    // Display initial dimensions
    cout << "Length: " << rect.getLength() << endl;
    cout << "Breadth: " << rect.getBreadth() << endl;

    // Calculate and display area and perimeter
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    // Modify the dimensions
    rect.setLength(10.0);
    rect.setBreadth(7.0);

    // Display modified dimensions
    cout << "\nAfter modification:" << endl;
    cout << "Length: " << rect.getLength() << endl;
    cout << "Breadth: " << rect.getBreadth() << endl;

    // Recalculate and display area and perimeter
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    return 0;
}
