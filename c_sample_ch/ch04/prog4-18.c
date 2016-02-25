#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int ix = 1;
   int iSum = 0; /* 計算總和, 初始值為 0 */
   while( ix <= 100 ) 
   {
	   iSum = iSum + ix;
	   ix++; /* ix = ix + 1 */
   }
   printf("1+2+...+100=%d\n",iSum);
   system("pause"); return 0;
}