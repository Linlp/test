#include<iostream>
#include<cstdio>
using namespace std;
int main(){
float c,sum;
while(scanf("%f",&c) == 1){
      if(c == 0.0) return 0;  
      sum=0.0;//initial sum
      int i=1;
      int n=0;
      while(c >= sum){//>= 写成<=
        sum += 1.0/(++i);
        n++;
      }
      cout << n << " card(s)" <<endl;//output i ,so cards+1
}
      return 0;
}
