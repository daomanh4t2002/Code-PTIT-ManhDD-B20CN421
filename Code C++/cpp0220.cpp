#include<iostream>
using namespace std;

main(){
	int t, n;
	cin>> t;
	while (t--){
		cin>> n;
		int a[n][n];
		for (int i=0;i<n;i++)
			for (int j=0;j<n;j++)	cin>> a[i][j];
		
		for (int i=0;i<n;i++) cout<< a[0][i]<< " ";
		cout<< endl;
		for (int i=1;i<n-1;i++){
			cout<< a[i][0]<< " ";
			for (int j=1;j<n-1;j++) cout<< "  ";
			cout<< a[i][n-1]<< endl;
		}
		for (int i=0;i<n;i++) cout<< a[n-1][i]<< " ";
		cout<< endl;
	}
}
