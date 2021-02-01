#include<bits/stdc++.h>
using namespace std;
int anagramchecker(string s1,string s2){
		int n1=s1.length();
	int n2=s2.length();
	if(n1!=n2){
		return false;
	}
	
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	
	for(int i=0;i<n1;i++){
		if(s1[i]!=s2[i])
		{
			return false;
			
		}
	 return true;
	}
	
}
int main(){
	string s1;
	string s2;
	getline(cin,s1);
	getline(cin,s2);
	if (anagramchecker(s1,s2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";
 
    return 0;
	}
