#include<iostream>
using namespace std;
class sum
{
    public:
    int num, addition=0;
    void calcsum()
    {
        cout<<"Enter any five number"<<endl;
        
        for (int i = 0; i<5; i++)
        {
            cin>>num;
            addition=num+addition;
        }
        cout<<"Total number of Addition ="<<addition;
        
    }
    
};
int main()
{
    sum ob;
    ob.calcsum();
    return 0;
}