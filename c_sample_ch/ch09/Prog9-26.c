#include <stdio.h>
#include <stdlib.h>
typedef struct TNode {
	int num;
	struct TNode *Link;
} NODE, *PNODE;
int main(void)
{
	int i, num, in;
	PNODE pHead, pTail, pGet;	// �ŧi�һݭn�����c�����ܼ�
	pHead = pTail = NULL;		// �������ܼƤ��e��NULL
	printf("�п�J�ݭn�X�� node : "); scanf("%d",&num);
	if( (pHead = (PNODE) malloc(sizeof(NODE))) == NULL  ) { // �����Ĥ@�� node
		printf("�O���餣��\n"); exit(0);
	}
	printf("�п�J��1 ��node �����e: "); scanf("%d",&in);
	pHead->num = in; pHead->Link = NULL; // �]�w Head �`�I�����e
	pTail = pHead;
	for( i = 1 ;i < num ; i++ ) { // �̧Ǩ��o�᭱�`�I���x�s��m,�ó]�w���e
		if( (pGet = (PNODE) malloc(sizeof(NODE))) == NULL  ) {
			printf("�O���餣��\n"); exit(0);
		}
		printf("�п�J��%d ��node �����e: ",i+1); scanf("%d",&in);
		pGet->num = in; pGet->Link = NULL;	// �]�w�ثe���o�`�I�����e
		pTail->Link = pGet; pTail = pGet;		// �إ߸`�I�����쵲
	}
	pGet = pHead; i = 1;
	while( pGet != NULL ) { // ��X link list �����e
		printf("��%d ��node �����e�O%d\n",i,pGet->num);
		pGet = pGet->Link; i++;
	}
	system("pause"); return(0);
}