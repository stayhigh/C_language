#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iNum;	/* �����ϥΪ̨C������J */
	int iSum = 0;	/* �]�w�`�M�� 0 */
	int iStatus;	/* ��J�����e�O�_���� */
	printf("��J�n�ۥ[����(�D�Ʀr��ܵ���): ");
	iStatus = scanf("%d",&iNum); /* scanf �Ǧ^���T��J���Ӽ� */
	while(iStatus == 1) /* ��J�����T���ƭ� */
	{
		iSum = iSum + iNum; /* �[�` */
		printf("��J�n�ۥ[����: ");
		iStatus = scanf("%d",&iNum); 
	}
	printf("�֥[�����G��%d \n",iSum);
	system("pause"); 
	return(0);
}
