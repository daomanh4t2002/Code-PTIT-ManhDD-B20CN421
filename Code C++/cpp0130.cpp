#include<iostream>
#include<cmath>
using namespace std;

main(){
	int t; 
	long long n;
	cin>> t;
	while (t--){
		cin>> n;
		while (n%2==0){
			cout<< 2<< " ";
			n/=2;
		} 
		long long i=3;
		while (i<=sqrt(n)){
			if (n%i==0)
			while (n%i==0){
				n/=i;
				cout<< i<<" ";
			}
			i+=2;
		}
		if (n>1) cout<<n;
		cout<< endl;
	}
}
