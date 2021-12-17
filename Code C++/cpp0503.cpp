#include<iostream>
using namespace std;

struct PhanSo{
	long long tu;
	long long mau;
};

void nhap(struct PhanSo &p){
	cin>> p.tu>> p.mau;
}

void rutgon(struct PhanSo &p){
	long long x= p.tu;
	long long y= p.mau;
	long long r;
	do{
		r= x%y;
		x= y;
		y= r;
	} while (y!=0);
	p.tu/=x;
	p.mau/=x;
}

void in(struct PhanSo p){
	cout<< p.tu<< "/"<< p.mau;
}int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
