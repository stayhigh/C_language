#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int iN = 60;
	double dV6 = 0.003; //f,e與E的6位數顯示
	double dV5 = 0.00003850168; // 小數點下第 5 位才不是 0 
	printf("%d 的 8 進位: %o. 16 進位: %x 或 %X\n",iN,iN,iN,iN);
	printf("0.003 的%%f: %f\n",dV6); //預設顯示到第6位
	printf("0.003 的%%e: %e, %%E: %E\n",dV6,dV6);
	printf("0.003 的%%g: %g\n",dV6); //這裡 g 選擇 f
	printf("0.00003850168 的%%f: %f, %%e: %e\n",dV5,dV5);
	printf("0.00003850168 的%%g: %g, %%G: %G\n",dV5,dV5);
	system("pause");
	return(0);
}