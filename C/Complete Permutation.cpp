#include<stdio.h>
int n,a[9];
void cp(int i)
{
	int j,k,temp;
	if(i==n)
	{
		for(j=1;j<n;j++)
			printf("%d ",a[j]);
		if(j=n)
			printf("%d",a[j]);
		printf("\n");
		return;
	}
	for(j=i;j<=n;j++)
	{
		temp=a[j];
		for(k=j;k>i;k--)
			a[k]=a[k-1];
		a[i]=temp;
		cp(i+1);
		for(k=i;k<j;k++)
			a[k]=a[k+1];
		a[j]=temp;
	}
}
int main()
{
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		a[i]=i;
	cp(1);
	return 0;
}