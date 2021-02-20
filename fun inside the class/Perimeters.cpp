#include<iostream>
using namespace std;
class perimeter
{
    public:
    float r,peri;
    void calcperi()
    {
        cout<<"Eneter Radius"<<endl;
        cin>>r;
        peri=2*3.14*r;
        cout<<"perimeter of circle ="<<peri<<endl;
    }
};
int main()
{
    perimeter ob;
    ob.calcperi();
    return 0;
}