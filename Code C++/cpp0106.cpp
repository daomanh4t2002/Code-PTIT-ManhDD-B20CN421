#include<iostream>
#include<string.h>
using namespace std;

int check(char s[]){
	for (int i=0;i<(strlen(s)+1)/2;i++)
		if (s[i]!=s[strlen(s)-1-i]) return 0;
	return 1;
}
main(){
	int t;
	cin>> t;
	while (t--){
		char s[19];
		cin>> s;
		if (check(s)) cout<< "YES"<< endl;
		else cout<< "NO"<< endl;
	}
}
