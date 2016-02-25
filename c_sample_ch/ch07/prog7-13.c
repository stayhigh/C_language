#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* for time �禡 */
int WinLoss(int, int); // �޼�1���q��,�޼�2�����a
void ShowMsg(int , int , int );
void ShowCPS(int );
void ShowCPS(int i) {
	if( i == 1 ) printf("�ŤM");
	else if( i == 2 ) printf("���Y");
	else printf("��");
}
void ShowMsg(int c, int p, int s) { //�޼� c ���q��, p �����a, s ���P�_���G
	printf("  �A�X"); ShowCPS(p);
	printf(", �q���X"); ShowCPS(c);
	if( s == -1 ) printf(", �A��F!\n");
	else if( s == 0 ) printf(", ����!\n");
	else printf(", �AĹ�F!\n");
}
int WinLoss(int c, int p) {	// �޼�1���q��, �޼�2�����a
	if( p == c ) return(0);	// ��ӥX�@�˥���
	if( p == 1) p = 4;		// �o�ɱN���a�ŤM���N�X���� 4
	if( p == c + 1) return(1); // �]�N�O p - c = 1, �N���aĹ
	else return(-1);		// �N���a��
}
int main(void)
{
	int iPWin, iCWin, ret;
	int iPlayer, iComp; // ���a�P�q�����X�����A
	iPWin = iCWin = 0; // �]�w�q���P���a�ثe���S���HĹ 
	srand((unsigned)time(NULL)); // �]�w�üƲ��ͪ��_�I, ����@���Y�i
	while( (iPWin <= 2) && (iCWin <= 2) ) 
	{
		iComp = rand()%3+1; // �H rand ���o�ü�, �A�ন1,2,3 �����q�����X�����A
		printf("1:�ŤM, 2:���Y, 3:��. �A�X���O: "); scanf("%d",&iPlayer);
		if( iPlayer >= 1 && iPlayer <= 3 ){	// �קK�ϥΪ̿�J���~
			ret = WinLoss(iComp, iPlayer);	// �I�s WinLoss �禡�P�_��Ĺ
			ShowMsg(iComp, iPlayer, ret);	// ��ܥX���T��
			if( ret == 1 ) iPWin++;		// �ھڿ�Ĺ�[�`����
			else if( ret == -1 ) iCWin++;
			printf("�ثe����AĹ %d ��, �q��Ĺ %d ��\n",iPWin,iCWin);
		}
		else {
			printf("�A�X���F,�Э��X!\n");
			fflush(stdin);
		}
	}
	if(iPWin == 3) printf("����!�AĹ�q����!\n");
	else printf("�o����F�S���Y,�U���~��V�O!\n");
    system("pause"); return(0);
}