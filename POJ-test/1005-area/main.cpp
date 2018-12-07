#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
#define PI 3.14159265

int main(){
	int N=0,year;
	double X,Y,S;
	cin >> N;
	for(int i=1;i<=N;i++){
	cin >> X >> Y;
	S = PI*(X*X + Y*Y);
	year = (int)ceil(S/100.0);
//	printf("Property %d: This property will begin eroding in year %d.\n",i,year);
  cout << "Property " << i << ": This property will begin eroding in year " <<year<< cout << "."  << endl; 	
}
	cout << "END OF OUTPUT." <<endl;
	return 0;
}
//Main.cpp
//F:\temp\19547716.13647\Main.cpp(11) : error C2057: expected constant expression
//F:\temp\19547716.13647\Main.cpp(11) : error C2466: cannot allocate an array of constant size 0
//F:\temp\19547716.13647\Main.cpp(11) : error C2133: 'year' : unknown size
//在线编译无法通过 在Linux 上可以编译通过
