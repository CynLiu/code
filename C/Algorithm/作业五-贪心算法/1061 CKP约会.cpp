#include<iostream>      
#include<time.h>      
using namespace std;      
typedef struct {      
    char name[20];      
    int h1,m1,h2,m2;      
}MM;      
MM a[2001];      
int n;      
     
inline bool cmp(const MM &a,const MM &b) 
{      
 return (a.h2<b.h2)|| (a.h2==b.h2 && a.m2<b.m2);      
}      
     
void qsort(int l,int r)
 {      
    int i=l,j=r;      
    MM x=a[l+rand()%(r-l)],y;      
    do {      
        while (cmp(a[i],x)) i++;      
        while (cmp(x,a[j])) j--;      
        if (!(i>j)) {      
            y=a[i];      
            a[i]=a[j];      
            a[j]=y;      
            i++;      
            j--;      
            }      
    }while (i<j);      
    if (i<r) qsort(i,r);      
    if (l<j) qsort(l,j);      
}      
     
int main()      
{      
    int i;      
    char st[5];      
    bool flag[2001]={0};      
    srand(time(0));      
    scanf("%d",&n);      
    for(i=1;i<=n;i++) {      
    gets(st);      
    scanf("%s %d:%d %d:%d",a[i].name,&a[i].h1,&a[i].m1,&a[i].h2,&a[i].m2);      
    }      
    if (n>1) qsort(1,n);      
    int ans=0;      
    MM x={"lys",0,0,0,0};      
    for(i=1;i<=n;i++)      
       
	if (x.h2<a[i].h1 || (x.h2==a[i].h1 && x.m2<=a[i].m1) ) 
	{      
            ans++;      
            x=a[i];      
            flag[i]=1;      
    }      
    printf("%d\n",ans);      
      for(i=1;i<=n;i++) 
	  if (flag[i]==1) printf("%s ",a[i].name);      
    return 0;      
}