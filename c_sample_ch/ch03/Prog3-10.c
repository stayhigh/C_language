#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
	char cx;
	printf("輸入一個字元: "); cx = getchar();
	printf("輸入的字元是: %c\n",cx);
	printf("輸入一個字元: "); cx = getche();
	printf("輸入的字元是: %c\n",cx);
	printf("輸入一個字元: "); cx = getch();
	printf("輸入的字元是: %c\n",cx);
	system("pause");
	return(0);
}