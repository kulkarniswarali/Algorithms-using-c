/**
	File - insertionsort.c
	Description - Insertion sort.
	Course - S.Y Bsc(cs)
	Author - Swarali Kulkarni
*/
#include<stdio.h>
main()
{
	int a[10];
	int n,i,j,k,key;

	printf("Enter no of elements:\n");
	scanf("%d",&n);

	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(j=1;j<n;j++)
	{
		key = a[j];
		i=j-1;

		while(i>=0 && a[i]>key)  
		{
			a[i+1] = a[i];
			i=i-1;
		}
		a[i+1]=key;
	}

	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

}