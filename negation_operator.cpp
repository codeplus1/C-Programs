#include <iostream>
class negative
{
    int x;
    public:
    negative(int a)
    {
        x=a;
    }
    void operator--()
    {
        x = --x;
    }
    void display()
    {
        cout<<"X: "<<x<<endl;
    }
};
int main()
{
    clrscr();
    negative n(10);
    --n;
    n.display();
    return 0;
}