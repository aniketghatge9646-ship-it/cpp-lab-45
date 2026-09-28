#include <iostream>
using namespace std;
class shape{
public:
 float area;
    shape(){
        area = 0;
    }
    shape(int a, int b){
        area = a * b;
    } 
    void disp(){
        cout<< area<< endl;
    }
};
int main(){
    shape o;
    shape o2( 10, 20);
    o.disp();
    o2.disp();
    return 1;
}  