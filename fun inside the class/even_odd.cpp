#include<iostream>
using namespace std;
class number
{
    int num; 
    public:
    void input()
    {
        cout<<"eneter a number:";
        cin>>num;
    } 
    void check()
    {
        if(num %2 ==0)
        {
            cout<<"Number is Even:"<<num;
        }
        else
        {
            cout<<"Number is odd:"<<num;
        }
    }
};
int main()
{
    number oe;
oe.input();
oe.check();
return 0;
}
