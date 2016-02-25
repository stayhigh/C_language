#include <stdio.h>
#include <stdlib.h>
#define ABS(x) x > 0 ? x : -x // 計算絕對值巨集的定義
int main() {
	int i, j = -3;
	float x, y = -1.35;
	i = ABS(j); // 展開後為 i = j > 0 ? j : -j;
	printf("ABS(%d) = %d\n",j,i);
	x = ABS(y); // 展開後為 x = y > 0 ? y : -y;
	printf("ABS(%4.2f) = %4.2f\n",y,x);
	system("pause"); return(0);
}