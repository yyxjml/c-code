#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()//在1-100当中，有那些奇数
//{	
//	int i = 1;
//	for (i = 1; i <=100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("少年\n");
//    }
//    else if (age >= 18 && age < 30)
//    {
//        printf("青年\n");
//    }
//    else if (age >= 30 && age < 50)
//    {
//        printf("中年\n");
//    }
//    else if (age >= 50 && age < 80)
//    {
//        printf("老年\n");
//    }
//    else
//    {
//        printf("老寿星\n");
//    }
//}

//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用 
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//循环0次
//		k++;
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };		
//	printf("请输入密码>");
//	scanf("%s",password);//输入密码。并存放在password数组当中
//	缓冲区还剩一个“\n”----自己敲回车的时候留下的
//	while ((ch=getchar()) != '\n')
//	{	
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();//接受Y/N
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


///////重要
//int main()
//{	
//	int ret = 1;
//	int i = 0;
//	int n = 0;
//	scanf("%d",&n);
//	for (i = 1;i<=n; i++)
//	{		
//		ret = ret * i;               //1*1   1*1*2    1*1*2*3
//	}
//	printf("ret = %d\n",ret);
//		return 0;
//}//计算n的阶乘

//int main()
//{
//	int ret = 1;
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{	
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{	
//			ret = ret * i;   //1*1 =1   1*1*2   2*1*2*3 
//		}
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int ret = 1;
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &i);
//	for (n = 1; n <= i; n++)
//	{
//		ret = ret * n; 
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;//计算 1！+.....+10！
//}

//int main()//二分查找
//{	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]); //计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else//arr[mid]=k
//		{
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("找到了,下标是%d\n", mid);
//	else
//		printf("找不到\n");
//	return 0;
//}
#include <windows.h>
#include <stdlib.h>
//int main()	
//{	
//	char arr1[] = "welcom to chinese";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");//执行系统命令的函数  cls---清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{	
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{	
//		printf("请输入密码:");
//		scanf("%s",password);
//		if (strcmp(password,"123456")==0) 
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入");
//		}
//	}
//	if (i == 3)
//	{	
//		printf("输入三次均错误，请退出程序\n");
//	}
//	return 0;
//}



//猜数字游戏
#include <stdlib.h>
#include <time.h>
//void menu()
//{
//	printf("************************\n");
//	printf("**1.play********0.exit**\n");
//	printf("************************\n");
//}
////RAND_MAX
//void game()
//{	
//	printf("猜数字\n");
//	int num = 0;
//	int ret = rand()%100+1;//生成一个随机的数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (num < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了");
//			break;
//		}
//	}
//}
//int main()
//{	
//	int input;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("选择错误\n");
//				break;
//		}
//	}
//	while (input);
//	return 0;	
//}


////写一个电脑自动关机的程序
//#include <string.h>
//int main()
//{	
//	char input[20] = {0};
//	system("shutdown -s -t 120");
//	printf("你的电脑将在2分钟后关机，请输入：我是猪，来取消关机\n请输入:");
//	while (1)
//	{
//		scanf("%s", input);
//		if (strcmp(input, "我是猪")==0)	
//		{	
//			system("shutdown -a");
//			printf("输入正确，取消关机\n");
//			break;
//		}
//		else 
//		{
//			printf("输入错误，请重新输入:");
//		}
//	}
//	return 0;
//}

//写代码对三个数从大到小排序
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	if (b>a)
//	{
//		i = a;
//		a = b;
//		b = i;
//	}
//	else if (c>a)
//	{
//		i = a;
//		a = c;
//		c = i;
//	}
//	else if (c>b)
//	{	
//		i = b;
//		b = c;
//		c = i;
//	}
//	printf("%d %d %d\n",a,b,c); 
//	return 0;
//}

//写一个代码打印1-100之间3的倍数的数字
//int main()
//{	
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%3==0)
//		{	
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//给定两个数，求这两个数的最大公约数----辗转相除法
//int main()
//{	
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	while (a%b!=0)
//	{
//		i = a % b;
//		a = b;
//		b = i;
//	}
//	printf("%d\n",b);
//	return 0;
//}


//写出九九乘法表
//int main()
//{
//	int a = 0;
//	for (a=1;a<=9;a++)
//	{	
//		int b = 1;
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d*%d=%-2d ", a, b, a*b);//%-2d-----左对齐  %2d-----右对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

//打印1000到2000年之间的闰年
//判断规则----1.能被4整除并且不能被100整除
//------------2.能被400整除
//int main()
//{
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{	
//		if (year%4==0&& year%100!=0)
//		{
//			printf("%d ",year);
//			count++;
//		}
//		else if(year%400==0)
//		{
//			printf("%d ",year);
//			count++;
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}

//写一个代码，打印100-200之间的素数
//素数----除了1和自身，不能被其他数整除的数
//偶数不可能是素数
#include <math.h>	
//int main()
//{	
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)//打印所有的奇数
//	{
//		int a = 0;
//		for (a = 2;a<=sqrt(i);a++)//sqit()-----一个数学库函数
//		{
//			if (i % a == 0)
//			{
//				break;
//			}
//		}
//		if (a >sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//数一下1-100的所有整数中出现多少个数字9
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i=1;i<=100;i++)
//	{
//		if (i%10==9)
//		{
//			printf("%d\n",i);
//			count++;
//		}
//		if(i/10==9)
//		{
//			printf("%d\n",i);
//			count++;
//		}
//	}	printf("%d\n",count);
//	return 0;
//}

//分数计算
//int main()
//{	
//	float num = 0;
//	int i = 0;
//	int set = 1;
//	for (i=1;i<=100;i++)
//	{
//		num = num + set*1.0 / i;
//		set = -set;
//	}
//	printf("%lf\n",num);
//	return 0;
//}

//求最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i=1;i<sz;i++)
//	{
//		if (max < arr[i]) 
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n",max);
//	return 0;
//}


int main()
{
	printf("%d\n",43);
	return 0;
}




