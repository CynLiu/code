#include<stdio.h>
#define MAXSIZE 20   //一个用作示例的小顺序表的最大长度
int Insertsort(int r[],int n)  //作直接插入排序
{
int i,j;
for(i=2;i<=n;i++)
{  r[0]=r[i];		//r[0]用作哨兵单元
j=i-1;
while(r[0]<r[j])
{  r[j+1]=r[j];	//使得记录后移
j--;
}
r[j+1]=r[0];		//插入到正确位置
for(j=1;j<=n;j++)	//输出每趟排序的结果
{
printf("%d",r[j]);	  
}
printf("\n");
}
return 0;}
int main()
{
       int n,i;		//待排序的关键字个数
    int r[MAXSIZE];
	printf("请输入待排序的关键字个数：");
	scanf("%d",&n);
	for(i=1;i<=n;i++) //输入待排序的关键字
		scanf("%d",&r[i]);
	Insertsort(r,n);
}