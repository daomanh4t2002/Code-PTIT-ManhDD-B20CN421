#include<iostream>
#include<string.h>
using namespace std;

int toint(string r){
	int x=0;
	for (int i=0; i<r.length(); i++) x= x*10 + (int)(r[i] - '0');
	return x;	
}
main(){
	int t;	
	cin>> t;
	cin.ignore();
	string s;
	while (t--){
		getline(cin,s);
		s= s + 'a';
		long max=0;
		for (int i=0; i<s.length(); i++)
			if ('0'<=s[i] && s[i]<='9'){
				int j=i;
				while ('0'<=s[j] && s[j]<='9') j++;
				string r= s.substr(i,j-i);
				if (toint(r)>max)	max= toint(r);
				i=j;
			}
		cout<< max<< endl;
	}
}
