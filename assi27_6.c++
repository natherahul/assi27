#include<iostream>
#include<string.h>

using namespace std;
class Cstring
{
    private:
        char str1[20],str2[20];
    public:
        void setstring(char s1[],char s2[])
        { 
            int i;
            for(i=0;s1[i]!='\0';i++)
            {
                str1[i]=s1[i];
            }
            for(i=0;s2[i]!='\0';i++)
            {
                str2[i]=s2[i];
            }
        }
        void showstring()
        {
            cout<<"\nstr1="<<str1<<"\nstr2="<<str2;
        }
        void operator+(Cstring c)
        {
            strcat(str1,c.str1);
            strcat(str2,c.str2);
          
        }
        int operator==(Cstring c)
        {
            if(strcmp(str1,c.str1) && strcmp(str2,c.str2))
            {
                return 1;
            }
            else 
                return 0;
        }
};
int main()
{
    Cstring c1,c2;
    char s1[20],s2[20];
    cout<<"enter the first string:";
    cin>>s1;
    cout<<"\nenter the second string";
    cin>>s2;
    c1.setstring(s1,s2);
    c1.showstring();
    cout<<"\nenter the first string:";
    cin>>s1;
    cout<<"\nenter the second string";
    cin>>s2;
    c2.setstring(s1,s2);
    c1.operator+(c2);
    c1.showstring();
    int k=c1.operator==(c2);
    if(k=1)
        cout<<"\ntwo strings are same";
    else
        cout<<"\ntwo strings are not same";
}