#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	int iAtoZ[26] = {0}; /* �]�w��l�Ȭ� 0 */
	char ch; /* ������J���r�� */
	printf("��J�@�q�^��y�l,�H#�N����\n");
	while ( (ch = getchar()) != '#')
	{
		if( ch >= 'a' && ch <= 'z' )  /*�O�_���� a �� z ���� */
			iAtoZ[ch-97]++; /* �۹����쪺�x�s��m���e�[ 1 */
    }
	for( i = 0 ; i < 26 ; i++ ) /* �ˬd�C�@�Ӧr�����X�{���� */
		if( iAtoZ[i] != 0 ) /* ��ܦ��X�{*/
			printf("%c �X�{ %2d ��\n",i+97,iAtoZ[i]);
    system("pause");
	return(0);
}