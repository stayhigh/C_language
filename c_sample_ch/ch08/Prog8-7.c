#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
	int i;
	char cA[10] = "ABCDE";
	char *pc = cA;	// 等於是 char *pc; pc = cA;
	for( i = 0 ; i <= 5 ; i++ )
		*(pc+i) = *(pc+i) + 32; // pc[i] = pc[i] + 32 具有相同的功能
	printf("%s\n",pc);		
	system("pause"); return(0);
}