#include<iostream>
#include<cstring>
using namespace std;
class test
{
    private:
    int roll;
    char name[15];
    public:
    int mark;
    protected:
    char hobby[10];
    public:
    void getdata()
    {
        cout<<"Enter roll and name = "<<endl;
        cin>>roll>>name;
        cout<<"Roll Number: "<<roll<<endl;
        cout<<"name : "<<name<<endl;
    }
};

class sub :public test //Access Protected member
{
public:
void show()
{
    strcpy(hobby,"dancing"); //hobby is protected in base class test
    cout<<hobby<<endl;
}
};
int main()
{
    
    test t;
   t.mark=60; //direct accessing public member of test class
   cout<<"Details of student"<<endl;
   t.getdata();//assessing private member roll and name by public memeber of test class
       cout<<"mark ="<<t.mark<<endl;
       sub s;
       s.show();

   return 0;

}