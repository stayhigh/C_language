#include <stdio.h>
#include <stdlib.h>
void TimeTable(int, int); // �禡���쫬�ŧi
int main(void)
{
	int N, M;
	printf("��J NxM ���k���j�p,��ƥΪťն��j: ");
	scanf("%d %d",&N,&M);
	TimeTable(N,M);
	system("pause"); return(0);
}
void TimeTable(int N, int M)
{
	int i, j;
	printf("   *"); /* ��X�Ĥ@�檺*/
	for( j = 1; j <= M ; j++ ) printf("%4d",j);
	printf("\n");
	for( i = 1; i <= N ; i++ ) {
		printf("%4d",i);
		for( j = 1; j <= M ; j++ ) {
			printf("%4d",i*j); // ���k�����e
		}
		printf("\n");
	}
}