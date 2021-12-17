#include<iostream>
#include<cmath>
using namespace std;

int nguyen_to(long long x){
	if (x<2) return 0;
	for (long long i=2; i<=sqrt(x); i++)
		if (x%i==0) return 0;
	return 1;
}
main(){
	int t, n;
	cin>> t;
	while (t--){
		cin>> n;
		int check=n, dem=0;
		int a[n+1];
		for (int i=1; i<=n; i++) a[i]=i;
		while (check>0){
			check= n;
			for (int i=1; i<=n; i++)
				if (a[i]==9-n+i) check--;
				
			long long x=0;
			for (int i=1; i<=n; i++) x= x*10 + a[i];
			if (nguyen_to(x)) dem++;
			x=0;
			for (int i=n; i>=1; i--) x= x*10 + a[i];
			if (nguyen_to(x)) dem++;
			
			for (int i=n; i>0; i--)
				if (a[i]<9-n+i) {
					a[i]++;
					for (int j=i+1; j<=n; j++) a[j]= a[i]+j-i;
					break;
				}
		}
		cout<< dem<< endl;
	}	
}
