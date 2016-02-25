#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iGrade;
	printf("叫块Θ罿: "); scanf("%d",&iGrade);
	if (iGrade>=90)			/* grade 单 90*/
		printf("纔单!!\n"); /* 痷, 块挡狦*/
	else if (iGrade>=80)	/* 安, 耞 grade 单 80 琌痷*/
		printf("ヒ单!!\n");	/* 痷, 块挡狦*/
	else if (iGrade>=70)	/* 安, 耞grade 单 70 琌痷*/
		printf("单!!\n"); /* 痷, 块挡狦*/
	else if (iGrade>=60)	/* 安, 耞grade 单60 琌痷*/
		printf("单!!\n");	/* 痷, 块挡狦*/
	else
		printf("单!!\n");	/* 安, 块挡狦*/
	system("pause"); 
	return 0;
}
