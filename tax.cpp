#include <iostream>
using namespace std;
int main()
{
    int sal,tax;
    cout<<"Enter your salary ";
    cin>>sal;
    if(sal<50000)
        tax=sal*(.03);
    else if((sal>50000)&&(sal<=100000))
        tax=sal*(.07);
    else if((sal>100000)&&(sal<=150000))
        tax=sal*(.10);
    else if((sal>150000)&&(sal<=200000))
        tax=sal*(.15);
    else if((sal>200000)&&(sal<=250000))
        tax=sal*(.20);
    else if((sal>250000)&&(sal<=300000))
        tax=sal*(.23);
    else if(sal>300000)
        tax=sal*(.25);
    cout<<"Your IncomeTax is= "<<tax<<endl;
    return 0;
}
