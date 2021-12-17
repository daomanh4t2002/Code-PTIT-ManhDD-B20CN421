#include<iostream>
#include<cmath>
using namespace std;

int isPrime(int i){
	for (int j=3; j<=sqrt(i); j+=2)
		if (i%j==0) return 0;
	return 1;
}
main(){
	int t, n;
	cin>> t;
	while (t--){
		cin>> n;
		int a[n+1];
		cout<< 1;
		for (int i=2; i<=n; i++) 
			if (i%2==0) cout<< " "<< 2;
			else if (isPrime(i))   cout<< " "<< i;
			else 
			for (int j=3; j<=i; j+=2)
			if (i%j==0) {
				cout<< " "<< j;
				break;	
			}
		cout<< endl;
	}
}
