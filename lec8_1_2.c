#include<stdio.h>
main()
{
	int a[10],sum=0;
	int n,i;
	
	printf("enter number: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter element :");
		scanf("%d",&a[i]);
	
	}
	for(i=0; i<n; i++){
		printf("  %d",a[i]);
			sum +=a[i];
	}
	
	printf("\n\nsum = %d",sum);
		printf("\navg = %d",sum/n);
	
}
