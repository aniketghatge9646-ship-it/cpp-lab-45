#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    string name;
    int rollNo;
    float marks;

    public:
    void intputDetails() {
        cout<<"Enter Student Name:";
        getline(cin>>ws,name);
        cout<<"Enter Roll Number:";
        cin>>rollNO;
        cout<<"Enter Marks:";
        cin>>marks;
    }
    void displayDetails() const {
    cout<<"\n-----Student Details----\n";
    cout<<"Name:"<<name<<endl;
    cout<<"Roll No.:"<<rollno<<end;
    }
};
int main() {
    student s,s1,s2;
    s.inputDetails();
    s.displayDetails();
    s1.inputDetails();
    s1.displayDetails();
    s2.inputDetails();
    s2.displayDetails();
    return0;
}
