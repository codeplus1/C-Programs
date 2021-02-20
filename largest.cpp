#include<iostream>
using namespace std;
int main()
{
    int i,l,a[10],temp,j,k;
    cout<<"Enter 10 numbers\n";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    l=a[0];
    for(j=0;j<10;j++)
    {
        if(a[j]>1)
        {
            l=a[j];
        }
    }
    cout<<"Largest is"<<l;
    return 0;
}