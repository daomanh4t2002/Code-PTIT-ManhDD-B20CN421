#include<iostream>
#include<algorithm>
using namespace std;

struct PhanSo{
	long long tu;
	long long mau;
};

void nhap(PhanSo &P){
	cin>> P.tu>> P.mau;
}
void in(PhanSo P){
	cout<< P.tu<< "/"<< P.mau;
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
PhanSo tong(PhanSo A, PhanSo B){
	PhanSo C;
	C.tu= A.tu*B.mau+B.tu*A.mau;
	C.mau= A.mau*B.mau;
	rutgon(C);	
	return C;
}

main() {
	struct PhanSo p,q;
		nhap(p); nhap(q);
		PhanSo t = tong(p,q);
		in(t);
}
