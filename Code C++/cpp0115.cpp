#include<iostream>
using namespace std;

void phan_tich(int n){
	int x= 2, d=0;
	while (n>1){
		while (n%x==0){
			n/=x;
			d++;
		}
		if (d>0) cout<< x<< " "<< d<< " ";
		d=0; x++;
	}
	cout<< endl;
}
main(){
	int t,n;
	cin>> t;
	while (t--){
		cin>> n;
		phan_tich(n);
	}
}
