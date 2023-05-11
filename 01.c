#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

//int main()
//{
//	int a = 20;//4个字节-32bit
//	//00000000000000000000000000010100 - 原码
//	//00000000000000000000000000010100 - 反码
//	//00000000000000000000000000010100 - 补码
//	//0x00000014
//	int b = -10;
//	//10000000000000000000000000001010 - 原码
//	//11111111111111111111111111110101 - 反码
//	//1111 1111 1111 1111 1111 1111 1111 0110 - 补码
//	//0xfffffff6
//	return 0;
//} 

//int main()
//{
//	int a = 20;//0x00000014
//	//小端  低位放在低地址
//	//大端  低位放在高地址
//	return 0;
//}

//int check_syst()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}


//int check_syst()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//返回1，小端
//	//返回0，大端
//	return *p;
//}

//int check_syst()
//{
//	int a = 1;
//	return *(char*)&a;
//}

//指针类型的意义
//1.指针类型决定了指针解引用操作符能访问几个字节：char*p;*p访问一个字节，int*p;*p访问四个字节
//2.指针类型决定了指针+1，-1，加的或者减的是几个字节：char*p;p+1,跳过一个字节；int*p;p+1跳过四个字节


//判断电脑字节序
//int main()
//{
//	返回1，小端
//	返回0，大端
//	int ret = check_syst();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	/*int* p = &a;
//	*p = 0;*/
//	char* p = &a;
//	*p = 0;
//	return 0;
//
//}

//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//1符号位1111111  整形提升 -> 11111111111111111111111111111111
//	signed char b = -1;
//	//1符号位1111111  整形提升 -> 11111111111111111111111111111111
//	unsigned char c = -1;
//	//无符号
//	//11111111  整形提升 -> 00000000000000000000000011111111
//	//255
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	//-1 -1 255
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//10000000 00000000 00000000 10000000
//	//11111111 11111111 11111111 01111111
//	//11111111 11111111 11111111 10000000
//	//10000000
//	//整形提升->11111111 11111111 11111111 10000000
//	//4,294,967,168
//	printf("%u\n", a);
//	//%u - 打印十进制无符号数字
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	//10000000 00000000 00000000 00010100
//	//11111111 11111111 11111111 11101011
//	//11111111 11111111 11111111 11101100 - 补码
//	unsigned int j = 10;
//	//00000000 00000000 00000000 00001010  
//	//11111111 11111111 11111111 11101100
//	//11111111 11111111 11111111 11110110   i的补码与j的补码相加
//	//11111111 11111111 11111111 11110101 - 反码
//	//10000000 00000000 00000000 00001010 - 原码
//	//-10
//	printf("%d\n", j + i);
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}
//00000000 00000000 00000000 00001001
//00000000 00000000 00000000 00001000
// ...
//00000000 00000000 00000000 00000001
//11111111 11111111 11111111 11111111 - 死循环

//int main()
//{
//	char a[1000];
//	//char 范围-128 - 127；
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3 ... -128 127 126 ...3 2 1 \0
//	printf("%d", strlen(a));//255
//	return 0;
//}

//int main()
//{
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("Hello World\n");
//	}
//	return 0;
//}