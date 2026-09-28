#include <iostream>
#include <string>
using namespace std;

// Base Class
class Customer
{
protected:
    string name;

public:
    Customer()
    {
        name = "Unknown";
    }

    Customer(string n)
    {
        name = n;
    }

    void showCustomer()
    {
        cout << "Customer Name: " << name << endl;
    }
};

// Product Class
class Product
{
private:
    int id;
    string productName;
    float price;

    // Static data member
    static int totalProducts;

public:

    // Default Constructor
    Product()
    {
        id = 0;
        productName = "No Product";
        price = 0;
        totalProducts++;
    }

    // Parameterized Constructor
    Product(int i, string n, float p)
    {
        id = i;
        productName = n;
        price = p;
        totalProducts++;
    }

    // Constructor Overloading
    Product(int i, string n)
    {
        id = i;
        productName = n;
        price = 0;
        totalProducts++;
    }

    // Member Function
    void displayProduct()
    {
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "----------------------" << endl;
    }

    // Static Function
    static void showTotalProducts()
    {
        cout << "Total Products: " << totalProducts << endl;
    }

    // Function to return price
    float getPrice()
    {
        return price;
    }
};

// Definition of static data member
int Product::totalProducts = 0;


// Derived Class - Inheritance
class PremiumCustomer : public Customer
{
private:
    int discount;

public:
    PremiumCustomer(string n, int d) : Customer(n)
    {
        discount = d;
    }

    void showPremiumCustomer()
    {
        cout << "Premium Customer: " << name << endl;
        cout << "Discount: " << discount << "%" << endl;
    }
};


int main()
{
    cout << "===== ONLINE SHOPPING WEBSITE =====" << endl;
    cout << endl;

    // Array of Objects
    Product products[3] =
    {
        Product(101, "Mobile", 15000),
        Product(102, "Headphones", 2000),
        Product(103, "Smart Watch", 3000)
    };

    // Display products
    cout << "Available Products:" << endl;
    cout << endl;

    for(int i = 0; i < 3; i++)
    {
        products[i].displayProduct();
    }

    // Static function
    Product::showTotalProducts();

    cout << endl;

    // Customer Object
    Customer c1("Aniket");
    c1.showCustomer();

    cout << endl;

    // Premium Customer Object
    PremiumCustomer pc("Rahul", 10);
    pc.showPremiumCustomer();

    cout << endl;

    cout << "Order placed successfully!" << endl;
    cout << "Thank you for shopping." << endl;

    return 0;
}
