#include<iostream>
using namespace std;
class numbers 
{
    private:
        int x,y,z;
    public:
        void setdata(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }
        numbers operator-()
        {
            numbers temp;
            temp.x=-x;
            temp.y=-y;
            temp.z=-z;
            return temp;
        }
        void showdata()
        {
            cout<<"x="<<x<<"  y="<<y<<" z="<<z<<endl;
        }
};

int main()
{
    numbers n1,n2;
    n1.setdata(5,7,12);
    n2=-n1;
    n1.showdata();
    n2.showdata();
}