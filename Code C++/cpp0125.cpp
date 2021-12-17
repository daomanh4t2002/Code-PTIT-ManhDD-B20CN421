#include<iostream>
#include<cmath>
using namespace std;

void swap (int &a, int &b){
	int x= a;
	a= b;
	b= x;
}
int ktra_ngto(int n){
	if (n<2) return 0;
		else {
			for (int i=2;i<=sqrt(n);i++)
			if (n%i==0) 	return 0;
			return 1;
		}		
}
 
main(){
	int a,b;
	cin>> a>> b;
	if (a>b) swap(a,b);
	for (int i=a;i<=b;i++)
		if (ktra_ngto(i)) cout<< i<< " ";
}
