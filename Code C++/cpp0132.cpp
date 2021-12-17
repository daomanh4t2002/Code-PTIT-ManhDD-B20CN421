#include<iostream>
#include<cmath>
using namespace std;

long uoc_ngto_max(long n){
	long u, i=2;
	if (n%i==0){
		u=i;
		while (n%i==0) n=n/2;
	}
	i++;
	while (i<=sqrt(n)){
		if (n%i==0){
			u=i;
			while (n%i==0) n/=i;
		}	
		i+=2;		
	}	
	if (n>1) return n;
	return u;
}
main(){
	int t;
	long n;
	cin>> t;
	while (t--){
		cin>> n;
		cout<< uoc_ngto_max(n)<< endl;
	}
}
