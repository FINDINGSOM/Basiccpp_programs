#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
int revn=0;
int rem;
//enter the number
cin>>n;

while(n!=0){
	rem=n%10;
	revn=revn*10+rem;
	n=n/10;
	
}	
	cout<<revn;
	
	
	
}
