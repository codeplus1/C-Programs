#include<iostream>
using namespace std;
class area
{
    public:
    int l,b;
    void getlb()
{
    l=10;
    b=20;
}
void disp()
{
    cout<<"Area of rectangle ="<<l*b<<endl;
}
};
int main()
{
    area ob;
    ob.getlb();
    ob.disp();
    return 0;
}