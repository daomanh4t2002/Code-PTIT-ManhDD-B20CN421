#include<iostream>
using namespace std;

int check(int x){
	int chan=0, le=0;
	while (x>0){
		if (x%2==1) le++;
		else chan++;
		x/=10;
	}
	if (le==chan) return 1;
	return 0;
}
main(){
	int n,a=1;
	cin>> n;
	for (int i=1;i<n;i++)  a*=10;
	int b=a*10;
	int dem=0;
	for (int i=a;i<b;i++)
		if (check(i)) {
			dem++;
			cout<< i<< " ";
			if (dem%10==0) cout<< endl;
		}
}
