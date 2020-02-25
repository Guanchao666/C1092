#include<stdio.h>
//1160

void fun(int n,int m)
{
	int i,j;
	int count=1;
	int a[m];
	for(i=0;i<m;i++)
	{
		a[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		count++;
		if(count==m)
		{
			count=1;
			for(j=i;j<n;j++)
			{
				a[i]=a[i+1];
			}
		}
	}
	printf("%d",i);
	return;
}

int main()
{
	int n,m;
//	while(~scanf("%d%d",&n,&m))
	scanf("%d%d",&n,&m);
	fun(n,m);
	return 0;
}
