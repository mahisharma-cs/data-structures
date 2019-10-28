#include<stdio.h>
int main(){
	int arr[100];
	int ele,i,size;
	printf("\nEnter the size of array : ");
	scanf("%d",&size);
	printf("\n");
	for(i=0;i<size;i++){
		printf("Enter the %d's element : ",i);
		scanf("%d",&arr[i]);
	}
	printf("The entered array is : ");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\nEnter the element you want to search : ");
	scanf("%d",&ele);
	for(i=0;i<size;i++){
		if(arr[i]==ele){
			printf("The element %d is present at position %d\n",ele,i);
		}
	}
	for(i=0;i<size;i++){
		if(arr[i]==ele){
			break;
		}
	}
	if(i==size){
		printf("\nNot present\n");
	}
	return 0;
}