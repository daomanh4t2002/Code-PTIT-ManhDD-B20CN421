#include<iostream>
#include<cmath>
using namespace std;

int ngto(int x){
	if (x<2) return 0;
	for (int i=2; i<=sqrt(x); i++)
	if (x%i==0) return 0;
	return 1;
}

int f(int x){
	int t=0, x1=x, i=2;
	int a[x];
	for (int i=1; i<x; i++) a[i]=1;
	while (x1>1){
		if (x1%i==0){
			while (x1%i==0)	x1/=i;
			for (int j=1; j<=(x/i); j++) a[i*j]=0;
		}
		i++;	
	}
	for (int j=1; j<x; j++) t+=a[j];
	return ngto(t);	
}
main(){
	int n, x;
	cin>> n;
	while (n--){
		cin>> x;
		cout<< f(x)<< endl;
	}
}
