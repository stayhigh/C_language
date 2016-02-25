#include <stdio.h>
#include <stdlib.h>
typedef struct TNode {
	int num;
	struct TNode *Link;
} NODE, *PNODE;
int main(void)
{
	int i, num, in;
	PNODE pHead, pTail, pGet;	// 宣告所需要的結構指標變數
	pHead = pTail = NULL;		// 讓指標變數內容為NULL
	printf("請輸入需要幾個 node : "); scanf("%d",&num);
	if( (pHead = (PNODE) malloc(sizeof(NODE))) == NULL  ) { // 取的第一個 node
		printf("記憶體不足\n"); exit(0);
	}
	printf("請輸入第1 個node 的內容: "); scanf("%d",&in);
	pHead->num = in; pHead->Link = NULL; // 設定 Head 節點的內容
	pTail = pHead;
	for( i = 1 ;i < num ; i++ ) { // 依序取得後面節點的儲存位置,並設定內容
		if( (pGet = (PNODE) malloc(sizeof(NODE))) == NULL  ) {
			printf("記憶體不足\n"); exit(0);
		}
		printf("請輸入第%d 個node 的內容: ",i+1); scanf("%d",&in);
		pGet->num = in; pGet->Link = NULL;	// 設定目前取得節點的內容
		pTail->Link = pGet; pTail = pGet;		// 建立節點間的鏈結
	}
	pGet = pHead; i = 1;
	while( pGet != NULL ) { // 輸出 link list 的內容
		printf("第%d 個node 的內容是%d\n",i,pGet->num);
		pGet = pGet->Link; i++;
	}
	system("pause"); return(0);
}