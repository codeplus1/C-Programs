//copy constructor
#include<iostream>
using namespace std;
class rectangle
{
   int len,br;
   public:
   rectangle(int l,int b)
   {
       len=l;
       br=b;
   }
   rectangle(rectangle &ob)
   {
       len=ob.len;
       br=ob.br;
   }
   void disparea()
   {
       cout<<"area of rectangle="<<len*br<<endl;
   }

};
int main()
{
    
    rectangle s1(5,6);
    rectangle s2(s1);
    rectangle s3=s1;
    s1.disparea();
    s2.disparea();
    s3.disparea();
    return 0;
}