//注意文件的读写，以及随机数的产生
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<time.h>
# define size 4//班级人数
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
	//文件读取
	if((fp=fopen(PATH,"r"))==NULL)
	{printf("打开文件失败\n");exit(0);}
	for(i=0;i<size;i++)
		fscanf(fp, "%s %d %d", std[i].name, &std[i].num,&std[i].time);//std[i].time每个人有一个基数，来了基数减一，没来基数加一

	for(i=0;i<size;i++)
		printf("%s %d %d\n", std[i].name, std[i].num,std[i].time);

	//随即生成点名标准
	srand((int)time(0));
	r=rand()%100;  
	p=r*1.0/99; printf("本次点比值大于等于%f的学生\n",p);
	for(i=0;i<size;i++)
		a[i]=std[i].time*1.0/20;
	for(i=0;i<size;i++)
	{
		if(a[i]>=p)
		{
			printf("%s",std[i].name); n++;//会被点到的人数
			printf("来了请按‘y’，没来请按‘n’\n");
			c=getchar();
			getchar();
			if(c=='y') std[i].time--;
			else 
			{std[i].time++;m++;}//m记录没来的人数
		}
	}
	fclose(fp);
	//保存数据
	if((fp=fopen(PATH,"wt"))==NULL)
	{printf("打开文件失败\n");exit(0);}
	for(i=0;i<size;i++)
		fprintf(fp, "%s %d %d\n", std[i].name, std[i].num,std[i].time);

	fclose(fp);
	printf("本次点名共点了%d个人，有%d个人没有来\n",n,m);

}