#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch = 'A';
	int ix = 1;
	float fx = 3.145f;
	double dy = 10.5;
	printf("cx = %c ",ch); ch++; printf("ch++ = %c\n",ch);
	printf("ix = %d ",ix); ix++; pr intf("ix++ = %d\n",ix);
	printf("fx = %6.3f ",fx); fx++; printf("fx++ = %6.3f\n",fx);
	printf("fx = %6.3f ",dy); dy++; printf("dy++ = %6.3f\n",dy);
	system("pause");
	return(0);
}