#include<stdio.h>

int main()
{
	int arr[100], i, num, n, pos=-1;
	printf("Enter the array size : ");
	scanf("%d", &n);
	printf("Enter the Array Elements : ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be searched: ");
	scanf("%d", &num);
	for(i=0; i<n; i++)
	{
		if(arr[i]==num)
		{
			pos=i+1;
			break;
		}
	}
	if(pos==-1)
	{
		printf("Number cannot be found..!!");
	}
	else
	{
		printf("%d found at the position %d", num, pos);
	}
	return 0;
}
