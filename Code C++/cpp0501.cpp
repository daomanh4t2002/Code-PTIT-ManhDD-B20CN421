#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct Point{
	double x,y;
};

void input(struct Point &P){
	cin>> P.x>> P.y;
}

double distance(struct Point A, struct Point B){
	double d;
	d= (double)pow(A.x-B.x,2)+(double)pow(A.y-B.y,2);
	d= sqrt(d);
	return d;	
}

main(){
	struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
}
