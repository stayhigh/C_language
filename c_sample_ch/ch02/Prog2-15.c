#include <stdio.h>
#include <stdlib.h>
int main(void)
{
//	float fB = 4.4E+38f; /* 這行程式碼會產生「常數太大」的語法錯誤 */
	float fx = 3.0E+38f; /* fx 為 float */
	double dx = -1.79E+308; /* dx 為 double */
	printf("fx = %e\n",fx); 
	fx = 2 * fx;
	printf("fx=2*fx, fx = %f\n",fx);
	printf("dx = %e\n",dx);
	dx = dx * 2;
	printf("dx=dx*2, dx = %f\n",dx);
	system("pause");
	return(0);
}