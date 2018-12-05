//#include<iostream>
//using namespace std;
//int main(){
//	float c,sum=0.0;
//	int i=1;
//	cin>>c;
////	de = c-sum;
//
////	while(c >= sum){
//	while(c -sum >= 1e-3){
//	sum +=(1.0/i);
//	i++;
//}
//	cout << i << " card(s)" <<endl;
//	return 0;
//}

/*
poj 1000
version:1.0
author:Knight
Email:S.Knight.Work@gmail.com
*/

#include<cstdio>
using namespace std;
int main(void)
{
    double c;
    int i;
    double Overhangs;
    while(scanf("%lf", &c) == 1)
    {
        if (0.0 == c)
        {
            return 0;
        }
        Overhangs = 0;
        for (i=1; i; i++)
        {
            Overhangs += 1.0 / (i + 1);
            if (Overhangs >= c)
            {
                break;
            }
        }
        printf("%d card(s)\n", i);
    }
    return 0;
}
