#include<iostream>
using namespace std;
class Time
{
    private:
        int hrs,min,sec;
    public:
        Time()
        {
            hrs=0;
            min=0;
            sec=0;
        }
        void operator>>(Time c)
        {
            cout<<endl<<"------------------";
            cout<<"\nenter hours    :";
            cin>>hrs;
            cout<<"\nenter minutes  :";
            cin>>min;
            cout<<"\nenter seconds  :";
            cin>>sec;
        }
        void operator<<(Time c)
        {
            cout<<"\nhours    :"<<hrs;
            cout<<"\nminutes  :"<<min;
            cout<<"\nseconds  :"<<sec;
        }
        int operator==(Time c)
        {
            if(c.hrs==hrs && c.min==min && c.sec==sec)
            {
                return 1;
            }
            else{
                return 0;
            }
        }
};
int main()
{
    int k;
    Time t1,t2,t3;
    cout<<"\nenter first time:\n";
    t1>>t1;
    t1<<t1;
    cout<<"\nenter second time:\n";
    t2>>t2;
    t2<<t2;
    if(k=t1==t2)
    {
        cout<<"\ntime is same";
    }
    else
        cout<<"\ntime is not same";
}