#include<iostream>
using namespace std;

class NhanVien{
	public:
		string ma, ho_ten, gioi_tinh, ngay_sinh, dia_chi, ma_thue, ngay_ky;
		void nhap(){
			ma="00001";
			getline(cin, ho_ten);
			getline(cin, gioi_tinh);
			getline(cin, ngay_sinh);
			getline(cin, dia_chi);
			getline(cin, ma_thue);
			getline(cin, ngay_ky);
		}
		void xuat(){
			cout<<ma<<" "<<ho_ten<<" "<<gioi_tinh<<" "<<ngay_sinh<<" "<<dia_chi<<" "<<ma_thue<<" "<<ngay_ky;
		}		
};

int main(){
	NhanVien a;
	a.nhap();
	a.xuat();
	return 0;
}
