#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){

   int number;
   cin>>number;
   int count;
  
 while(number != 0) {
      number = number / 10;
      count++;  
}
cout<<count;
return 0;  
}   
