#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
	char cx;
	printf("��J�@�Ӧr��: "); cx = getchar();
	printf("��J���r���O: %c\n",cx);
	printf("��J�@�Ӧr��: "); cx = getche();
	printf("��J���r���O: %c\n",cx);
	printf("��J�@�Ӧr��: "); cx = getch();
	printf("��J���r���O: %c\n",cx);
	system("pause");
	return(0);
}