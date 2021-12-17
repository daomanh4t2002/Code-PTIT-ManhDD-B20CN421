#include<iostream>
using namespace std;

main(){
	int t, n;
	long long k;
	cin>> t;
	while (t--){
		cin>> n>> k;
		if (n*(n+1)/2==k) cout<< 1<< endl;
		else cout<< 0<< endl;
	}
}
