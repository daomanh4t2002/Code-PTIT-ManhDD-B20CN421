#include<iostream>
using namespace std;
int tong_chu_so (int n){
	int tong;
	while (n>9){
		tong= 0;
		while (n>0){
			tong+=n%10;
			n/=10;
		}
		n= tong;
	}
	return n;
}

main(){
	int t;
	cin>> t;
	while (t--){
		int n;
		cin>> n;
		cout<< tong_chu_so(n)<< endl;
	}
}
