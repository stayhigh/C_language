#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;	/* �e n �����p���ܼ� */
	double dtotal, dx;
	int n;	/* �ϥΪ̿�J�� n ���� */
	printf("��J�n�[�`������: ");
	scanf("%d", &n);
	for (dtotal=0, dx=1, i=1; i <= n; i++, dx *= 2.0) {
		dtotal += 1.0/dx; /* �[�` 1/(2^i) */
		printf("�e %2d �����`�M = %f\n", i,dtotal);
	}
	system("pause"); return(0);
}