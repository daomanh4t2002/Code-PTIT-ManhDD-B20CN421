#include<iostream>
using namespace std;

main(){
	int t;	cin>> t;
	while (t--){
		int b, p;
		cin>> b>> p;
		int k=1, b1, b2;
		for (int i=2; i<p, i<=b; i++)
			if ((i*i)%p==1){
				b1=i;	b2= b-b%p+i;
				if (b2>b) b2-=p;
				k+=(b2-b1)/p+1;	
			}
		cout<< k<< endl;
	}
}
