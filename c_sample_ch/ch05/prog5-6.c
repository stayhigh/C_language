#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iNum, iSave, iPower = 0;
	int iFlag = 1; /* = 1 ��ܿ�J���ƬO 2 ������*/
	printf("�п�J�@�Ӿ��: ");
	scanf("%d",&iNum);
	iSave = iNum; /* �O�d�ϥΪ̿�J, �H�K�᭱��X */
	while (iFlag && iNum != 1 ) { /* ��o�Ӽƨ̵M�O 2 ������, �ӥB iNum �٨S������ѤU 1 */
		if( iNum % 2 == 0 ) {
			iPower++; /* �C���Q 2 �㰣�N�[ 1 */
			iNum = iNum / 2; /* �C���N�������H 2 */
		}
		else iFlag = 0;  /* iFlag = 0 �N��o�ӼƤ��O 2 ������A�]���S����k�Q 2 �㰣 */
	}
	if( iFlag ) printf("�A��J���ƭ� %d �O 2 �� %d ����\n",iSave,iPower);
	else printf("�A��J���ƭ� %d ���O�O 2 ������\n",iSave);
	system("pause");
	return 0;
}