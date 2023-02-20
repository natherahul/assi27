#include<iostream>
#include<string.h>
using namespace std;
class mystring
{
    private:
        char str[100];
    public:
        void setstring(char s1[])
        {
            for(int i=0;s1[i]!='\0';i++)
            {
                str[i]=s1[i];
            }
        }
        void showstring()
        {
            cout<<"string is:"<<str<<endl;
        }
        void operator!()
        {
            int i;
            for(i=0;str[i]!='\0';i++)
            {
                if(isupper(str[i]))
                {
                    str[i]=tolower(str[i]);
                }
                else
                {
                    str[i]=toupper(str[i]);
                }
            }
        }
};        
int main()
{
    char s1[100];
    mystring m1;
    cout<<"enter the string:";
    cin>>s1;
    m1.setstring(s1);
    m1.showstring();
    m1.operator!();
    m1.showstring();
}