#include<iostream>
using namespace std;
class Matrix
{
    private:
        int a[3][3];
    public:
        void setmatrix(int c[3][3])
        {
            int i,j;
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    a[i][j]=c[i][j];
                }
            }
        }
        void showmatrix()
        {
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<a[i][j]<<"   ";
                }
                cout<<endl;
            }

        }
        Matrix operator+(Matrix m)
        {
            Matrix temp;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<3;j++)
                {
                    
                    temp.a[i][j]=a[i][j]+m.a[i][j];
                }   
            }
            return temp;
        }
};
int main()
{
    Matrix m1,m2,m3;
    int i,j,b[3][3];
    cout<<"enter first the matrix:";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    m1.setmatrix(b);
    cout<<endl<<"enter second the matrix:";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    m2.setmatrix(b);
    m3=m1+m2;
    cout<<"matrix first is:"<<endl;
    m1.showmatrix();
    cout<<endl<<"matrix second is:"<<endl;
    m2.showmatrix();
    cout<<endl<<"sum of two matrix is:"<<endl;
    m3.showmatrix();
}