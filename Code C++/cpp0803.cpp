#include<iostream>
#include<fstream>
using namespace std;

main(){
	ifstream fi;	fi.open("DATA.in");
	int a[1001];
	for (int i=1; i<=1000; i++) a[i]=0;
	int n;
	while (!fi.eof()){
		fi>> n;
		a[n]++;		
	}
	a[n]--;
	fi.close();
	for (int i=1; i<=1000; i++)
		if (a[i]) cout<< i<<" "<< a[i]<< endl;
}

