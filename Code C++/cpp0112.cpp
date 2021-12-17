#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

main(){
	int t;
	cin>> t;
	double ax,ay,bx,by;
	for (int i=0;i<t;i++){
		cin>> ax>> ay>>bx >> by;
		double distance=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
		cout<< fixed<< setprecision(4)<< distance<< endl;
	}
}
