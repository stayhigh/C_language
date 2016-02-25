#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j, k;
	i = 1; j = 2;
	k = i++ * j++; //°õ¦æ¶¶§Ç: k=i*j; i=i+1; j=i+1;
	printf("i = %d j = %d k = %d\n",i,j,k);
	k = ++i * j++; //°õ¦æ¶¶§Ç: i=i+1; k=i*j; j=i+1;
	printf("i = %d j = %d k = %d\n",i,j,k);
	system("pause");
	return 0;
}
