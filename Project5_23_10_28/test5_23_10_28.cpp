#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("�������������ڱȽϴ�С�����֣��м���|����:");
//	scanf("%d|%d|%d", &a, &b, &c);
//	int abmid = (a + b) / 2;
//	if (a > abmid)
//	{
//		if (b > c)
//			printf("%d,%d,%d", a, b, c);
//		else if (c > a)
//			printf("%d,%d,%d", c, a, b);
//		else if (a > c and c < b)
//			printf("%d,%d,%d", a, c, b);
//	}
//	else if (a < abmid)
//	{
//		if (a > c)
//			printf("%d,%d,%d", b, a, c);
//		else if (c > b)
//			printf("%d,%d,%d", c, b, a);
//		else if (b > c and c < a)
//			printf("%d,%d,%d", b, c, a);
//	}
//	if ( a == b or b == c or a == c )
//		printf("������������С��һ�������֣�");
//	return 0;
//}

//�������ֱȴ�С���Ӵ�С���

//int main()
//{
//	int a;
//	for (a = 3; a < 101; a += 3)
//		printf("%d ", a);
//	return 0;
//}

//1��100֮��3�ı���������

//int main()
//{
//	int a;
//	int b;
//	int n;
//	scanf("%d%d", &a, &b);
//	int a1 = a;
//	int b1 = b;
//	while (a % b)
//	{
//		n = a % b;
//		a = b;
//		b = n;
//	}
//	printf("%d��%d�����Լ����%d", a1, b1, b);
//	return 0;
//}

//շת�������������֮������Լ��

//int main()
//{
//	int i = 0;
//	printf("��Ԫ1000-2000��֮���������:");
//	for (i = 1000; i < 2001; i++)
//	{
//		if (i % 4 == 0 and i % 100 != 0)
//			printf("%d ", i);
//		else if (i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//�ж�ĳһ���Ƿ������꣺(�¶�������һ����)
// 1.�ܱ�4���������ܱ�100����
// 2.�ܱ�400����

//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("����Ϊ:1 2 ");
//	for (i = 1; i <= 2000000000; i++)
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//			else if (j == i - 1)
//				printf("%d ", i);
//		}
//	return 0;
//}

//�������Ż�
//������������Գ���

//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("����Ϊ:");
//	for (i = 101; i <= 2000000; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//�Ż���Ĵ���

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int a = i / 10;
//		if (i - 10 * a == 9)
//			count++;
//		if (i % 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//1-100��9�ĸ���

//int main()
//{
//	int i = 0;
//	double j = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		j = (double)1 / i * pow(-1, (i + 1));
//		sum += j;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//1-100�ĵ�������λ������ӡ�

//int main()
//{
//	int a = 0;
//	int b;
//	int c;
//	int d;
//	int e;
//	int f;
//	int g;
//	int h;
//	int i;
//	int j;
//	scanf("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
//	int arr[] = { a,b,c,d,e,f,g,h,i,j };
//	int max = arr[0];
//	int n = 0;
//	for (n = 1 ; n < 10; n++)
//		if (max <= arr[n])
//			max = arr[n];
//	printf("���ֵ��%d\n", arr[max]);
//	return 0;
//}

//10���������ֵ

//int main()
//{
//	int i;
//	int j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d �� %d = %-2d ", i, j, i * j);
//		printf("\n");
//	}
//	return 0;
//}

//�˷��ھ����ӡ

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int k = 5;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//			left = mid + 1;
//		else if (k < arr[mid])
//			right = mid - 1;
//		else
//		{
//			printf("�ҵ��ˣ��������%d���±���%d", arr[mid], mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���Ҫ���ҵ�����");
//	return 0;
//}

//���ֲ���

void menu()
{
	printf("###############################################\n");
	printf("###############1.Play     0.Exit###############\n");
	printf("###############################################\n");
}

void game()
{
	int random = 0;
	random = rand()%100 + 1;
	//1-100�������
	int chance = 8;
	int guess = 0;
	printf("��������Ϸ��ʼ�����1-100���һ�����֣���һ����8�λ��ᡣ\n");
	//8�λ���
	do
	{
		printf("��������µ�����:");
		scanf("%d", &guess);
		if (guess < random)
		{
			chance--;
			printf("С��\n�㻹ʣ��%d�λ���\n", chance);
		}
		else if (guess > random)
		{
			chance--;
			printf("����\n�㻹ʣ��%d�λ���\n", chance);
		}
		else
		{
			chance--;
			printf("��ϲ�㣬�¶��ˡ�\n�㻹ʣ��%d�λ��ᣬ��������\n", chance);
			break;
		}
	} while (chance > 0 and guess != random);
	if (chance == 0 and guess != random)
	{
		printf("������˼���ڹ涨�ĵĴ�������û�в��У�����������%d\n", random);
	}
	printf("Ҫ����������Ϸ��?�����·�ѡ��~\n");
}

int main()
{
	int input = 0;
	//input���������while����ľ��ڶ��� 
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:(�������һ������)");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}