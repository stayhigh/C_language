#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char cBell ='\a';	/* �x�s Bell �r�� */
	char cNL = '\n';	/* �x�s���� \n �r�� */  
	char cBS = '\b';	/* �x�s�˰h�� */
	printf("�o�X�@���n�� %c %c",cBell,cNL);	 
	printf("��XAB���u��AB%cX�л\�F B\n",cBS);	
	printf("��X�ϱ׽u \\ \n");		// ��X�ϱ׽u
	printf("\"�o��r�Q���޸��A��\"\n");		// ��X���޸�
	printf("\'�o��r�Q��޸��A��\'%c",cNL); // ��X��޸�
	system("pause");
	return(0);
}