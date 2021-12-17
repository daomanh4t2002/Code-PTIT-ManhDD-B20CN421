#include<iostream>
#include<cstring>
using namespace std;

int check(char n[]){
	for (int i=0;i<strlen(n)-1;i++)
		if (n[i]-n[i+1]!=1 && n[i+1]-n[i]!=1) return 0;
	return 1;
}
main(){
	int t;
	cin>> t;
	cin.ignore();
	char n[19];
	while(t--){
		cin.getline(n,sizeof(n));
		if (check(n)) cout<< "YES"<<endl;
		else cout<< "NO"<<endl;	
	}
}
