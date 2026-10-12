#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inch;

    // Default constructor
    Distance()
    {
        this->feet = 0;
        this->inch = 0;
    }

    // Parameterized constructor
    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }

    // Overloading (+) operator
    // Call by reference
    Distance operator+(Distance &d2)
    {
        Distance d3;

        d3.feet = this->feet + d2.feet;
        d3.inch = this->inch + d2.inch;

        // Convert inches to feet if inches >= 12
        if (d3.inch >= 12)
        {
            d3.feet = d3.feet + (d3.inch / 12);
            d3.inch = d3.inch % 12;
        }

        return d3;
    }

    // Function to display distance
    void display()
    {
        cout << "Distance = " << feet << " feet "
             << inch << " inches" << endl;
    }
};

int main()
{
    Distance d1(5, 8);
    Distance d2(3, 7);

    Distance d3;

    d3 = d1 + d2;

    cout << "First Distance: ";
    d1.display();

    cout << "Second Distance: ";
    d2.display();

    cout << "After Addition: ";
    d3.display();

    return 0;
}
