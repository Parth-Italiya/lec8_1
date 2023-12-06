#include<stdio.h>

void main(){
	
	int i,n,length=0;
	 printf("enter the size of the array: ");
	 scanf("%d",&n);
	
	int a[n];
	for(i=0; i<=n-1; i++){
		printf("\nenter the element a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++){
		printf("\nthe element of a[%d] is: %d", i,a[i]);
		if(a[i]!=0){
			length++;
		}
		printf("\n\nthe lenght of array is : %d",length);
	}
}


