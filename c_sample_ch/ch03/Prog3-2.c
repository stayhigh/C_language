#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int iN = 60;
	double dV6 = 0.003; //f,e�PE��6������
	double dV5 = 0.00003850168; // �p���I�U�� 5 ��~���O 0 
	printf("%d �� 8 �i��: %o. 16 �i��: %x �� %X\n",iN,iN,iN,iN);
	printf("0.003 ��%%f: %f\n",dV6); //�w�]��ܨ��6��
	printf("0.003 ��%%e: %e, %%E: %E\n",dV6,dV6);
	printf("0.003 ��%%g: %g\n",dV6); //�o�� g ��� f
	printf("0.00003850168 ��%%f: %f, %%e: %e\n",dV5,dV5);
	printf("0.00003850168 ��%%g: %g, %%G: %G\n",dV5,dV5);
	system("pause");
	return(0);
}