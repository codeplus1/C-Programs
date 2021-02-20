#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"enter 5 num:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>num;
        sum=sum+num;
    }
    cout<<"sum of 5 num = "<<sum<<endl;
    return 0;
    
}