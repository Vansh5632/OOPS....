#include <iostream>
#include <string>
using namespace std;

// Class definition
class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Constructor to initialize the Car object
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    // Getter methods to access data members
    string getBrand() { return brand; }
    string getModel() { return model; }
    int getYear() { return year; }

    // Method to display car details
    void displayDetails() {
        cout << "Car Details: " << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Step 1: Create objects of the Car class
    Car car1("Toyota", "Corolla", 2020);
    Car car2("Tesla", "Model 3", 2022);

    // Step 2: Access and display details using methods
    cout << "Details of Car 1:" << endl;
    car1.displayDetails();

    cout << "\nDetails of Car 2:" << endl;
    car2.displayDetails();

    // Step 3: Access specific data members using getters
    cout << "\nCar 1 Brand: " << car1.getBrand() << endl;
    cout << "Car 2 Model: " << car2.getModel() << endl;

    return 0;
}
