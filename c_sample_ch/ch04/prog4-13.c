#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	unsigned char cht, ch1, ch2;
	ch1 = 21; // 2進位為 10101
	ch2 = 11; // 2進位為 01011
	cht = ch1 & ch2; printf("10101 and 01011 = %d\n",cht);
	cht = ch1 | ch2; printf("10101 or  01011 = %d\n",cht);
	cht = ch1 ^ ch2; printf("10101 xor 01011 = %d\n",cht);
	cht = ~ch1;		 printf("10101 的 1 補數 = %d\n",cht);
	system("pause");
	return(0);
}