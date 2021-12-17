#include<iostream>
#include<string>
using namespace std;

main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	s1=" "+s1+" ";
	int x= s1.find(" "+s2+" ");
	while (x!=-1){
		s1.erase(x,s2.size()+1);
		x= s1.find(" "+s2+" ");
	}
	while (s1[0]==' ') s1.erase(0,1);
	cout<< s1;
}
