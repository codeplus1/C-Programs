#include<iostream>
#include<string.h>
using namespace std;
class first{
public:
int x;
first()
{

}
first (int a)
{
    x = a;
}
int operator > (first f)
{
    if(x>f.x)
    return 1;
    else 
    return 0;
}
};

int main()
{
    first ob(200), ob1(10);
    if (ob>ob1)
    cout<<"The Greater NUmber is: "<<ob.x;
    else
    cout<<"The Greater Number is: "<<ob1.x;
    return 0;
}
