#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *piNum; 
	int sum = 0,i,n; // sum �O�`�M, i �O�j���ܼ�, n ���ƭȭӼ�
	printf("�@�ݭn�p��h�ֵ��ƭȪ��`�M: "); scanf("%d",&n);
	piNum = (int*)malloc(sizeof(int)*n); //���o n �� int ���O���x�s�Ŷ�
	for( i = 0 ; i < n ; i++) {
		printf("�п�J��%2d �Ӽƭ�:",i+1);
		scanf("%d",piNum+i); // ��J�� i �����
		sum += *(piNum+i);   // �p���`�M
	}
	printf("�`�M����%d\n",sum);
	free(piNum);  // ����t�m���O����
	system("pause"); return(0);
}
