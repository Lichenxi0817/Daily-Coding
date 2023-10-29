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
//	printf("请输入三个用于比较大小的数字，中间用|隔开:");
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
//		printf("请输入三个大小不一样的数字！");
//	return 0;
//}

//三个数字比大小并从大到小输出

//int main()
//{
//	int a;
//	for (a = 3; a < 101; a += 3)
//		printf("%d ", a);
//	return 0;
//}

//1—100之间3的倍数的数字

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
//	printf("%d与%d的最大公约数是%d", a1, b1, b);
//	return 0;
//}

//辗转相除法求两个数之间的最大公约数

//int main()
//{
//	int i = 0;
//	printf("公元1000-2000年之间的闰年有:");
//	for (i = 1000; i < 2001; i++)
//	{
//		if (i % 4 == 0 and i % 100 != 0)
//			printf("%d ", i);
//		else if (i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//判断某一年是否是闰年：(下二满足其一即可)
// 1.能被4整除但不能被100整除
// 2.能被400整除

//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("素数为:1 2 ");
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

//可以再优化
//这个方法叫做试除法

//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("素数为:");
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

//优化后的代码

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

//1-100内9的个数

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

//1-100的倒数，错位正负相加。

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
//	printf("最大值是%d\n", arr[max]);
//	return 0;
//}

//10个数求最大值

//int main()
//{
//	int i;
//	int j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d × %d = %-2d ", i, j, i * j);
//		printf("\n");
//	}
//	return 0;
//}

//乘法口诀表打印

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
//			printf("找到了，这个数是%d，下标是%d", arr[mid], mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到要求找的数字");
//	return 0;
//}

//二分查找

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
	//1-100的随机数
	int chance = 8;
	int guess = 0;
	printf("猜数字游戏开始，请从1-100里猜一个数字，你一共有8次机会。\n");
	//8次机会
	do
	{
		printf("请输入你猜的数字:");
		scanf("%d", &guess);
		if (guess < random)
		{
			chance--;
			printf("小了\n你还剩下%d次机会\n", chance);
		}
		else if (guess > random)
		{
			chance--;
			printf("大了\n你还剩下%d次机会\n", chance);
		}
		else
		{
			chance--;
			printf("恭喜你，猜对了。\n你还剩下%d次机会，不愧是你\n", chance);
			break;
		}
	} while (chance > 0 and guess != random);
	if (chance == 0 and guess != random)
	{
		printf("不好意思，在规定的的次数里你没有猜中，这个随机数是%d\n", random);
	}
	printf("要继续进行游戏吗?请在下方选择~\n");
}

int main()
{
	int input = 0;
	//input定义必须在while以外的局内定义 
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:(务必输入一个整数)");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}