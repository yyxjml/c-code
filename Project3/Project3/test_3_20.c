#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

//写一个函数完成两个数的相加
//int Add(int a, int b)
//{
//	int c = 0;
//	c = a + b;
//	return c;
//}
// 
//int main()
//{	
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("sum = %d\n",sum);
//	return 0;
//}

//字符串的拷贝---strcpy
//将一个字符串拷贝到另一个字符串-----用函数（sttcpy）
//int main()
//{	
//	char arr1[] = "bit";
//	char arr2[] = "########";
//	//bit\0########-----\0是字符串的结束标志。打印时遇到\0字符串停止打印
//	strcpy(arr2, arr1);
//	printf("%s\n",arr2);
//	return 0;
//}

//memset--内存设置（将内存地址当中前n个存储的内容，设置成我们想要的值）
//int main()
//{
//	char arr1[] = "hello word";
//	memset(arr1,'#',5);
//	printf("%s\n",arr1);
//	return 0;
//}

//自定义函数
//如果值不需要返回，则函数的返回类型为void 
//写一个函数找到两个数的最大值
//int get_max(int a ,int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//int main()
//{	
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int max = get_max(a,b);
//	printf("max = %d\n", max);
//	return 0;
//}

//写一个函数可以交换两个整形变量的内容。
//当你函数内部要和函数外部的变量产生联系的时候，用传址调用
//void Swap(int* pa, int* pb)
//{
//	int c = 0;
//	c = *pa;
//	*pa = *pb;
//	*pb = c;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a,&b);
//	printf("a = %d b = %d\n",a,b);
//	return 0;
//}

//写一个函数可以判断一个数是不是素数
//int is_prime(int n)
//{
//	int a = 0;
//	for (a=2;a<=sqrt(n);a++)
//	{
//		if (n % a == 0)
//		{	
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{	
//		int num =is_prime(i);
//		if (num == 1)
//		{	
//			printf(" %d",i);
//		}
//	}
//	return 0;
//}

//写一个函数判断一年是不是闰年。
//int is_leap_year(int year)
//{	
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		is_leap_year(year);
//		if (is_leap_year(year) == 1)
//		{	
//			count++;
//			printf(" %d ", year);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//写一个函数，实现一个整形有序数组的二分查找。
//					本质上arr是一个指针，所有计算元素个数不能放在函数内部
//int binary_search(int arr[], int k,int sz)
//{	
//	int left = 0;
//	int right = sz-1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//不能放在循环外面，因为每次循环mid的值会变
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{			
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 11;
//							//传过去的是首元素的地址
//	int ret= binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//写一个函数，每调用一次这个函数，就会将 num 的值增加1。 
//void Add(int* a)
//{
//	(*a)++;
//}
//
//int main()
//{
//	int a = 0;
//	Add(&a);
//	printf("%d\n",a);
//	Add(&a);
//	printf("%d\n", a);
//	Add(&a);
//	printf("%d\n", a);
//	return 0;
//}


//链式访问
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));//这里介绍一下strlen函数
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//注：printf函数的返回值是打印在屏幕上字符的个数
//	return 0;
//}