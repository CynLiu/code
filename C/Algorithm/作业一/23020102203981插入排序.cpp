#include<stdio.h>
#define MAXSIZE 20   //һ������ʾ����С˳������󳤶�
int Insertsort(int r[],int n)  //��ֱ�Ӳ�������
{
int i,j;
for(i=2;i<=n;i++)
{  r[0]=r[i];		//r[0]�����ڱ���Ԫ
j=i-1;
while(r[0]<r[j])
{  r[j+1]=r[j];	//ʹ�ü�¼����
j--;
}
r[j+1]=r[0];		//���뵽��ȷλ��
for(j=1;j<=n;j++)	//���ÿ������Ľ��
{
printf("%d",r[j]);	  
}
printf("\n");
}
return 0;}
int main()
{
       int n,i;		//������Ĺؼ��ָ���
    int r[MAXSIZE];
	printf("�����������Ĺؼ��ָ�����");
	scanf("%d",&n);
	for(i=1;i<=n;i++) //���������Ĺؼ���
		scanf("%d",&r[i]);
	Insertsort(r,n);
}