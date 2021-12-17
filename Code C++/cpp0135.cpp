#include<iostream>
#include<cmath>
using namespace std;

int ngto(int x){
	if (x<2) return 0;
	for (int i=2;i<=sqrt(x);i++)
		if (x%i==0) return 0;
	return 1;
}
main(){
	int t,n;
	cin>> t;
	while (t--){
		cin>> n;
		for (int i=2; i<=sqrt(n);i++)
			if (ngto(i)) cout<< i*i<< " ";
		cout<< endl;
	}
}
