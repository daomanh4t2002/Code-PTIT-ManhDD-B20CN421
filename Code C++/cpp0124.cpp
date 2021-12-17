#include<iostream>
#include<cmath>
using namespace std;

main(){
	int n, x=3, d=0;
	cin>> n;
	if (n%2==0){
		while (n%2==0){
			n/=2;
			d++;
		}	
		cout << 2<< " "<< d<< endl;
		d=0;
	}
	
	while (x<=sqrt(n)){
		if (n%x==0){
			while (n%x==0){
				n/=x;
				d++;
			}	
			cout<< x<< " "<< d<< endl;
			d=0;	
		}
		x+=2;		
	}
	if (n>1) cout<< n<< " "<< 1;
}
