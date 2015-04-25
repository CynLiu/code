#include <stdio.h>
int d[101][101];
void shortpath(int m)
{
	int v,u,w;
	for(u=0;u<m;u++)
		for(v=0;v<m;v++)
			for(w=0;w<m;w++)
				if(d[v][u]+d[u][w]<d[v][w])
					d[v][w]=d[v][u]+d[u][w];
}
int solve(int n,int m)
{
	int a,b,i,j,l=0;
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
			if(i==j) d[i][j]=0;
			else d[i][j]=d[j][i]=500;
	for(i=0;i<m;i++) {
		scanf("%d%d",&a,&b);
		if(a!=b) d[a-1][b-1]=d[b-1][a-1]=1;
	}
	shortpath(n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(d[i][j]>=500) return -1;
			else if(d[i][j]>l) l=d[i][j];
	return l;
}
int main()
{
	int n,m,count=1;
	scanf("%d%d",&n,&m);
	while(!(n==0&&m==0)) {
		int an=solve(n,m);
		printf("Case %d:\n",count);count++;
		if(an==-1) printf("Secret.\n");
		else printf("%d\n",an);
		scanf("%d%d",&n,&m);
	}
	return 0;
}