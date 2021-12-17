#include<iostream>
using namespace std;

main(){
	int n,k=0;
	cin>> n;
	int a[n][3];
	for (int i=0;i<n;i++){
		int d=0;
		for (int j=0;j<3;j++)	{
			cin>> a[i][j];
			d+=a[i][j];
		}
		if (d>=2) k++;
	}
	cout<<k;		
}
