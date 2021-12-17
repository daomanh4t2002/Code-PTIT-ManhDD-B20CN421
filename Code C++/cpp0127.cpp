#include<iostream>
#include<cmath>
using namespace std;

int so_nt(int n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++)
		if (n%i==0) return 0;
	return 1;
}

void tach(int n){
	if (n%2==1) {
			if (so_nt(n-2)) cout << 2<< " "<< n-2<< endl;
			else cout<< -1<< endl;
			return;
		} 	
	for (int i=n-2; i>=n/2; i--)
		if (so_nt(i) && so_nt(n-i)) {
				cout<< n-i<< " "<< i<<endl;
				return;
			}
	cout<< -1<< endl;	
}
main(){
	int t, n;
	cin>> t;
	while (t--){
		cin>> n;
		tach(n);
	}
}
