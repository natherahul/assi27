#include<iostream>
using namespace std;
class complex 
{
    private:
        int a,b;
    public:
        void setdata(int x,int y)
        {
            a=x;
            b=y;
        }
        void showdata()
        {
            cout<<"a="<<a<<" b="<<b<<endl;
        }
        friend complex operator+(complex x,complex y);

};
complex operator+(complex x,complex y)
{
    complex temp;
    temp.a=x.a+y.a;
    temp.b=x.b+y.b;
    return temp;
} 
int main()
{
    complex c1,c2,c3;
    c1.setdata(11,25);
    c2.setdata(12,19);
    c3=c1+c2;
    c1.showdata();
    c2.showdata();
    c3.showdata();
}