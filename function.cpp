#include<iostream>
using namespace std;
int area(int);
int area(int,int);
int area(float);
int main()
{
    cout<<"area for  side=5"<<area(5);
    cout<<"area for length=5,breath=10"<<area(5,10);
    cout<<"area for circle"<<area(3.5f);
    return0;
}
int area(int side)
{
    return side*side;
}
int area(inth,intb)
{
    return h*b;
}
area(float radius)
{
    return(3.14*radius*radius);
}
