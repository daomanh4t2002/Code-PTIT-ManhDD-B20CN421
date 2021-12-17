#include<iostream>
using namespace std;

long long ucln(long long x, long long y){
	long long r;
	do{
		r= x%y;
		x= y;
		y= r;
	} while (y>0);
	return x;
}
main(){
	long long t, x, y, a;
	cin>> t;
	while (t--){
		cin>> a>> x>> y;
		for (int i=0; i<ucln(x,y); i++) cout<< a;
		cout<< endl;
	}
}
