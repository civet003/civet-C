// C����ʥ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i,j,k,z,a,n;
	printf("����ף�������ǰ��С�ɰ�ʥ������(��������)��");printf("\n");
	printf("�������м���ѡ����Ҫ����ѡ������Ҫ�ҵĴ����߸�������ʥ���������Լ���һ���أ�",&n);
	printf("\n");
	printf("�������ߵ�ѡ0������Լ�����ѡ1ף������o(*^��^*)o");printf("\n");
	scanf("%d",&a);
	if(a==0)
	{
char  p='_',q='|';
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=46-i;j++)
			printf("%c",' ');
		putchar(47);
		if(i!=1){
		for(j=1;j<=2*(i-1);j++)
			printf("%c",' ');
		putchar(92);}
		else
			putchar(92);
		printf("\n");
	}
for(j=1;j<=46-i;j++)
			printf("%c",' ');
		putchar(47);
		putchar(p);putchar(p);
		printf("%c",' ');printf("%c",' ');printf("%c",' ');printf("%c",' ');
		putchar(p);putchar(p);
		putchar(92);
printf("\n");
for(i=1;i<=5;i++){
	for(j=1;j<=43-i;j++)
			printf("%c",' ');printf("%c",' ');
		putchar(47);
		for(j=1;j<=2*(i+1);j++)
printf("%c",' ');
		putchar(92);
printf("\n");

}
for(j=1;j<=44-i;j++)
			printf("%c",' ');
		putchar(47);
		putchar(p);putchar(p);putchar(p);putchar(p);putchar(p);
printf("%c",' ');printf("%c",' ');printf("%c",' ');printf("%c",' ');
		putchar(p);putchar(p);putchar(p);	putchar(p);putchar(p);
		putchar(92);
printf("\n");
for(i=1;i<=7;i++){
	for(j=1;j<=43-i;j++)
			printf("%c",' ');printf("%c",' ');
		putchar(47);
		for(j=1;j<=2*(i+1);j++)
printf("%c",' ');
		putchar(92);
printf("\n");
}
for(j=1;j<=44-i;j++)
			printf("%c",' ');
		putchar(47);
		putchar(p);putchar(p);putchar(p);
printf("%c",' ');printf("%c",' ');printf("%c",' ');
printf("%c",' ');printf("%c",' ');printf("%c",' ');
printf("%c",' ');printf("%c",' ');printf("%c",' ');
printf("%c",' ');printf("%c",' ');printf("%c",' ');
		putchar(p);putchar(p);putchar(p);
		putchar(92);
printf("\n");
for(k=1;k<=2;k++){
	for(j=1;j<=48-i;j++)
			printf("%c",' ');
putchar(q);
printf("%c",' ');printf("%c",' ');printf("%c",' ');printf("%c",' ');
printf("%c",' ');printf("%c",' ');printf("%c",' ');printf("%c",' ');
printf("%c",' ');printf("%c",' ');
putchar(q);printf("\n");	}
for(j=1;j<=48-i;j++)
			printf("%c",' ');putchar(q);
printf("%c",' ');printf("%c",' ');printf("%c",' ');
printf("%c",' ');printf("%c",' ');
putchar(42);printf("%c",' ');printf("%c",' ');
printf("%c",' ');printf("%c",' ');putchar(q);
printf("\n");
for(j=1;j<=48-i;j++)
			printf("%c",' ');putchar(q);printf("%c",' ');
printf("%c",' ');printf("%c",' ');printf("%c",' ');
putchar(42);putchar(42);putchar(42);printf("%c",' ');
printf("%c",' ');printf("%c",' ');putchar(q);
printf("\n");
for(j=1;j<=48-i;j++)
			printf("%c",' ');putchar(q);printf("%c",' ');
printf("%c",' ');printf("%c",' ');
putchar(42);putchar(42);putchar(42);putchar(42);putchar(42);
printf("%c",' ');printf("%c",' ');putchar(q);
printf("\n");
for(j=1;j<=48-i;j++)
			printf("%c",' ');putchar(q);printf("%c",' ');printf("%c",' ');
putchar(42);putchar(42);putchar(42);putchar(42);putchar(42);
putchar(42);putchar(42);printf("%c",' ');putchar(q);
printf("\n");
for(k=1;k<=2;k++){
for(j=1;j<=48-i;j++)
			printf("%c",' ');putchar(q);
printf("%c",' ');printf("%c",' ');printf("%c",' ');printf("%c",' ');
putchar(42);putchar(42);putchar(42);printf("%c",' ');
printf("%c",' ');printf("%c",' ');putchar(q);
printf("\n");}
for(j=1;j<=120;j++)
putchar(35);
printf("\n");
}
	if(a==1)
	{
printf("��ѡ��������ֻ��3��Ŷ(�����))");
printf("\n");
	scanf("%d",&z);
	if(z==1)
	{
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=5-i;j++)
			printf("%c",' ');
		for(j=1;j<=2*i-1;j++)
			printf("%c",'*');
		printf("\n");

	}
	for(k=1;k<=2;k++)
	{
for(j=1;j<=3;j++)
			printf("%c",' ');putchar(42);putchar(42);putchar(42);printf("\n");
	}
	}
	if(z==2){
for(i=1;i<=3;i++)
	{
		for(j=1;j<=5-i;j++)
			printf("%c",' ');
		for(j=1;j<=2*i-1;j++)
			printf("%c",'*');
		printf("\n");}
for(i=1;i<=3;i++)
	{
		for(j=1;j<=5-i;j++)
			printf("%c",' ');
		for(j=1;j<=2*i-1;j++)
			printf("%c",'*');
		printf("\n");}
	for(k=1;k<=2;k++){
for(j=1;j<=3;j++)
			printf("%c",' ');putchar(42);putchar(42);putchar(42);printf("\n");
	}
for(k=1;k<=2;k++){
for(j=1;j<=3;j++)
			printf("%c",' ');putchar(42);putchar(42);putchar(42);printf("\n");
	}
	}
if(z==3){
for(i=1;i<=3;i++)
	{
		for(j=1;j<=5-i;j++)
			printf("%c",' ');
		for(j=1;j<=2*i-1;j++)
			printf("%c",'*');
		printf("\n");}
for(i=1;i<=3;i++)
	{
		for(j=1;j<=5-i;j++)
			printf("%c",' ');
		for(j=1;j<=2*i-1;j++)
			printf("%c",'*');
		printf("\n");}
for(i=1;i<=3;i++)
	{
		for(j=1;j<=5-i;j++)
			printf("%c",' ');
		for(j=1;j<=2*i-1;j++)
			printf("%c",'*');
		printf("\n");
}
	for(k=1;k<=2;k++){
for(j=1;j<=3;j++)
			printf("%c",' ');putchar(42);putchar(42);putchar(42);printf("\n");
	}
for(k=1;k<=2;k++){
for(j=1;j<=3;j++)
			printf("%c",' ');putchar(42);putchar(42);putchar(42);printf("\n");
	}
for(k=1;k<=2;k++){
for(j=1;j<=3;j++)
			printf("%c",' ');putchar(42);putchar(42);putchar(42);printf("\n");
	}
}

	}

return 0;
}

