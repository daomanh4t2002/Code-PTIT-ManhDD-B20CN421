#include<iostream>
using namespace std;

struct NhanVien{
	//string ma= "00001";
	string ten;
	string gioi_tinh;
	string ngay_sinh;
	string dia_chi;
	string ma_thue;
	string ngay_hopdong;
};

void nhap(NhanVien &a){
	getline(cin,a.ten);
	getline(cin,a.gioi_tinh);
	getline(cin,a.ngay_sinh);
	getline(cin,a.dia_chi);
	getline(cin,a.ma_thue);
	getline(cin,a.ngay_hopdong);
}

void in(NhanVien a){
	cout<< "00001 "<< a.ten<< " "<< a.gioi_tinh<< " "<< a.ngay_sinh<< " "
	<< a.dia_chi<< " "<< a.ma_thue<< " "<< a.ngay_hopdong;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
