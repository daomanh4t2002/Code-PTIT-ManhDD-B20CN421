#include<iostream>
using namespace std;

main(){
	int t, n;
	long long k;
	cin>> t;
	while (t--){
		cin>> n>> k;
		int tong= (k-1)*(k)/2;
		int r= n%k;
		cout<< tong*(n/k)+(r+1)*r/2<< endl;
	}
}
