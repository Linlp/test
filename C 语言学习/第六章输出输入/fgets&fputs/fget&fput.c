#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int main()
{
	char line[MAX];
	while(fgets(line,MAX,stdin) != NULL && line[0] != '\n')
		fputs(line,stdout);
	return 0;
}
