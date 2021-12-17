#include<iostream>
using namespace std;

long long giaithua (int n){
	long long tich= 1;
	while (n>0){
		tich*=n;
		n--;
	}
	return tich;
}

main(){
	int n;
	long long tong= 0;
	cin>> n;
	do{
		tong+=giaithua(n);
		n--;
	} while (n>0);
	cout<< tong;
}
