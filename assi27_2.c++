#include<iostream>
using namespace std;
class increment
{
    private:
        int a,b;
    public:
        void setdata(int x,int y)
        {
            a=x;
            b=y;
        }
        increment operator++()
        {
            increment temp;
            temp.a=a++;
            temp.b=b++;
            return temp;
        }
        increment operator--()
        {
            increment temp;
            temp.a=a--;
            temp.b=b--;
            return temp;
        }
        void showdata()
        {
            cout<<"a="<<a<<"  b="<<b<<endl;
        }
};
int main()
{
    increment i,i1,i2,i3;
    i.setdata(11,15);
    i1=++i;
    i2=--i;
    i3=++i;
    i.showdata();
    i1.showdata();
    i2.showdata();
    i3.showdata();
   
}