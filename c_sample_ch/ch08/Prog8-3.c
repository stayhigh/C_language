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
	printf("pc ���j�p:%d *pc ���j�p:%d\n",sizeof(pc),sizeof(*pc));
	printf("pi ���j�p:%d *pi ���j�p:%d\n",sizeof(pi),sizeof(*pi));
	printf("pf ���j�p:%d *pf ���j�p:%d\n",sizeof(pf),sizeof(*pf));
	printf("pd ���j�p:%d *pd ���j�p:%d\n",sizeof(pd),sizeof(*pd));
	system("pause"); return(0);
}
