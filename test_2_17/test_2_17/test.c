#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

check_sys()
{
	int a = 1;
	char*p = (char*)&a;
	if (*p == 1)
		return 1;
	else
		return 0;
}
// 简化之后
//check_sys()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	return *p;
//}
//
//check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

int main()
{
	/*int a = 10;
	float f = 10.0;

	short a = 10;
	short int b = 10;
*/
	// 返回1 小端
	// 返回0 大端
	/*int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}*/

	/*char a = -128;
	printf("%u\n", a);
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);*/
	/*unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
	}*/

	//char a[1000];
	//int i;
	//for (i = 0; i < 1000; i++)
	//{
	//	a[i] = -1 - i;
	//}
	//printf("%d", strlen(a));
	//return 0;

	unsigned char i = 0;
	for (i = 0; i <= 254; i++)
	{
		printf("hello world\n");
	}
	return 0;
}