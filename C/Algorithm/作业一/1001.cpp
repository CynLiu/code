#include <stdio.h>
int main()
{
int i;
int N;
int s=1;
scanf("%d",&N);
for(i=1;i<=N;i++)
{
s*=2;
}
printf("%d\n",s);
return 0;
} 
