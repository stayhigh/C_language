#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int p, q;
	printf("05-��Jp ��: ");scanf("%d", &p);
	while ( p > 0 )
	{
		printf("p = %d\n", p); 
		printf("09-��Jq ��: ");scanf("%d", &q);
		while(q > 0)
		{
			printf("p*q = %d\n",p*q);
			if (q > 50) break;   // �������h�� while �j��
			printf("14-��Jq ��: "); scanf("%d", &q);
		}
		if (q > 100) break;      // �����~�h�� while �j��
		printf("17-��Jq ��: "); scanf("%d", &q);
	}
	system("pause"); 
    return(0);
}
