#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
	int	  i = 1,    *pi;
	float f = 1.2f, *pf;
	void  *pv;
	pi = &f;	// �sĶ�|�ɥX�{ ���ۮe�����O - �q 'float *' �� 'int *' ��ĵ�i�T��
	pf = &i; 	// �sĶ�|�ɥX�{ ���ۮe�����O - �q 'int *' �� 'float *' ��ĵ�i�T��
	printf("*pi = %d,*pf = %f\n",*pi,*pf);
	pv = &i; // ���V�ܼ� i
	printf("*pv = %d  ",*(int *)pv);    // ��X�e�ন int ���O
	pv = &f; // ����V�ܼ� f
	*(float *)pv = *(float *)pv + 1.0f; // �p����ন float ���O
	printf("*pv = %f\n ",*(float *)pv); // ��X�e�ন float ���O
	system("pause"); return(0);
}