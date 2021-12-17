#include<iostream>
#include<algorithm>
using namespace std;

struct PhanSo{
	long long tu;
	long long mau;
};

void in(PhanSo P){
	cout<< P.tu<< "/"<< P.mau<< " ";
}

void rutgon(PhanSo &P){
	long long x= P.tu, y= P.mau;
	long long r;
	
	do{
		r= x%y;
		x= y;
		y= r;
	} while (y!=0);
	P.tu/=x;
	P.mau/=x;	
}

void process(PhanSo A, PhanSo B){
	PhanSo C, D;
	
	C.tu= A.tu*B.mau+B.tu*A.mau;
	C.mau= A.mau*B.mau;
	rutgon(C);	
	C.tu*=C.tu;
	C.mau*=C.mau;
	in(C);
	
	D.tu= A.tu*B.tu*C.tu;
	D.mau= A.mau*B.mau*C.mau;
	rutgon(D);
	in(D);
	cout<<endl;
}
main() {
	int t;
	cin>> t;
	while (t--){
		PhanSo A;
		PhanSo B;
		cin>> A.tu>> A.mau>> B.tu>> B.mau;
		process(A,B);	
	}	
}
