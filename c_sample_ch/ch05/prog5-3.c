#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	ch = getchar();
	if( ch >= 97 && ch <= 122 ) putchar(ch-32);
	else putchar(ch);
	system("pause");
	return 0;
}