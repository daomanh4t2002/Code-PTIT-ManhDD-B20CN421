#include<iostream>
using namespace std;

void nhap(int &m,int &n,int &a, int &b){
	cin>> m>> n>> a>> b;
}

int lcm(int a, int b){
	int r, x=a, y=b;
	do{
		r= a%b;
		a= b;
		b= r;
	} while (b>0);
	return x*y/a;
}
int so_boi(int m, int n, int k){
	int x= m/k;
	if (m%k) x++;
	int y= n/k;
	return y-x+1; 	
}
main(){
	int m,n,a,b,t;
	cin>> t;
	while (t--){
		nhap(m,n,a,b);
		cout<< so_boi(m,n,a) + so_boi(m,n,b) - so_boi(m,n,lcm(a,b))<< endl;
	}
}
