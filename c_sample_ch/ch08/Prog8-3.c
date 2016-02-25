#include <stdio.h>
#include <stdlib.h>
int main(void)
{	
	char   c ='a', *pc;
	int    i=1, *pi;
	float  f=10.f, *pf;
	double d=10.f, *pd;
	pc = &c; pi = &i;
	pf = &f; pd = &d;
	printf("pc 的大小:%d *pc 的大小:%d\n",sizeof(pc),sizeof(*pc));
	printf("pi 的大小:%d *pi 的大小:%d\n",sizeof(pi),sizeof(*pi));
	printf("pf 的大小:%d *pf 的大小:%d\n",sizeof(pf),sizeof(*pf));
	printf("pd 的大小:%d *pd 的大小:%d\n",sizeof(pd),sizeof(*pd));
	system("pause"); return(0);
}
