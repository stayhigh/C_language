#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iScore[4];
	int i, x, itotal; /* x �Ψӱ�����J�����Z */
	for(i=0; i<=3 ; i++) {
		printf("�п�J���Z: ");
		scanf("%d",&x);
		iScore[i] = x;/*���Z�x�s��}�C�� */
	}
	for(itotal = 0, i=0; i<=3 ; i++)  {
		printf("�� %d �����Z: %2d\n",i+1,iScore[i]); /* ��X�x�s�����Z */
		itotal += iScore[i]; /* �p��[�` */
	}
	printf("�`���Z: %d, �������Z: %.2f\n",itotal, itotal/4.0f);
	system("pause"); 
	return(0);
}