#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix;
	printf("�п�J�@�Ӽƭ�:"); scanf("%d",&ix);
	if( ix%2 == 0 ) /* �l 0 ��ܸӼƬ����� */
		printf("�A��J���O����\n");
	else /* ���O�l 0, ���N�O�l 1, ��ܸӼƬ��_�� */
		printf("�A��J���O�_��\n");
	system("pause"); return 0;
}