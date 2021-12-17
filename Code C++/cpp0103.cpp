#include<iostream>
#include<iomanip>
using namespace std;

main(){
	int n;
	cin>> n;
	double s= 0;
	while (n>0){
		s+=1/(double)n; n--;
	}
	cout<< fixed<< setprecision(4)<< s;
}
