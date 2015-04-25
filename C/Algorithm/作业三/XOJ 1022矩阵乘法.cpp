#include<stdio.h>
#include<math.h>

int main()
{
	int a[100][100];
	int b[100][100];
    int c[100][100];
	int i=0,j,k;
	int N1,M1;
	int N2,M2;
	scanf("%d %d",&N1,&M1);
	for(i=0;i<N1;i++)
	{
		for(j=0;j<M1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&N2,&M2);
	for(i=0;i<N2;i++)
	{
		for(j=0;j<M2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(M1!=N2)
		return 0;
	else for(i=0;i<N1;i++)
	{
		for(j=0;j<M2;j++)
		{
			c[i][j]=0;
			for(k=0;k<M1;k++)
				c[i][j]+=a[i][k]*b[k][j];
		}
	}

	for(i=0;i<N1;i++)
	{
		for(j=0;j<M2;j++)
		{
			printf("%d ",c[i][j]);	
		}
        printf("\n");
	}
	return 0;
}