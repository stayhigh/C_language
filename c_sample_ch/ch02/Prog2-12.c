#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char cA ='a';	/* �ŧi�r���ܼ�cA, �ó]�Ȭ� 'a' */
	char cB = 66;	/* �ŧi�r���ܼ�cB, �ó]�Ȭ��ƭ� 66 */  
	char cC = '��';	/* ���w����r���r���ܼ� */
	printf("cA = %c��ASCII�Ȭ� %d \n",cA,cA);	 
	printf("cB = %c��ASCII�Ȭ� %d \n",cB,cB);	
	cA = cA + 1;		// ca ���e�[ 1
	printf("cA = %c��ASCII�Ȭ� %d \n",cA,cA);	 
	cB = 'Z' - 1; 	// cb ���r�� Z �� 1
	printf("cB = %c��ASCII�Ȭ� %d \n",cB,cB);	
	printf("cC = %c��ASCII�Ȭ� %d \n",cC,cC);	
	system("pause");
	return(0);
}