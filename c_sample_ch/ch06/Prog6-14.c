#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;	/* 前 n 項的計數變數 */
	double dtotal, dx;
	int n;	/* 使用者輸入的 n 項值 */
	printf("輸入要加總的項數: ");
	scanf("%d", &n);
	for (dtotal=0, dx=1, i=1; i <= n; i++, dx *= 2.0) {
		dtotal += 1.0/dx; /* 加總 1/(2^i) */
		printf("前 %2d 項的總和 = %f\n", i,dtotal);
	}
	system("pause"); return(0);
}