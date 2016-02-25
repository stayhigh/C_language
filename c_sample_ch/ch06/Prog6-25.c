#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,j,n=6; /* n: 設定印出 * 的行數*/
	for(i=1;i<=n;i++) {	/* 外迴圈代表是哪一列要印 * */
		for(j=1;j<=i;j++) /* 內迴圈印出指定個數的 * */
			printf("*");
		printf("\n");
	}
	system("pause");
	return(0);
}