#include<iostream>
#include<fstream>
using namespace std;

main(){
	ifstream fi;
	ofstream fo;
	fi.open("PTIT.in");
	fo.open("PTIT.out");
	while (!fi.eof()){
		string s;
		getline(fi,s);	
		fo<< s<< endl;
	}
	fi.close();
	fo.close();
}
