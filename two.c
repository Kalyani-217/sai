#include<stdio.h>
void main()
{
	int f=1,n,i;
        printf("enter the number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("the factorial is=%d\n",f);
}
