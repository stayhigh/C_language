#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int ix = 65;
	char cA = 'A', cB = 'B';
	float fx = 65.0f;
	printf("%d == %c = %d\n",ix,cA,ix==cA);
	printf("%d > %c = %d\n",ix,cB,ix>cB);
	printf("%c > %c = %d\n",cB,cA,cB>cA);
	printf("%3.1f == %c = %d\n",fx,cA,fx==cA);
	printf("%3.1f == %d = %d\n",fx,ix,fx==ix);
	printf("%3.1f > %c = %d\n",fx,cB,fx>cB);
	system("pause"); return(0);
}