#include<iostream>
using namespace std;

void tim_uocnt(int n, int k){
	int x= 2;
	while (n>1){
		while (n%x==0 && k>0){
			n/=x;
			k--;
		}
		if (k!=0) x++;
		else break;
	}
	if (k==0) cout<< x<< endl;
	else cout<< -1<< endl;
}
main(){
	int t,n,k;
	cin>> t;
	while (t--){
		cin>> n>> k;
		tim_uocnt(n,k);
	}
}
