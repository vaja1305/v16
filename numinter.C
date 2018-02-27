##include<stdio.h>
#include<conio.h>
ivoid main()
{
	int n,i,a;
	scanf("%d",&n);
  getch();
	for(i=1;i<=n;i++)
	{
	a=n*i;
	printf("%d*%d=%d\n",n,i,a);
	}
	return 0;
}
