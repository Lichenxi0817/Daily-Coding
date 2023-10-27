#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <stdlib.h>

//int main()
//{
//	int i = 1;
//	while (11 > i)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//while语句的用法以及break和continue的用法

//int main()
//{
//	int ch = putchar(EOF);
//	printf("%d\n", ch);
//	return 0;
//}

//putchar和getchar的用法,注意输入缓冲区

//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", password);
//	printf("请确认密码:(Y/N)。");
//	while (getchar() != '\n')
//	{
//		;
//	}
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功");
//	else
//		printf("放弃确认");
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//getchar的进阶用法。悟了，大师我悟了！

//int main()
//{
//	int i = 0;
//	//	    初始化; 条件判断; 调整
//	for (i = 1; i <= 10; i++)
//	{		if (i == 5)
//			break;
//	printf("%d\n", i);
//	}
//	return 0;
//}

//for的用法

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d * %d = %d\n", i, j, i * j);
//	}
//	return 0;
//}

//for语句用于99乘法表

//int main()
//{
//	int i = 1;
//	int n = 0;
//	printf("请输入阶乘数:");
//	scanf("%d", &n);
//	int b = n;
//	static long long int a = n;
//	for (n; n > 1;)
//	{
//		i = n - 1;
//		a = a * i;
//		n--;
//	}
//	printf("%d的阶乘是%d", b, a);
//	return 0;
//}

//阶乘计算

//int j(int n)
//{
//	int i = 0;
//	int a = 1;
//	for (; n > 1 ;n--)
//	{
//		i = n - 1;
//		a = a * i;
//	}
//	return a;
//}
//int main()
//{
//	int c = 0;
//	int d = 0;
//	for (c = 10; c > 1; c--)
//		d = d + j(c);
//	printf("结果是:%d\n", d);
//	return 0;
//}

//1-10阶乘计算
//标准答案如下

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
////	scanf("%d", &n);
//	for (n = 1; n <= 3; n++)
//	{
//		/*int ret = 1;
//		for (i = 1; i <= n; i++)
//			ret = ret * i;
//		//n的阶乘
//		*/
//		int ret = 1;
//		ret = ret * i;//优化算法，利用数学规律，1!×2=2!,2!×3=!,......,(n-1)!×n=n!,......
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//——————————————————————————————————————————————————————————————————//

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;//左下标
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;//右下标
//	int k = 7;
//	while (true)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	return 0;
//}

//折半(二分)查找算法入门

//int main()
//{
//	char arr1[] = "Welcome to China!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(500);
//		system("cls");
//	}
//	printf("%s\n", arr1);
//	return 0;
//}

//字符串左右逼近打印

//int main()
//{
//	char pwd[] = "246810@lcx";
//	char put[] = {0};
//	printf("请输入密码:");
//	scanf("%s", put);
//	getchar();
//	int i = 3;
//	while (i > 0)
//	{
//		if (put != pwd)
//		{
//			i--;
//			printf("密码错误，请重新输入，次数还剩%d次\n", i);
//			printf("重新输入的密码为:");
//			scanf("%c", put);
//			getchar();
//			if (i == 0)
//			{
//				printf("次数用光了，密码错误");
//				break;
//			}
//		}
//		else
//		{
//			printf("密码正确，嘿嘿嘿O(∩_∩)O");
//			break;
//		}
//	}
//	return 0;
//}

//完全不会写

//int main()
//{
//	int i = 0;
//	char pwd[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码(提示:密码是一个连续的六位个位数字，总和是17):");
//		scanf("%s", pwd);
//		if (strcmp(pwd,"123456") == 0)//strcmp比较两个字符串是否相等
//		{
//			printf("登陆成功，不愧是我");
//			break;
//		}
//		else
//			printf("密码错误，请重新输入哦~\n次数还剩下%d次\n", 2-i);
//	}
//	if (i == 3)
//		printf("次数用光光了啦，讨厌。\n请自行关闭程序。");
//	return 0;
//}

//正确答案，四八四很惊讶啊？欸嘿嘿，要的就是这个效果
//初学语法，不要心急，练习好语法表达和逻辑思维才是最重要的