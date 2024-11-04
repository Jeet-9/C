#include<stdio.h>
int main()
{
	int n,flag=1,i;
	printf("Enter no=");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("Number is prime number.");
	}
	else
	{
		printf("Number is Not prime number.");
	}
    return 0;
}