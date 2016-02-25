#include <stdio.h>
#include <stdlib.h>
#define SQUARE(X) (X)*(X)	 // 計算平方的巨集
int main() {
	float x, y = 2.0f;
	x = SQUARE(y);		// 展開後為 x = (y)*(y);
	printf("%1.0f^2 = %f\n",y,x);
	x = 1/SQUARE(y);	// 展開後為 x = 1/(y)*(y);
	printf("1/%1.0f^2 = %f\n",y,x);
	system("pause"); return(0);
}