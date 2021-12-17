#include<iostream>
using namespace std;

void nhap(int &n,int &p){
	cin>> n>> p;
}

int dem(int n, int p){
	int d=0;
	while (n>0){
		d+=n/p;
		n/=p;
	}
	return d;
}
main(){
	int t, n, p;
	cin>> t;
	while (t--){
		nhap(n,p);
		cout<< dem(n,p)<< endl;		
	}
}
