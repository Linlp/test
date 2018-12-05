#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int i;
        float sum = 0.0,c;
	for(i=1;i<=12;i++){
	cin>>c;
	sum+=c;
	}
	cout << fixed << setprecision(2) << "$" <<sum/12 <<endl;
        return 0;
}
