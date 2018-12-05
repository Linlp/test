#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int twelve =12;
//	int i=0;
	float sum = 0.0,c;
	while (twelve--)
	{
	  cin >>c;
	  sum+=c;
//	i++;
	}
	cout <<fixed;
	cout << "$" << setprecision(2)<< sum/twelve <<endl;
	cout.unsetf(ios::fixed);
	return 0;
}
