#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main()
{
	char words[MAX];
	FILE *fp;
if((fp=fopen("words","a++")) == NULL)
	{	fprintf(stdout,"Can't open \"words\" file. \n");
		exit(1);
	}

puts("Enter words:press the enter:");

while(gets(words) != NULL && words[0] != '\0')
	fprintf(fp, "%s\n",words);

puts("File contents: ");
// return to pointer of beginning
rewind(fp);
while(fscanf(fp,"%s",words) == 1)
	puts(words);

if(fclose(fp) !=0)
	fprintf(stderr,"Error closing file \n");
return 0;
}
