#include<stdio.h>
#define N 9
int a[N];
int n;
void print()
{  int i;
 for(i=1;i<=n;i++)
	 printf("%d",a[i]);
 printf("\n");
}
void perm1(int m)
{  int i,t,j,x;
   if(m==n) print();
   else
     for(j=m;j<=n;j++)
        { 
          t=a[j];a[j]=a[m];a[m]=t; 
		  if(j!=m)
		  {
                   t=a[j]; 
			       x=j;
			       while(x>=m+2)
				   {
			        a[x]=a[x-1];
			     	x--;
				   }
			       a[m+1]=t;
		  }//if
          perm1(m+1);
          if(j!=m)
		  {
                   t=a[m+1]; x=m+1;
				   while(x<=j-1)
				   {
					 a[x]=a[x+1];
					 x++;
				   }
	              a[j]=t;
			}//if
          t=a[j];a[j]=a[m];a[m]=t;
       }
 }

void main()
{ int j;
printf("ÇëÊäÈën\n");
 scanf("%d",&n);
  for(j=1;j<=n;j++)
	  a[j]=j;
  perm1(1);

}


