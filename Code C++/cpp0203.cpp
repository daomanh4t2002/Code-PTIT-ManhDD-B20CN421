#include<iostream>
using namespace std;

main(){
	int t, n;
	cin>> t;
	while (t--){
		cin>> n;
		int a[n];
		int *b = new int [1000001];
		//for (int i=1;i<=1000000;i++) b[i]=0;
		for (int i=0;i<n;i++) {
			cin>> a[i];	
			if (a[i]>0)  b[a[i]]=1;
		}
		int k=1;
		while (b[k]==1) k++;
		cout<< k<< endl;
	}
}
