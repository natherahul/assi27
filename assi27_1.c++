#include<iostream>
using namespace std;
class complex 
{
    private:
        int a,b;
    public:
        complex()
        {
            a=0;
            b=0;
        }
        void setdata(int x,int y)
        {
            a=x;
            b=y;
        }
        complex operator+(complex c)
        {
            complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
        complex operator-(complex c)
        {
            complex temp;
            temp.a=a-c.a;
            temp.b=b-c.b;
            return temp;
        }
        complex operator*(complex c)
        {
            c.a=a*c.a;
            c.b=a*c.b;
            return c;
        }
        complex operator==(complex c)
        {
            complex temp;
            temp.a=a;
            temp.b=b;
            return temp;
        }
        void showdata()
        {
            cout<<"a="<<a<<"  b="<<b<<endl;
        }
};
int main()
{
    complex c1,c2,c3,c4,c5,c6;
    c1.setdata(4,9);
    c2.setdata(2,5);
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c6=c1==c2;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    c4.showdata();
    c5.showdata();
    c6.showdata();
}