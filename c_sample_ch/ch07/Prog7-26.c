#include <stdio.h>
#include <stdlib.h>
#include "area.h" // Ū�J area.h 
int main(void)
{
	float l, h, r;
	printf("��Ϊ��b�|��: "); scanf("%f",&r);
	printf("��Ϊ����n��: %1.2f\n",CIRCLE(r));
	printf("����Ϊ����P�e: "); scanf("%f %f",&l,&h);
	printf("����Ϊ����n��: %1.2f\n",RECTANGLE(l,h));
	system("pause"); return(0);
}