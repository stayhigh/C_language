#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch; int ix = 0; 
	printf("輸入一個整數:"); scanf("%d",&ix);
	fflush(stdin); // 清除輸入緩衝區的內容
	printf("輸入一個字元:"); ch = getchar();
	printf("ch = %d, ix = %d\n",ch, ix);
	system("pause");
	return(0);
}

