#include<iostream>
#include<iomanip>
using namespace std;

class SinhVien{
	private:
		string ma_sv="B20DCCN001", ho_ten, lop, ngay_sinh;
		float gpa;
	public:
		friend istream& operator>> (istream &is, SinhVien &a){
			getline(is, a.ho_ten);
			getline(is, a.lop);
			getline(is, a.ngay_sinh);
			is>> gpa;
			return is;
		}
		friend ostream& operator<< (ostream &os, SinhVien &a){
			return os<<a.ma_sv<<" "<<a.ho_ten<<" "<<a.lop<<" "<<a.ngay_sinh<<" "<< setprecision(2)<< fixed<< a.gpa;
		}	
};
main(){
	SinhVien a;
	cin>> a;
	cout<< a;	
}
