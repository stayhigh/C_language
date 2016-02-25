#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	unsigned char ch = 53;
	int ix = 5;
	ch = ch << 1;  printf("ch = %d\n",ch); // 每次乘 2
	ch = ch << 1;  printf("ch = %d\n",ch); // 每次乘 2 
	ch = ch << 1;  printf("ch = %d\n",ch); // 每次乘 2
	ch = ch >> 1;  printf("ch = %d\n",ch); // 每次除 2
	ch = ch >> 1;  printf("ch = %d\n",ch); // 每次除 2 
	ix = ix << 5; printf("ix<<5 = %d\n",ix); // ix 變成 5 * 25 = 5 * 32 = 160
	ix = ix >> 3; printf("ix>>3 = %d\n",ix); // ix 變成 160/23 = 160/8 = 20
	system("pause");
	return(0);
}