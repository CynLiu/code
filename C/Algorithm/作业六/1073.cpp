#include <cstdio>         
char name[501][50];         
int g[501][501]={0},a[501],b[501];         
int main()         
{         
	int N,i,j,k,t;         
    bool flag;         
	scanf("%d\n",&N);         
	for (i=1;i<=N;i++)         
        scanf("%s",name[i]);         
	for (i=1;i<=N;i++) a[i]=0;         
	b[0]=0;         
	for (i=1;i<=N;i++)         
	{         
        scanf("%d",&k);         
        for (j=1;j<=k;j++)         
		{         
            scanf("%d",&t);         
            ++g[t][0];g[t][g[t][0]]=i;         
			++a[i];         
        }         
    }         
	for (j=1;j<=N;j++)         
    {         
		flag=false;         
        for (i=1;i<=N;i++)         
			if (a[i]==0)         
            {         
				flag=true;         
                b[++b[0]]=i;         
                a[i]=-1;         
				for (k=1;k<=g[i][0];k++) a[g[i][k]]--;         
				break;         
			}         
			if (!flag) {printf("Impossible!\n");
			return 0;}         
    }         
    for (i=1;i<=N;i++) 
		printf("%s ",name[b[i]]);        
    return 0;         
}  