#include<iostream>
using namespace std;

int dem(int n){
	if (n%2==1) return 0;
	int d=0,i=3;
	while (n%2==0){
		n/=2;
		d++;
	}
	for (int i=3; i<=n/2; i+=2)
	if (n%i==0) {
		k=0;
		while (n%i==0) {
			n/=i;
			k++;
		}
		d*= (k+1);
	}	
	if (n>1) d*= 2;
	return d;

}
main(){
	int t, n;
	cin>> t;
	while (t--){
		cin>> n;
		cout<< dem(n)<< endl;
	}
}
