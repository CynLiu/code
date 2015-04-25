#include <stdio.h>
#include <string.h>

char string[9]="12345678";
int used[9]={0};
char output[9];
int length;

void F(int d)
{
int i;
for(i=0;i<=length;i++)
{
if(!used[i])
{
used[i]=1;
output[d]=string[i];
if(d==length)
{
for(d=0;d<length;d++)
printf("%c ",output[d]);
printf("%c\n",output[length]);
}
else
F(d+1);
used[i]=0;
}
}

}

int main(void)
{
int n;
scanf("%d",&n);

string[n]=0;
length=strlen(string)-1;

F(0);

return 0;
}