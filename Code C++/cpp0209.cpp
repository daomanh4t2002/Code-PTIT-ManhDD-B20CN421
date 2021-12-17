#include<iostream>
using namespace std;

main(){
	int t, n, q, l, r;
	cin>> t;
	while (t--){
		cin>> n>> q;
		int a[n];
		for (int i=0;i<n;i++) cin>> a[i];
		int tong[q];
		for (int i=0;i<q;i++){
			cin>> l>> r;
			tong[i]=0;
			for (int j=l-1;j<r;j++) tong[i]+=a[j];
		}
		for (int i=0;i<q;i++) cout<< tong[i]<< endl;
	}
}
