#include <stdio.h>
#include <stdlib.h>
#define ABS(x) x > 0 ? x : -x // �p�⵴��ȥ������w�q
int main() {
	int i, j = -3;
	float x, y = -1.35;
	i = ABS(j); // �i�}�ᬰ i = j > 0 ? j : -j;
	printf("ABS(%d) = %d\n",j,i);
	x = ABS(y); // �i�}�ᬰ x = y > 0 ? y : -y;
	printf("ABS(%4.2f) = %4.2f\n",y,x);
	system("pause"); return(0);
}