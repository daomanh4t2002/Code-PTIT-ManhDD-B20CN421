#include<iostream>
#include<cmath>
using namespace std;

main(){
	int t,n;
	cin>> t;
	while (t--){
		cin>> n;
		int a[n];
		for (int i=0; i<n; i++) cin>> a[i];
		int min=1000001;
		for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			if (i!=j)
				if (abs(a[i]-a[j])<min) min= abs(a[i]-a[j]);
		cout<< min<< endl;
	}
}

