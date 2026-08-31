#include<iostream>
using namespace std;
class car{
    private:
    int car_ID;
    float car_SPEED;
    int car_WT;
    
    public:
    // Default Constructor
    car() {
        car_ID = 0;
        car_SPEED = 0.0;
        car_WT = 0;
        
    void getdata(){
        cout<<"Enter car_ID";
        cin>>car_ID;
        cout<<"Enter car_SPEED";
        cin>>car_SPEED;
        cout<<"Enter car_WT";
        cin>>car_WT;
   }
    void putdata(){
        cout<<car_ID<<endl;
        cout<<car_SPEED<<endl;
        cout<<car_WT<<endl;
     }

};
int main(){
    car c4,c5,c3,c2,c1;
    c3.getdata();
    c3.putdata();
    c2.getdata();
    c2.putdata();
    c1.getdata();
    c1.putdata();
    c4.getdata();
    c4.putdata();
    c5.getdata();
    c5.putdata();
}