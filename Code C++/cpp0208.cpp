#include<iostream>
using namespace std;

void find(int n, int k, int a[]){
	int d;
	for (int i=0;i<n;i++){
		d=0;
		for (int j=0;j<n;j++)
			if (a[j]<a[i]) d++;
		if (d==k-1){
			cout<< a[i]<< endl;
			return;
		}
	}
}
main(){
	int t,n,k;
	cin>> t;
	while (t--){
		cin>> n>> k;
		int a[n];
		for (int i=0;i<n;i++) cin>> a[i];
		find(n,k,a);
	}
}
