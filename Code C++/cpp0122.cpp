#include<iostream>
using namespace std;

long long ucln(long long a,long long b){
	long long r= a%b;
	while (r>0){
		a=b;  b=r;  r= a%b;
	}
	return b;
}

long long bcnn(long long n){
	long long boi= 1;
	for (long long i=2;i<=n;i++) boi= (boi*i)/ucln(boi,i);
	return boi;
}

main(){
	long long t,n;
	cin>> t;
	while (t--){
		cin>> n;
		cout<< bcnn(n)<< endl;
	}
}
