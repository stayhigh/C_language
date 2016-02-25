#include <stdio.h>
#include <stdlib.h>
int main()
{
	int Num[3][4]={{ 1, 2, 3, 4},
				    {11,12,13,14},
                  {21,22,23,24}};
	printf("**Num = %d\n",**Num);
	printf("*Num    = %p *Num  = %p\n",*Num,*Num);
	printf("*(Num+1)= %p *Num+1= %p\n",*(Num+1),*Num+1);
	printf("*(Num+2)= %p *Num+2= %p\n",*(Num+2),*Num+2);
	printf("*(Num+1)+1= %p *(Num+2)+1= %p\n",*(Num+1)+1,*(Num+2)+1);
	printf("*(*(Num+2)+1)= %d *(*(Num+2)+2)= %d\n",*(*(Num+2)+1),*(*(Num+2)+2));
	system("pause"); return(0);
}