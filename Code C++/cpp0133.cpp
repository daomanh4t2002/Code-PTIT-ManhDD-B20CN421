#include<iostream>
using namespace std;

main(){
	int t,n;
	cin>> t;
	while (t--){
		cin>>n;
		int a[n+1];
		for (int i=2; i<=n+1; i++) a[i]=1;
		for (int i=3;i<=n;i++){
			for (int j=2; j<i; j++)
				if (i%j==0){
					a[i]=0;
					break;
				}	
		}
		for (int i=2;i<=n;i++)
			if (a[i]==1) cout<< i<< " ";
		cout<< endl;
	}
}
