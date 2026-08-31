#include<iostream>
using namespace std;
class x{
private:
a=10;
friend class y;
};
class y{
    void show(x obj){
        cout<<obj.a<<endl;
    }
};
int main()
{
    x a;
    a.show;
}