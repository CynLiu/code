#include<stdio.h>   
int main()   
{   
    int N,i;   
	int count=0;
    int t[6];   
    int sum;
	int b[6]={500,100,50,10,5,1};   
    scanf("%d",&N);   
    sum=1000-25*N;   
    for(i=0;i<6;i++)   
      scanf("%d",&t[i]);   
    for(i=0;i<6;i++)   
     while(t[i]>0 && sum>=b[i])   
    {      
        sum=sum-b[i];   
        t[i]=t[i]-1;   
        count++;   
    }   
  if(sum>0)   
    printf("-1");   
    else  
    printf("%d \n",count);   
 return 0;   
} 