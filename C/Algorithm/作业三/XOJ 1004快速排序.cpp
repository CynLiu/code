#include<stdio.h>      
int data[1000001];      
int less(int i,int j)      
{      
    return data[i]<data[j];      
}      
void swap(int i,int j)      
{      
    int t;      
    t=data[i];      
    data[i]=data[j];      
    data[j]=t;      
}      
void shift(int i,int j)      
{      
    data[i]=data[j];      
}      
void quickhelp(int lo,int hi)      
{      
    int i,j,m;      
    if(lo<hi)      
    {      
        i=lo;      
        j=hi;      
        m=(lo+hi)/2;      
        do{      
            while(less(i,m))i++;      
            while(less(m,j))j--;      
            if(i<=j)      
            {      
                if(m==i)m=j;      
                else     
                    if(m==j)      
                        m=i;      
                swap(i,j);      
                i++;      
                j--;      
            }      
        }      
        while(i<=j);      
        quickhelp(lo,j);      
        quickhelp(i,hi);      
    }      
}      
int main()      
{      
    int n,i;      
    scanf("%d",&n);      
    for(i=1;i<=n;i++)      
        scanf("%d",&data[i]);      
    quickhelp(1,n);      
    for(i=1;i<=n;i++)      
        printf("%d ",data[i]);      
    printf("\n");      
    return 0;      
}