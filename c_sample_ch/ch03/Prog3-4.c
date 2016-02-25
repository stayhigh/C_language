#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	double dVal = 9453.59;  
	printf("123456789012345\n"); //陪ボ﹚ノ
	printf("%f\n",dVal); //场块,计翴㏕﹚6
	printf("%e\n",dVal); //场块,计翴㏕﹚6
	printf("%4.2f\n",dVal); //4じ,计翴2
	printf("%10.1f\n",dVal); //10じ,计翴1
	printf("%010.3f\n",dVal); //10じ,计翴3,玡干0
	printf("%15.4e\n",dVal); //15じ,计翴4
	printf("%+10.2f\n",dVal); //块タ璽腹,10じ,计翴2
	system("pause");
	return(0);
}
