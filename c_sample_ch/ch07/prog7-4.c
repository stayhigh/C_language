#include <stdio.h>
#include <stdlib.h>
void ArguShow(int, float);
int main(void)
{
	int i = 0, j = 1;
	float f = 2.5f;
	ArguShow(10, f);
	printf("In main, i = %d, j = %d, f = %3.1f\n",i,j,f);
	ArguShow(j, 1.5);
	printf("In main, i = %d, j = %d, f = %3.1f\n",i,j,f);
	system("pause"); return(0);
}
void ArguShow(int i, float f)
{
	int j = 2;
	i = i - j + 1;
	f = f - 1.5;
	printf("In ArguShow, i = %d, j = %d, f = %3.1f\n",i,j,f);
}