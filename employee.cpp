#include<iostream>
using namespace std;
class employee
{
    char name[20];
    int empid;
    float salary,netsal,tax;
    public:
    void getdata();
    void calculate();
    void display();
};
void employee::getdata()
{
    cout<<"Enter employee Number"<<endl;
    cin>>empid;
    cout<<"Enter Salary"<<endl;
    cin>>salary;
}
void employee::calculate()
{
    if (salary<10000)
    {
        tax=salary*0.05;
        netsal=salary-tax;
    }else{
        tax=salary*0.1;
        netsal=salary-tax;
    }
}
void employee::display()
{
    cout<<"Employee id"<<empid<<endl;
    cout<<"Employee Name"<<name<<endl;
    cout<<"Employee salary "<<salary<<endl;
    cout<<"Net-Salary "<<netsal<<endl;
}
int main()
{
    int i;

    employee e[5];
    
    for ( i = 0; i <5; i++)
    {
       cout<<"Detail of employee is "<<i+1<<endl;
    e[i].getdata();
    e[i].calculate();
    e[i].display(); 
    }
    return 0;
    

}

