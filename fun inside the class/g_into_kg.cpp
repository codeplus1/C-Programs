#include<iostream>
using namespace std;
class conversion
{
    public:
    float grams,kg;
    void convertkg()
    {
        cout<<"Enter Grams"<<endl;
        cin>>grams;
        kg=grams/1000;
        cout<<"Total kilograms ="<<kg<<endl;

    }
};
int main()
{
    conversion ob;
    ob.convertkg();
    return 0;
}