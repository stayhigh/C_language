#include <stdio.h>
#include <stdlib.h>
int main(void)
{
//	float fB = 4.4E+38f; /* �o��{���X�|���͡u�`�ƤӤj�v���y�k���~ */
	float fx = 3.0E+38f; /* fx �� float */
	double dx = -1.79E+308; /* dx �� double */
	printf("fx = %e\n",fx); 
	fx = 2 * fx;
	printf("fx=2*fx, fx = %f\n",fx);
	printf("dx = %e\n",dx);
	dx = dx * 2;
	printf("dx=dx*2, dx = %f\n",dx);
	system("pause");
	return(0);
}