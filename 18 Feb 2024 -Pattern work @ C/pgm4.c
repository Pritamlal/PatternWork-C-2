#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number::");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		printf("%d ",j);
		printf("\n");
	}
}
