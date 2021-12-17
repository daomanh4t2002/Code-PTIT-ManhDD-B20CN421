#include<iostream>
using namespace std;

int max(int n, int a[]){
	int m = a[0];
	for (int i=1;i<n;i++)
		if (a[i]>m) m=a[i];
	return m;
}
main(){
	int t, n, a[10000];
	cin>> t;
	while (t--){
		cin>> n;
		for (int i=0;i<n;i++) cin>> a[i];
		cout<< max(n,a)<< endl;
	}
}
