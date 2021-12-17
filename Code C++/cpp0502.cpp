#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct ThiSinh{
	string ten;
	string ngay_sinh;
	float diem1, diem2, diem3;
};

void nhap(ThiSinh &A){
	getline(cin,A.ten);
	getline(cin,A.ngay_sinh);

	cin>> A.diem1>> A.diem2>> A.diem3;
}

void in(ThiSinh &A){
	cout<< A.ten<< " ";
	cout<< A.ngay_sinh<< " ";
	cout<< setprecision(1)<< fixed<< A.diem1+A.diem2+A.diem3;
}
main(){
	struct ThiSinh A;
    nhap(A);
    in(A);
}
