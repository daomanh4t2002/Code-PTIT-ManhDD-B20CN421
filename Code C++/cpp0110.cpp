#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

void loai_bo_084(char ma[], int n){
	int k;
	for (int i=0;i<n;i++)
		if(ma[i]!='0' || ma[i+1]!='8' || ma[i+2]!='4') {
			cout<< ma[i]; 
		} else {
			k= i+3;
			break;
		}
	for (int i=k;i<n;i++) cout<< ma[i];
	cout<< endl;
}
main(){
	int t;
	char ma[19];
	cin>> t;
	cin.ignore();
	while (t--){
		cin.getline(ma,sizeof(ma));	
		int n=strlen(ma);
		loai_bo_084(ma,n);
	}
}
