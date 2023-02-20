#include<iostream>
using namespace std;
class Matrix
{
    private:
        int a[3][3];
    public:
        void setdata(int b[3][3])
        {
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    a[i][j]=b[i][j];
                }
            }
        }
        void showdata()
        {
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<a[i][j]<<"  "   ;
                }            
                cout<<endl;
            }
        }
        void operator~()
        {
             for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    a[i][j]=-a[i][j];
                }
            }
        }
};
int main()
{
    Matrix m1,m2;
    int b[3][3];
    cout<<"enter the 3x3 matrix:";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    m1.setdata(b);
    cout<<"matrix is:\n";
    m1.showdata();
    ~m1;
    cout<<"matrix is:\n";
    m1.showdata();
}