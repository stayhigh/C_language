#include <stdio.h>
#include <stdlib.h>
#define NUM_PER_LINE 6
int main(void)
{
	int i, j, halfi;
	int flag;  /*1 ボ赣计琌借计, 0 ボ赣计ぃ琌借计*/
	int num = 0; /* ヘ玡―眔借计计*/
	for(i = 2; i<= 100 ;i++)  /* 糷癹伴北砆埃计*/
	{
		flag = 1; halfi = i/2; /*安砞赣计借计*/
		for (j = 2 ; j <= halfi ; j++) 
		{
			if (i%j == 0) 
			{
				flag = 0; break; /* ぃ琌借计*/
			}
		}
		if( flag )
		{ /* 琌借计*/
			printf("%3d ",i);
			num++; 
			if (num%NUM_PER_LINE == 0)  printf("\n");
		}
	}
	system("pause");
	return 0;
}