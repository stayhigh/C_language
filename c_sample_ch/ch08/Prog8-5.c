#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
	char   c='a', *pc;
	int	   i = 1,  *pi;
	double d = 1.2f, *pd;
	pc = &c; pi = &i; pd = &d;
	for( i = -2 ; i <= 2 ; i++ )  
		printf("pc%+d = %p, pi%+d = %p, pd%+d = %p\n",i,pc+i,i,pi+i,i,pd+i);
	system("pause"); return(0);
}