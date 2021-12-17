#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

int cham_bai(char baithi[],char ma101[],char ma102[]){
	int dung= 0;
	if (baithi[2]==ma101[2]){
		for (int i=4;i<=32;i+=2)
			if (baithi[i]==ma101[i]) dung++;
		return dung;
	}
		for (int i=4;i<=32;i+=2)
			if (baithi[i]==ma102[i]) dung++;
		return dung;	
}	
main(){
	int t;
	char baithi[35];
	char ma101[]= "101 A B B A D C C A B D C C A B D";
	char ma102[]= "102 A C C A B C D D B B C D D B B";
	cin>> t;
	float diem;
	cin.ignore();
	while (t--){
		cin.getline(baithi,sizeof(baithi));
		diem= (float)cham_bai(baithi,ma101,ma102)/15*10;
		cout<< fixed<< setprecision(2)<< diem<< endl;	
	}
}
