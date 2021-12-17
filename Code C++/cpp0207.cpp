#include<iostream>
using namespace std;

main(){
	int t;
	cin>> t;
	long n,d;
	while (t--){
		cin>> n>> d;
		long a[n];
		for (long i=0;i<n;i++) cin>> a[i];
		for (long i= d; i<n; i++) 
			cout<< a[i]<< " ";
		for (long i=0; i<d;i++) 
			cout<< a[i]<< " ";
		cout<< endl;
	}
}
