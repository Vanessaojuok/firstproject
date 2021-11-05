#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// inserting values into an array 66 78 45 67 5
int main(int argc, char *argv[]) {
	int arr[5];
	int i;
	printf("Enter five values: \n");
	for (i=0;i<5;i++){
		scanf("%d", &arr[i]);
	}
	for (i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	// update array element
	printf("\n");
	arr[3]=789;
	printf("%d\n",arr[3]);
	for (i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	// searching in array
	printf("\n");
	int pos;
	printf("Enter position: \n");
	scanf("%d", &pos);
	for (i=0;i<5;i++){
		if(pos == i+1){
			printf("at position %d we have %d",pos, arr[i]);	
		}
		else if (pos>5 || pos<1 ) {
			printf("Out of range");
			break;
		}
	}
	//deletion
	int del;
	printf("\n"); 
	printf("Enter position to be deleted: \n");
	scanf("%d", &del);
	for (i=del-1;i<5;i++){
		arr[i]=arr[i+1];
	}
	for (i=0;i<4;i++){
		printf("%d ",arr[i]);
	}
	// 
	return 0;
}
