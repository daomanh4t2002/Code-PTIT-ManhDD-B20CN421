#include<iostream>
#include<cmath>
using namespace std;

int Sphenic(int n){
	int d=0;
	for (int i=2; i<=n; i++)
		if (n%i==0){
			if (n%(i*i)==0) return 0;
			n/=i; d++;
		}
	if (n==1 && d==3) return 1;
	return 0;
}
main(){
	int t, n;
	cin>> t;
	while (t--){
		cin>> n;
		cout<< Sphenic(n)<< endl;
	}
}
