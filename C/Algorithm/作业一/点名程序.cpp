//ע���ļ��Ķ�д���Լ�������Ĳ���
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<time.h>
# define size 4//�༶����
#define PATH  "E:\\mingdan.txt"
struct student {
	char name[20];
	int num;
	int time;
}std[size];

void main()
{
	int i,r,n=0,m=0;
	float p, a[size];
	char c;
	FILE *fp;   
	//�ļ���ȡ
	if((fp=fopen(PATH,"r"))==NULL)
	{printf("���ļ�ʧ��\n");exit(0);}
	for(i=0;i<size;i++)
		fscanf(fp, "%s %d %d", std[i].name, &std[i].num,&std[i].time);//std[i].timeÿ������һ�����������˻�����һ��û��������һ

	for(i=0;i<size;i++)
		printf("%s %d %d\n", std[i].name, std[i].num,std[i].time);

	//�漴���ɵ�����׼
	srand((int)time(0));
	r=rand()%100;  
	p=r*1.0/99; printf("���ε��ֵ���ڵ���%f��ѧ��\n",p);
	for(i=0;i<size;i++)
		a[i]=std[i].time*1.0/20;
	for(i=0;i<size;i++)
	{
		if(a[i]>=p)
		{
			printf("%s",std[i].name); n++;//�ᱻ�㵽������
			printf("�����밴��y����û���밴��n��\n");
			c=getchar();
			getchar();
			if(c=='y') std[i].time--;
			else 
			{std[i].time++;m++;}//m��¼û��������
		}
	}
	fclose(fp);
	//��������
	if((fp=fopen(PATH,"wt"))==NULL)
	{printf("���ļ�ʧ��\n");exit(0);}
	for(i=0;i<size;i++)
		fprintf(fp, "%s %d %d\n", std[i].name, std[i].num,std[i].time);

	fclose(fp);
	printf("���ε���������%d���ˣ���%d����û����\n",n,m);

}