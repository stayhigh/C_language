#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	double dVal = 9453.59;  
	printf("123456789012345\n"); //��ܩw���
	printf("%f\n",dVal); //������X,�p���I�U�T�w6��
	printf("%e\n",dVal); //������X,�p���I�U�T�w6��
	printf("%4.2f\n",dVal); //4�Ӧr��,�p���I�U2��
	printf("%10.1f\n",dVal); //10�Ӧr��,�p���I�U1��
	printf("%010.3f\n",dVal); //10�Ӧr��,�p���I�U3��,�e����0
	printf("%15.4e\n",dVal); //15�Ӧr��,�p���I�U4��
	printf("%+10.2f\n",dVal); //��X���t��,10�Ӧr��,�p���I�U2��
	system("pause");
	return(0);
}
