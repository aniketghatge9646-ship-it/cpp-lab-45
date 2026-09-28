#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    double basicSalary;
    double HRA;
    double DA;

public:
    Employee(int id, string name, double basic, double hra, double da) {
        employeeID = id;
        employeeName = name;
        basicSalary = basic;
        HRA = hra;
        DA = da;
    }

    double calculateGrossSalary() {
        return basicSalary + HRA + DA;
    }
    void displayDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID   : " << employeeID << endl;
        cout << "Employee Name : " << employeeName << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "HRA           : " << HRA << endl;
        cout << "DA            : " << DA << endl;
        cout << "Gross Salary  : " << calculateGrossSalary() << endl;
    }

    ~Employee() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Employee emp(6, "prem", 5, 2, 3);
    emp.displayDetails();

    return 0;
}
