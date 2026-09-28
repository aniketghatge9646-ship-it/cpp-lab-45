#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;

public:
    // Default constructor
    Box() {
        length = 0;
        width = 0;
        height = 0;
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        cout << "Parameterized constructor called."   
    // Calculate volume
    double calculateVolume() {
        return length * width * height;
    }

    // Display object information
    void display() {
        cout << "Length : " << length << endl;
        cout << "Width  : " << width << endl;
        cout << "Height : " << height << endl;
        cout << "Volume : " << calculateVolume() << endl;
    }

    // Destructor
    ~Box() {
        cout << "Destructor called. Box object destroyed." << endl;
    }
};

int main() {
    // Using default constructor
    Box box1;
    cout << "\nBox 1:" << endl;
    box1.display();

    // Using parameterized constructor
    Box box2(10, 5, 4);
    cout << "\nBox 2:" << endl;
    box2.display();

    // Using copy constructor
    Box box3(box2);
    cout << "\nBox 3 (Copied from Box 2):" << endl;
    box3.display();

    cout << "\nProgram is ending..." << endl;

    return 0;
}

