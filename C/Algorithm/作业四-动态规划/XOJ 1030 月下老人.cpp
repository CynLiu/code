#include <stdio.h>
#include <string.h>
char x[1002],y[1002];
int c[1002][1002];
int LCS(int m,int n)
{
	int i,j;
	for(i=1;i<=m;i++)
		c[i][0]=0;
	for(j=0;j<=n;j++)
		c[0][j]=0;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++) {
			if(x[i]==y[j])
				c[i][j]=c[i-1][j-1]+1;
			else if(c[i-1][j]>=c[i][j-1])
				c[i][j]=c[i-1][j];
			else
				c[i][j]=c[i][j-1];
		}
	return c[m][n];
}
int main()
{
	int m,n;
	int i;
	scanf("%d %d",&m,&n);
	getchar();
	for(i=1;i<=m;i++)
		x[i]=getchar();
	getchar();
	for(i=1;i<=n;i++)
		y[i]=getchar();
	printf("%d\n",LCS(m,n));
	return 0;
}