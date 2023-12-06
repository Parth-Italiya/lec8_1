#include<stdio.h>
main()
{
	int a[10],b[10],c[20];
	int n,i;
	
	printf("enter number: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter element A :");
		scanf("%d",&a[i]);
	
	}
		for(i=0; i<n; i++){
		printf("enter element B :");
		scanf("%d",&b[i]);
	
	}
	for(i=0; i<n; i++){
		c[i]=a[i]+b[i];
	}
	

	for(i=0; i<n; i++){
		printf("  %d",c[i]);
	
}
	

}
