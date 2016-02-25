#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
	char cDigit[10] = "123456789";
	char *pc;
	int	 i;
	pc = &cDigit[0]; // pc = cDigit 具有相同的設定
	for( i = 0 ; i <= 8 ; i+=2 ) printf("%s\n",pc+i);
	for( i = 8 ; i >= 0 ; i-=2 ) printf("%c",*(pc+i)); printf("\n");
	for( i = 0 ; i <= 8 ; i+=2 ) printf("%c",pc[i]);   printf("\n");
	for( i = 8 ; i >= 0 ; i-=2 ) printf("%s\n",&pc[i]);
	system("pause"); return(0);
}