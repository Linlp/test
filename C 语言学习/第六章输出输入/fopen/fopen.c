#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	int k;
	FILE *fp;
	
fp = fopen("filename","w");
for(k =0;k<30;k++)
{
	fputs("llp is a hamesome man!\n",fp);
}

fclose(fp);
return 0;

}
