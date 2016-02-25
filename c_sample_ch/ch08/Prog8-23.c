#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 10;
	int *pi;
	int **ppi;
	pi =  &i;  //指標變數的內容指向一般變數的左值
	ppi = &pi; //雙重指標變數的內容指向指標變數的左值
	printf("p   的左值:%p\n",&i);
	printf("pi  的左值:%p pi  的右值:%p\n",&pi, pi);
	printf("ppi 的左值:%p ppi 的右值:%p **ppi=%d\n",&ppi,*ppi,**ppi);
	system("pause"); return(0);
}