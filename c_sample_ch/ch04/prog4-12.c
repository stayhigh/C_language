#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x, a = 3, b = 3;
	x = 10; x += a * 2 - b; printf("x = %d\n",x); // 10 + 3
	x = 10; x -= a * 2 - b; printf("x = %d\n",x); // 10 - 3
	x = 10; x *= a * 2 - b; printf("x = %d\n",x); // 10 * 3
	x = 10; x /= a * 2 - b; printf("x = %d\n",x); // 10 / 3
	x = 10; x %= a * 2 - b; printf("x = %d\n",x); // 10 % 3
	system("pause");
	return(0);
}