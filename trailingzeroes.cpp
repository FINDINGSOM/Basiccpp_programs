#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	int res=0;
	cin>>n;
	for(int i=5;i<=n;i=i*5){
		res=res+n/i;
	}
	
	cout<<res;
		return 0;
}
