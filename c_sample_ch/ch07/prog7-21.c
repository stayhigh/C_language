#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 10		// �w�q�}�C�j�p���`��
void NumberGen();	// �쫬�ŧi
int Search(int);	// �쫬�ŧi
int iNum[NUM]={0};	// �ŧi���쪺�@���}�C
void NumberGen() {
	int i;
	srand((unsigned)time(NULL)); // �]�w�üƲ��ͪ��_�I, ����@���Y�i
	for( i = 0 ; i < NUM ; i++ ) iNum[i] = 1+(int)(50*rand()/RAND_MAX);
}
int Search(int target) {
	int i;
	for( i = 0 ; i < NUM ; i++ ) 
		if( iNum[i] == target ) return(i); // �����w����, �Ǧ^���ޭ�
	return(-1); // �S�����,�Ǧ^ -1
}
int main(void)
{
	int iGuess, ret;
	NumberGen(); // �I�s�禡�A���Ͱ}�C iNum �����e
	do {
		printf("��J1-50�����q������: ");
		scanf("%d",&iGuess);
		ret = Search(iGuess); //�I�s Search �禡�i��j�M
		if( ret >= 0 ) printf("��J�����x�s�b�}�C�� %d ����m\n",ret);
		else printf("�A��J���Ƥ��s�b\n",ret);
	} while( ret == -1 ); // ���J���Ƨ䤣���,�~�����
    system("pause"); return(0);
}