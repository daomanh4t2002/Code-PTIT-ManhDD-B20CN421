#include<iostream>
using namespace std;

int check(int n){
	while (n>0){
		if (n%10!=0 && n%10!=6 && n%10!=8) return 0;
		n/=10;
	}
	return 1;
}
main(){
	int t,n;
	cin>> t;
	while (t--){
		cin>> n;
		if (check(n)) cout<< "YES"<< endl;
		else cout<< "NO"<< endl;
	}
}
