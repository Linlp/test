#include <stdio.h>
char color = 'B';
void first(void);
void second(void);
int main(void)
{
	extern char color;
	printf("color in the main() is %c\n",color);
	first();
	printf("color in the main() is %c\n",color);
	second();
	printf("color in the main() is %c\n",color);
	return 0;
}

void first()
{
	char color;
	color = 'R';
	printf("color in the frist() is %c\n",color);
}


void second()
{
	char color;
	color = 'G';
	printf("color in the second() is %c\n",color);
}
#add some words
