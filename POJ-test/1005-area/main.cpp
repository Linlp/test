#include<iostream>
#include<math.h>
using namespace std;
const static double PI=3.1415926/2.0;
const static double area=50;
int Year(double x, double y);
int main(){
	int N,i;
	cin>>N;
	for(i=1;i<=N;i++){
	double x,y;
	cin>>x>>y;
	cout << "Property " << i << ": This property will begin eroding in year " << Year(x,y)<< "." << endl;
}	
	cout << "END OF OUTPUT." << endl;
	return 0;
}

int Year(double x, double y){
	double S,R;
	R = x*x+y*y;
	S = PI*R; 
	return (int)ceil(S/area);
}
