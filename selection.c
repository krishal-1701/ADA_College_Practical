#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20], i, j, temp, n, min;
	printf("Enter The Value of n : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<=n-2;i++)
	{
		min = i;
		for(j=i+1;j<=n-1;j++)
		{
			if(a[j]<a[min])
			{
				min = j;
			}
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	printf("Sorted array is : ");
	for(i=0;i<n;i++){
	
		printf(" %d ",a[i]);
	}
	getch();
}
