#include <stdio.h>
#include <stdlib.h>
int * GetStorage(int);
int * GetStorage(int n)
{
	int *pget;
	if((pget = (int*)malloc(sizeof(int)*n)) == NULL ) {
		printf("�O����Ŷ�����\n"); exit(0);
	}
	return(pget); // �Ǧ^ pget ���k�ȡA�]�N�O���o���O����}�Y����}
}
int main()
{
	int sum,i,n=2;
	int iMax = 5; // �w�]�̤j���x�s�Ŷ���
	int *piNum; 
	piNum = GetStorage(iMax);
	while( n >= 2 ) { // �p�� 1 ���ɡA�N�������
		sum = 0; // �N�`�M���k�s
		printf("�@�ݭn�p��h�ֵ��ƭȪ��`�M: "); scanf("%d",&n);
		if( n > iMax ) { // �W�L�ثe���o���̤j�x�s�Ŷ�			
			free(piNum); // �����񤧫e���o���Ŷ�
			iMax = n;
			piNum = GetStorage(iMax);
		}
		for( i = 0 ; i < n ; i++) {
			printf("�п�J��%2d �Ӽƭ�:",i+1);
			scanf("%d",&piNum[i]); // ��J�� i �����
			sum += piNum[i];   // �p���`�M
		}
		printf("�`�M����%d\n",sum);
	} 
	free(piNum);  // ����t�m���O����
	system("pause"); return(0);
}