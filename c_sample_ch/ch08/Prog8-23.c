#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 10;
	int *pi;
	int **ppi;
	pi =  &i;  //�����ܼƪ����e���V�@���ܼƪ�����
	ppi = &pi; //���������ܼƪ����e���V�����ܼƪ�����
	printf("p   ������:%p\n",&i);
	printf("pi  ������:%p pi  ���k��:%p\n",&pi, pi);
	printf("ppi ������:%p ppi ���k��:%p **ppi=%d\n",&ppi,*ppi,**ppi);
	system("pause"); return(0);
}