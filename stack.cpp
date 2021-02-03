#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int>s;
	s.push(5);	
	s.push(15);
	s.push(25);	
	s.push(35);	
	s.push(55);	
		cout<<s.size()<<"\n";
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;	
}
