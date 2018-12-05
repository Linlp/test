#include<iostream>
using namespace std;
int main(){
      float c,sum=0.0;
      int i=1;
      cin>>c;
int n=0;
    while(c >= sum){
//      while(c -sum >= 1e-3){
//    	i++;
	sum += 1.0/(++i);
	n++;
}
      cout << n << " card(s)" <<endl;
      return 0;
}

