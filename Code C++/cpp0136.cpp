#include<iostream>
#include<cmath>
using namespace std;

int isPrime(int i){
	for (int j=2; j<=sqrt(i); j++)
		if (i%j==0) return 0;
	return 1;
}
main(){
	int t;
	cin>> t;
	long long n[t], prime[21111], k=0, p=2;
	for (int i=0; i<t; i++){
		cin>> n[i];
		while (p*p<=n[i]){
			if (isPrime(p)){
				prime[k]=p;
				k++;
			}
			p++;
		}
		for (int j=k; j>=0; j--)
			if (prime[j]*prime[j]<=n[i]){
				cout<< j+1<< endl;
				break;
			}
	}
	
}
