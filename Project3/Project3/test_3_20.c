#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

//дһ��������������������
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

//�ַ����Ŀ���---strcpy
//��һ���ַ�����������һ���ַ���-----�ú�����sttcpy��
//int main()
//{	
//	char arr1[] = "bit";
//	char arr2[] = "########";
//	//bit\0########-----\0���ַ����Ľ�����־����ӡʱ����\0�ַ���ֹͣ��ӡ
//	strcpy(arr2, arr1);
//	printf("%s\n",arr2);
//	return 0;
//}

//memset--�ڴ����ã����ڴ��ַ����ǰn���洢�����ݣ����ó�������Ҫ��ֵ��
//int main()
//{
//	char arr1[] = "hello word";
//	memset(arr1,'#',5);
//	printf("%s\n",arr1);
//	return 0;
//}

//�Զ��庯��
//���ֵ����Ҫ���أ������ķ�������Ϊvoid 
//дһ�������ҵ������������ֵ
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

//дһ���������Խ����������α��������ݡ�
//���㺯���ڲ�Ҫ�ͺ����ⲿ�ı���������ϵ��ʱ���ô�ַ����
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

//дһ�����������ж�һ�����ǲ�������
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

//дһ�������ж�һ���ǲ������ꡣ
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

//дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//					������arr��һ��ָ�룬���м���Ԫ�ظ������ܷ��ں����ڲ�
//int binary_search(int arr[], int k,int sz)
//{	
//	int left = 0;
//	int right = sz-1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//���ܷ���ѭ�����棬��Ϊÿ��ѭ��mid��ֵ���
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
//							//����ȥ������Ԫ�صĵ�ַ
//	int ret= binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//дһ��������ÿ����һ������������ͻὫ num ��ֵ����1�� 
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


//��ʽ����
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));//�������һ��strlen����
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//ע��printf�����ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
//	return 0;
//}