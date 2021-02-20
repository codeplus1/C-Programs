#include<iostream>
using namespace std;
class area
{
    public:
    int l,b,ar;
    void calcarea()
    {
        cout<<"enter len and breadth"<<endl;
        cin>>l>>b;
        ar=l*b;
        cout<<"area of rectangle ="<<ar<<endl;
    }

};
int main()
{
    
    area ob;
    ob.calcarea();
    return 0;
}