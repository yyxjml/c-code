#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//standard input output(��׼���������)
#include <string.h>
//ֻҪmain���������룬���������Ҫ����stdio.h�ļ�
//int main()//������------��������
//{
//	int sum1 = 0;//����һ��int���͵ı���sum1�������ڴ�����ռ�
//	int sum2 = 0;
//	int sum = 0;
//	scanf("%d%d", &sum1, &sum2);//���뺯��
//	sum = sum1 + sum2;
//	//�⺯��---c���Ա����ṩ������ʹ�õĺ����⣬ʹ����Ҫ���к� #inculd <>
//	printf("sum = %d\n",sum);//�������
//	return 0;
//	/*%d---��ӡ����
//	%c---��ӡ�ַ�
//	%f---��ӡ��������
//	%p---�Ե�ַ����ʽ��ӡ
//	%x---��ӡ16���Ƶ�����*/
//}

//int b= 100;//ȫ�ֱ����������ڴ���飨{}��֮��ı���
//int main()
//{	
//	extern int c;//extern---�����ⲿ����
//	int a = 10;//�ֲ������������ڴ���飨{}���ڲ�
//	printf("%d\n",a);
//	
//	short age = 20;//���ڴ�����2�ֽڣ������20
//	float sum = 5.04f;//���ڴ�����4�ֽڣ������5.04
//	
//	printf("%d\n", sizeof(char));//ռ�ڴ��СΪ1�ֽ�
//	printf("%d\n", sizeof(short));//ռ�ڴ��СΪ2�ֽ�
//	printf("%d\n", sizeof(int));//ռ�ڴ��СΪ4�ֽ�
//	printf("%d\n", sizeof(long));//ռ�ڴ��СΪ4/8�ֽ�
//	printf("%d\n", sizeof(long long));//ռ�ڴ��СΪ8�ֽ�
//	printf("%d\n", sizeof(float));//ռ�ڴ��СΪ4�ֽ�
//	printf("%d\n", sizeof(double));//ռ�ڴ��СΪ8�ֽ�
//	return 0;
//}
//int main()
//{
//	char arr1[] = "bit";//arr1[]-------����
//	char arr2[] = { 'b', 'i', 't' };//�ַ�
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
//	//����1������Ļ�ϴ�ӡһ��������'����ô���� 
//	//����2������Ļ�ϴ�ӡһ���ַ������ַ�����������һ��˫���š�����ô���� 
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("abcdef"));//strlen�����ַ����ĳ���
//	// \62��������һ��ת���ַ� 
//	printf("%d\n", strlen("c:\test\628\test.c"));//һ��ת���ַ���һ���ռ��С
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	printf("���ȥ�ô�����0or1��:");
//	scanf("%d", &num);
//	if(num == 1)
//	{
//		printf("ȥһ���õĹ�˾\n");
//	}
//	else
//	{
//		printf("�ؼҷ�ţ\n");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 10000)
//	{
//		printf("����ѧϰ:%d\n", line);
//		line++;
//	}
//	if(line>=10000)
//	printf("��offer\n");
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
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{	
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10���������ֵ�����
//	while(i<10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	}
//	printf("%d\n", arr[0]);//�±�ķ�ʽ����Ԫ��
//	return 0;
//}

//int main()
//{
	//��2���ƣ�λ����
	// &��λ��
	// |��λ��
	// ^��λ���-----��Ӧ�Ķ�����λ��ͬ����Ϊ0����Ӧ�Ķ�����λ���졣��Ϊ1

	//int a = 3;
	//!----�߼���������
	//0-----��
	//��0----��
	//printf("%d\n", a);
	//printf("%d\n", !a);
	//int b = 5;//
	//011
	//101
	//int c = a & b;//��λ��
	//001

	//int c = a | b;//��λ��
	//111

	//int c = a ^ b;//��λ���
	//110
	//printf("%d\n", c);
	//int a = 5/2;//ȡ��������
	//int b = 6 % 4;//ȡģ��������
	//printf("%d\n", a);
	//printf("%d\n", b);
	//return 0;
// }

//int main()
//{   
//	int arr[10] = { 0 };
//	int sz = 0;
//	printf("%d\n", sizeof(arr));//��������Ĵ�С
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	//���������Ԫ�ظ���=�����ܴ�С/ÿ��Ԫ�صĸ���
//	
//	/*int a = 10;
//	sizeof----�������/������ռ�ռ�Ĵ�С����λ���ֽ�
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
//	int a = 0;//4���ֽڣ�32bitλ
//	//00000000000000000000000000000000
//	int b = ~a;//a��λ�������ƣ�ȡ���õ�b����b��һ���з��ŵ�����
//	//11111111111111111111111111111111----����
//	//11111111111111111111111111111110----����
//	//10000000000000000000000000000001----ԭ��
//	//���λ�Ƿ���λ��1---����  0---����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//ԭ�루����λ���䣬��λȡ����--->���루�����һ��----->����
//  //ֻҪ�����������ڴ���һ���Ǵ洢�Ķ����ƵĲ���
//  //������----ԭ�룬���룬������ͬ
//  //������----����
//	printf("%d\n", b);//ʹ�õģ���ӡ�����������ԭ��
//	return 0;
//}

//int main()
//{	
//	int a = 10;
//	int b = a++;//����++���Ȱ�a��ֵ����b��a�ټ�1
//	int c = 10;//
//	int d = ++c;//ǰ��++,��c��1���ٰ�c��1��Ľ����ֵ��d
//	printf("c = %d d= %d\n", c, d);
//	printf("a = %d b= %d\n",a,b);
//	return 0;
//}

//int main()
//{	
//	//��---��0
//	//��----0
//	int a = 10;
//	int b = 5;
//	int d = 0;
//	int c = a && b;//�߼��루ֻҪһ��Ϊ�ٶ�Ϊ�٣�
//	int e = b || d;//�߼���ֻҪ��һ��Ϊ�棬��Ϊ�棩
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