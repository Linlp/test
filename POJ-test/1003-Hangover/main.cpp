#include<iostream>
#include<cstdio>
using namespace std;
int main(){
float c,sum;
while(scanf("%f",&c) == 1){
      if(c == 0.0) return 0;
      sum=0.0;//initial sum
      int i;
      for(i=1;i;i++){
      sum += 1.0/(i+1);
	if(c<=sum) break;
	
      }
      cout << i << " card(s)" <<endl;//output i ,so cards+1
}
      return 0;
}
