// 12月26日c语言练习.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a=1,b=2,c=3,d=4,e=5;
	int k;
	k=a>b?c:d>e?d:e;
	printf("%d",k);
	return 0;
}

