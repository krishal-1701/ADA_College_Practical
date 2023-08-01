#include<stdio.h>
#include<conio.h>
void main()
{
	int i , j , n , a[20], temp;
	printf("Enter The Value of n : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-1-i; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
