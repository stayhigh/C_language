#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
	int i;
	char cA[10] = "ABCDE";
	char *pc = cA;	// ����O char *pc; pc = cA;
	for( i = 0 ; i <= 5 ; i++ )
		*(pc+i) = *(pc+i) + 32; // pc[i] = pc[i] + 32 �㦳�ۦP���\��
	printf("%s\n",pc);		
	system("pause"); return(0);
}