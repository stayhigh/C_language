#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	char cSize = 'M'; //���M�������^��r��,�r���H��ƿ�X
	int iCups = 10; 
	float fDiscount = 0.85;
	printf("%d ���@�M35��\n",cSize);// ������X�榡
	printf("�ʶR %d �M,�@ %d ��\n",iCups); //�|���F�@�Ӥ޼�
	printf("�ʶR %d �M,�i�H�� %1.2f ��\n",fDiscount,iCups); //�޼Ƥ��p�ߩ������
	system("pause");
	return(0);
}
