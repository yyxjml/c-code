#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()//��1-100���У�����Щ����
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
//        printf("����\n");
//    }
//    else if (age >= 18 && age < 30)
//    {
//        printf("����\n");
//    }
//    else if (age >= 30 && age < 50)
//    {
//        printf("����\n");
//    }
//    else if (age >= 50 && age < 80)
//    {
//        printf("����\n");
//    }
//    else
//    {
//        printf("������\n");
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
//        {//switch����Ƕ��ʹ�� 
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
//	for (i = 0, k = 0; k = 0; i++, k++)//ѭ��0��
//		k++;
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };		
//	printf("����������>");
//	scanf("%s",password);//�������롣�������password���鵱��
//	��������ʣһ����\n��----�Լ��ûس���ʱ�����µ�
//	while ((ch=getchar()) != '\n')
//	{	
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();//����Y/N
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
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


///////��Ҫ
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
//}//����n�Ľ׳�

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
//	return 0;//���� 1��+.....+10��
//}

//int main()//���ֲ���
//{	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]); //����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ���,�±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
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
//		printf("�ҵ���,�±���%d\n", mid);
//	else
//		printf("�Ҳ���\n");
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
//		system("cls");//ִ��ϵͳ����ĺ���  cls---�����Ļ
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
//		printf("����������:");
//		scanf("%s",password);
//		if (strcmp(password,"123456")==0) 
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������");
//		}
//	}
//	if (i == 3)
//	{	
//		printf("�������ξ��������˳�����\n");
//	}
//	return 0;
//}



//��������Ϸ
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
//	printf("������\n");
//	int num = 0;
//	int ret = rand()%100+1;//����һ�����������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (num < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("ѡ�����\n");
//				break;
//		}
//	}
//	while (input);
//	return 0;	
//}


////дһ�������Զ��ػ��ĳ���
//#include <string.h>
//int main()
//{	
//	char input[20] = {0};
//	system("shutdown -s -t 120");
//	printf("��ĵ��Խ���2���Ӻ�ػ��������룺��������ȡ���ػ�\n������:");
//	while (1)
//	{
//		scanf("%s", input);
//		if (strcmp(input, "������")==0)	
//		{	
//			system("shutdown -a");
//			printf("������ȷ��ȡ���ػ�\n");
//			break;
//		}
//		else 
//		{
//			printf("�����������������:");
//		}
//	}
//	return 0;
//}

//д������������Ӵ�С����
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

//дһ�������ӡ1-100֮��3�ı���������
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

//���������������������������Լ��----շת�����
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


//д���žų˷���
//int main()
//{
//	int a = 0;
//	for (a=1;a<=9;a++)
//	{	
//		int b = 1;
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d*%d=%-2d ", a, b, a*b);//%-2d-----�����  %2d-----�Ҷ���
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ӡ1000��2000��֮�������
//�жϹ���----1.�ܱ�4�������Ҳ��ܱ�100����
//------------2.�ܱ�400����
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

//дһ�����룬��ӡ100-200֮�������
//����----����1���������ܱ���������������
//ż��������������
#include <math.h>	
//int main()
//{	
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)//��ӡ���е�����
//	{
//		int a = 0;
//		for (a = 2;a<=sqrt(i);a++)//sqit()-----һ����ѧ�⺯��
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

//��һ��1-100�����������г��ֶ��ٸ�����9
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

//��������
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

//�����ֵ
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




