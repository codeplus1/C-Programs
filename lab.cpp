/*wap to prepare the invoice from the following data:
customer number ,customer name,customer address,date of sale,item no, item description,quantity sold,unit price of item,
discount percentage,sales tax percentage.
Note:Identify different classes possible here and make sure that the date
of sale becomes eqal to today's date as soon as object is created. Today's date
should be accepted from user,over in the begning.
*/
#include<iostream>
#include<stdio.h>
using namespace std;
class date
{
    public:
    int d,m,y;
    void getdate()
    {
        cout<<"Enter Day,month and Year:";
        cin>>d;
        cin>>m;
        cin>>y;
    }
    void putdate()
    {
        cout<<"Date of sale:"<<d<<"/"<<m<<"/"<<y<<"/"<<endl;
    }
};
class invo
{
    public:
    int cno;
    char cname[30];
    char add[50];
    int ino,qty;
    char desc[30];
    float price,disc_per,tax_per;
    void getinfo()
    {
        cout<<"Enter Customer number:"<<endl;
        cin>>cno;
        cout<<"Enter customer name:"<<endl;
        gets(cname);
        cout<<"Enter customer address:"<<endl;
        gets(add);
        cout<<"Enter item nmber:"<<endl;
        cin>>ino;
        cout<<"Enter Quantity:"<<endl;
        cin>>qty;
        cout<<"Enter Description:"<<endl;
        gets(desc);
        cout<<"Enter price:"<<endl;
        cin>>price;
        cout<<"Enter discount percentage:"<<endl;
        cin>>disc_per;
        cout<<"Enter tax percentage:"<<endl;
        cin>>tax_per;
    }
    void disp_info()
    {
        float disc,final,tax,tot;
        cout<<"Customer Number:"<<cno<<endl;
        cout<<"Customer name:"<<cname<<endl;
        cout<<"Customer address:"<<add<<endl;
        cout<<"Item number:"<<ino<<endl;
        cout<<"Quantity:"<<qty<<endl;
        cout<<"Description:"<<desc<<endl;
        cout<<"Price per unit:"<<price<<endl;
        cout<<"Discount Percentage:"<<disc_per<<endl;
        cout<<"Tax percentage:"<<tax_per<<endl;
        tot=price*qty;
        cout<<"Total price:"<<tot<<endl;
        disc=((tot*disc_per)/100);
        tax=((tot*tax_per)/100);
        final=((tot+tax))-disc;
        cout<<"final price:"<<final<<endl;
    }
};
int main()
{
    date d1;
    invo i1;
    d1.getdate();
    i1.getinfo();
    d1.putdate();
    i1.disp_info();
    return 0;
}