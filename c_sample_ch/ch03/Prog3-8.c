#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x, y, t; // t ノユ传筁祘既
	printf("块ㄢ俱计 x 籔 y : ");
	scanf("%d%d",&x,&y);
	printf("ユ传玡: x = %d, y = %d\n",x,y);
	t = x; x = y; y = t; // ユ传ㄢ跑计ず甧
	printf("ユ传: x = %d, y = %d\n",x,y);
	system("pause");
	return(0);
}