#include<iostream>
#include<iomanip>
using namespace std;

struct SinhVien{
	string masv="B20DCCN001";
	string ten, lop, ngay_sinh;
	float gpa;
};

void nhap(SinhVien &a){
	getline(cin,a.ten);
	getline(cin,a.lop);
	getline(cin,a.ngay_sinh);
	cin>> a.gpa;
}

void in(SinhVien a){
	cout<< a.masv<< " "<< a.ten<< " "<< a.lop<< " "<< a.ngay_sinh<< " "
	<< setprecision(2)<< fixed<< a.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
