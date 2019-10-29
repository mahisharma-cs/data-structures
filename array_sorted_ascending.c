#include<stdio.h>
int main(){
	int arr[100];
	int i,inc,size,j;
	printf("\nProgram of sorting element in assending order:\n\n");
	printf("Enter the size of array : ");
	scanf("%d",&size);
	printf("\n");
	for(i=0;i<size;i++){
		printf("Enter the %d's element : ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nThe entered array is : ");
	for(i=0;i<size;i++)
		{
			printf(" %d ",arr[i]);
		}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(arr[i] > arr[i+1]){
				inc=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=inc;
			}
		}
	}
	printf("\nThe new sorted array is : ");
	for(i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
	printf("\n");
	return 0; 
}