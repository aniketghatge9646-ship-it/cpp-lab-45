#include<iostream>
using namespace std;
class complex{
    private:
    int real,imag;
    public:
    complex(int r=0,int i=0):real(r),imag(i){}
    complex add(const complex &x1,complex &x2){
           complex x3;
           x3.real=x1.real+x2.real;
           x3.imag=x1.imag+x2.imag;
           return x3;
    }

    complex subtract(const complex &c){
        return complex(real-c.real,imag-c.imag);
    }

    void display()const{
        cout<<real<<"+i"<<imag<<endl;
    }
};
int main(){
    complex c1(4,5),c2(8,9);
    complex sum=c2.add(c1,c2);
    complex diff=c1.subtract(c2);
    cout<<"Frist Complex Number:";c1.display();
    cout<<"Second Complex Number:";c2.display();
    cout<<"Addition:";sum.display();
    cout<<"subtraction:";diff.display();
    return 0;
}