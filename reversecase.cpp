#include<iostream>
using namespace std;
void case(string &str){
   //calculate the length of a string
   int len = str.length();
   //converting lowercase to uppercase and vice versa
   for (int i=0; i<len; i++){
      if (str[i]>='a' && str[i]<='z'){
         str[i] = str[i] - 32;
      }
      else if(str[i]>='A' && str[i]<='Z'){
         str[i] = str[i] + 32;
      }
   }
}
int main(){
   string str = "abcdeeHJJJJ";
   cout<<"String before conversion is: "<<str;
   case(str);
   cout<<"\nString after conversion is: "<<str;
   return 0;
}
