#include<stdio.h>
int main(){
	int arr[7]={1,2,3,4,4,4,5};
	int i,num;
	printf("The given array is :\n");
	for(i=0;i<7;i++){
		printf("%d",arr[i]);
		printf(" ");
	}
	printf("\nEnter a number to search in array : ");
	scanf("%d",&num);
	for(i=0;i<7;i++){
		if (arr[i]==num){
			printf("Element %d is present at position %d\n",num,i);
			//i++;
		}
		/*if (arr[i]!=num){
			printf("The entered element %d is not present in the given array...!!",num);
		}*/
		
	}
	if (num>5 || num<1){
		printf("The entered element %d is not present in the given array...!!",num);
	}
	return 0;
}