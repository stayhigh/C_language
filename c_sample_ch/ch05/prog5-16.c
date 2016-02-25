#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int p, q;
	printf("05-¿é¤Jp ­È: ");scanf("%d", &p);
	while ( p > 0 )
	{
		printf("p = %d\n", p); 
		printf("09-¿é¤Jq ­È: ");scanf("%d", &q);
		while(q > 0)
		{
			printf("p*q = %d\n",p*q);
			if (q > 50) break;   // ¸õÂ÷¤º¼hªº while °j°é
			printf("14-¿é¤Jq ­È: "); scanf("%d", &q);
		}
		if (q > 100) break;      // ¸õÂ÷¥~¼hªº while °j°é
		printf("17-¿é¤Jq ­È: "); scanf("%d", &q);
	}
	system("pause"); 
    return(0);
}
