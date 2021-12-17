#include<iostream>
#include<string>
#include<sstream>
using namespace std;

main(){
	string s,s1;
	getline(cin,s);
	for (int i=0; i<s.size(); i++) s[i]= tolower(s[i]);
	stringstream ss;
	ss<< s;
	while (ss>>s1){
		s.erase(0,s1.size());
		if (ss>>s1)
	}
}
