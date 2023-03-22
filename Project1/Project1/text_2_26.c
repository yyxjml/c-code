#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//standard input output(标准的输入输出)
#include <string.h>
//只要main当中有输入，输出函数就要调用stdio.h文件
//int main()//主函数------程序的入口
//{
//	int sum1 = 0;//创建一个int类型的变量sum1，并向内存申请空间
//	int sum2 = 0;
//	int sum = 0;
//	scanf("%d%d", &sum1, &sum2);//输入函数
//	sum = sum1 + sum2;
//	//库函数---c语言本身提供给我们使用的函数库，使用是要打招呼 #inculd <>
//	printf("sum = %d\n",sum);//输出函数
//	return 0;
//	/*%d---打印整型
//	%c---打印字符
//	%f---打印浮点数字
//	%p---以地址的形式打印
//	%x---打印16进制的数字*/
//}

//int b= 100;//全局变量：定义在代码块（{}）之外的变量
//int main()
//{	
//	extern int c;//extern---声明外部变量
//	int a = 10;//局部变量：定义在代码块（{}）内部
//	printf("%d\n",a);
//	
//	short age = 20;//向内存申请2字节，来存放20
//	float sum = 5.04f;//向内存申请4字节，来存放5.04
//	
//	printf("%d\n", sizeof(char));//占内存大小为1字节
//	printf("%d\n", sizeof(short));//占内存大小为2字节
//	printf("%d\n", sizeof(int));//占内存大小为4字节
//	printf("%d\n", sizeof(long));//占内存大小为4/8字节
//	printf("%d\n", sizeof(long long));//占内存大小为8字节
//	printf("%d\n", sizeof(float));//占内存大小为4字节
//	printf("%d\n", sizeof(double));//占内存大小为8字节
//	return 0;
//}
//int main()
//{
//	char arr1[] = "bit";//arr1[]-------数组
//	char arr2[] = { 'b', 'i', 't' };//字符
//	char arr3[] = { 'b', 'i', 't', '\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	return  0;
//} 

//int main()
//{
//	//问题1：在屏幕上打印一个单引号'，怎么做？ 
//	//问题2：在屏幕上打印一个字符串，字符串的内容是一个双引号“，怎么做？ 
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("abcdef"));//strlen计算字符串的长度
//	// \62被解析成一个转义字符 
//	printf("%d\n", strlen("c:\test\628\test.c"));//一个转译字符是一个空间大小
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	printf("你会去敲代码吗（0or1）:");
//	scanf("%d", &num);
//	if(num == 1)
//	{
//		printf("去一个好的公司\n");
//	}
//	else
//	{
//		printf("回家放牛\n");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 10000)
//	{
//		printf("继续学习:%d\n", line);
//		line++;
//	}
//	if(line>=10000)
//	printf("好offer\n");
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{	
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整数数字的数组
//	while(i<10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	}
//	printf("%d\n", arr[0]);//下标的方式访问元素
//	return 0;
//}

//int main()
//{
	//（2进制）位操作
	// &按位与
	// |按位或
	// ^按位异或-----对应的二进制位相同，则为0，对应的二进制位相异。则为1

	//int a = 3;
	//!----逻辑反操作付
	//0-----假
	//非0----真
	//printf("%d\n", a);
	//printf("%d\n", !a);
	//int b = 5;//
	//011
	//101
	//int c = a & b;//按位与
	//001

	//int c = a | b;//按位或
	//111

	//int c = a ^ b;//按位异或
	//110
	//printf("%d\n", c);
	//int a = 5/2;//取整数部分
	//int b = 6 % 4;//取模（余数）
	//printf("%d\n", a);
	//printf("%d\n", b);
	//return 0;
// }

//int main()
//{   
//	int arr[10] = { 0 };
//	int sz = 0;
//	printf("%d\n", sizeof(arr));//计算数组的大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	//计算数组的元素个数=数组总大小/每个元素的个数
//	
//	/*int a = 10;
//	sizeof----计算变量/类型所占空间的大小，单位是字节
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));*/
//	return 0;
//}
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//
//		return y;
//}
//int main()
//{	
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d\n", &a, &b);
//	max = MAX(a, b);
//	printf("max = %d\n",max);
//	return 0;
//}

//int main()
//{	
//	int a = 0;//4个字节，32bit位
//	//00000000000000000000000000000000
//	int b = ~a;//a按位（二进制）取反得到b，且b是一个有符号的整型
//	//11111111111111111111111111111111----补码
//	//11111111111111111111111111111110----反码
//	//10000000000000000000000000000001----原码
//	//最高位是符号位，1---负数  0---正数
//	//复数在内存中存储的时候，存储的是二进制的补码
//	//原码（符号位不变，按位取反）--->反码（反码加一）----->补码
//  //只要是整数，在内存中一定是存储的二进制的补码
//  //正整数----原码，反码，补码相同
//  //负整数----补码
//	printf("%d\n", b);//使用的，打印的是这个数的原码
//	return 0;
//}

//int main()
//{	
//	int a = 10;
//	int b = a++;//后置++，先把a的值赋给b，a再加1
//	int c = 10;//
//	int d = ++c;//前置++,先c加1，再把c加1后的结果赋值给d
//	printf("c = %d d= %d\n", c, d);
//	printf("a = %d b= %d\n",a,b);
//	return 0;
//}

//int main()
//{	
//	//真---非0
//	//假----0
//	int a = 10;
//	int b = 5;
//	int d = 0;
//	int c = a && b;//逻辑与（只要一个为假都为假）
//	int e = b || d;//逻辑或（只要有一个为真，都为真）
//	printf("c = %d\n",c);
//	printf("e = %d\n",e);
//	return 0;
//
//}


//int main()
//{	
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("max= %d\n",max);
//	return 0;
//}