#include<iostream>
#include<string.h>
using namespace std;
int main()
{
        string s1;
        cout<<Enter String in Uppercase : ";
        getline(cin,s1);
        
        int i;
        
        
        for(i=0; i<=strlen(str); i++)
        {
                if(str[i]>=65 && str[i]<=90)  //65 to 90 is an ASCII values of 'A' to 'Z'
                {
                        str[i]=str[i]+32;
                }
        }
        cout<<"\n Conversion of above String into Lowercase : "<<str;
        return 0;
}
