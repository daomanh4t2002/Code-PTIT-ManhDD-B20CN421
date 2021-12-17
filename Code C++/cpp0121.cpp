#include<iostream>
using namespace std;

long lcm(long a, long b){
	int r= a%b;
	while (r>0){
		a=b;
		b=r;
		r= a%b;
	}	
	return b;
}
main(){
	long t,a,b;
	cin>> t;
	while (t--){
		cin>> a>> b;
		long ucln= lcm(a,b);
		cout<< a*b/ucln<< " "<< ucln<< endl;
	}
}
