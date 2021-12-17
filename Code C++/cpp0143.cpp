#include<iostream>
using namespace std;

main(){
	int t, n;
	cin>> t;
	while (t--){
		long long f1=1, f2=1, f;	
		cin>> n;
		if (n<3) cout<< 1<< endl;
		else {
			while (n>2){
				f=f1+f2;
				f1=f2;
				f2=f;
				n--;
			}
			cout << f<< endl;
		}
	}
}
