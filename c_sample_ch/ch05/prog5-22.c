#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* for time �禡 */
int main(void)
{
	int iPWin, iCWin;
	int iPlayer, iComp; // ���a�P�q�����X�����A
	iPWin = iCWin = 0; // �]�w�q���P���a�ثe���S���HĹ 
	srand((unsigned)time(NULL)); // �]�w�üƲ��ͪ��_�I, ����@���Y�i
	while( (iPWin <= 2) && (iCWin <= 2) ) 
	{
		iComp = rand()%3+1; // �H rand ���o�ü�, �A�ন1,2,3 �����q�����X�����A
		printf("1:�ŤM, 2:���Y, 3:��. �A�X���O: ");
		scanf("%d",&iPlayer);
		switch(iPlayer) { 
			case 1: /* �ϥΪ̥X�ŤM */
				if( iComp==1 ) printf("�A�X�ŤM,�q���]�X�ŤM,����!\n");
				else if( iComp==2 ) {
					iCWin++;
					printf("�A�X�ŤM,�q���X���Y,�A��F!"); 
					printf(" �ثe�q��Ĺ%2d ��\n",iCWin);
				}
				else { /* �q���X�� */
					iPWin++;
					printf("�A�X�ŤM,�q���X��,�AĹ�F!");
					printf(" �ثe�AĹ%2d ��\n",iPWin);
				}
				break;
			case 2: /* ���Y */
				if( iComp==1 ) {
					iPWin++;
					printf("�A�X���Y,�q���X�ŤM,�AĹ�F!");
					printf("  �ثe�AĹ%2d ��\n",iPWin);
				}
				else if( iComp==2 ) printf("�A�X���Y,�q���X���Y,����!\n");
				else { /* �q���X�� */
					iCWin++;
					printf("�A�X���Y,�q���X��,�A��F!");
					printf(" �ثe�q��Ĺ%2d ��\n",iCWin);
				}
				break;
			case 3: /* �� */
				if( iComp==1 ) {
					iCWin++;
					printf("�A�X��,�q���X�ŤM,�A��F!");
					printf(" �ثe�q��Ĺ%2d ��\n",iCWin);
				}
				else if( iComp==2 ) {
					iPWin++;
					printf("�A�X��,�q���X���Y,�AĹ�F!\n");
					printf(" �ثe�AĹ%2d ��\n",iPWin);
				}
				else printf("�A�X��,�q���X��,����!\n");
				break;
			default:
				printf("��J���~\n");
		}
	}
	if(iPWin == 3) printf("����!�AĹ�q����!\n");
	else printf("�o����F�S���Y,�U���~��V�O!\n");
    system("pause");
	return 0;
}