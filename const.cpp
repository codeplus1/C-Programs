#include<iostream>
using namespace std;
class arearect
{
    private:
    int l,b,area;
    public:
    arearect(int x,int y)
    {
        l=x;
        b=y;

    }
    arearect(arearect &ob)
    {
        l=ob.l;
        b=ob.b;
    }
    void disp()
    {
        area=l*b;
        cout<<"Area of rectangle ="<<area<<endl;
    }
    
};
int main()
{
    arearect s1(5,7);//parameterized
    arearect s2(s1);//copy constructor
    arearect s3(10,20);
    arearect s4=s3;
    s1.disp();
    s2.disp();
    s3.disp();
    s4.disp();
    return 0;
}