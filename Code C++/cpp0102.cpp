#include<iostream>
using namespace std;

int main(){
	int n;
	cin>> n;
	char c;
	while (n--){
		cin>> c;
		if ('a'<=c && 'z'>=c) c= toupper(c);
		else c= tolower(c);
		cout <<c <<endl;
	}
}
