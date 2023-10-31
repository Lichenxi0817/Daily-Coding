#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<cmath>

//void prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			printf("%d是合数\n", x);
//			break;
//		}
//	}
//	if (i >= sqrt(x))
//		printf("%d是素数", x);
//}
//
//int main()
//{
//	prime(29);
//	return 0;
//}

//素数函数判断

//int year(int a)
//{
//	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
//		return 1;
//	else
//		return 0;
// }
//
//int main()
//{
//	int i = 0;
//	printf("闰年为:");
//	for (i = 100; i <= 200; i++)
//		if (1 == year(i))
//			printf(" %d ", a);
//	return 0;
//}

//闰年判断函数

//int binary_search(int arr[], int size, int want)
//{
//    int left = 0;
//    int right = size - 1;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (want < arr[mid])
//            right = mid - 1;
//        else if (want > arr[mid])
//            left = mid + 1;
//        else
//            return mid;
//    }
//    return -1;
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9 };
//    int want = 7;
//    int size = sizeof(arr) / sizeof(arr[0]);
//    if (binary_search(arr, size, want) != -1)
//        printf("找到了，这个数字的下标是%d\n", binary_search(arr, size, want));
//    else
//        printf("没找到");
//    return 0;
//}

//二分查找函数————数组作为变量时，若要在函数中求元素个数还是不行，要另外定义一个size变量来表示

//int find_power(int x, int y)
//{
//	int num = 0;
//	while (x != 1)
//	{
//		x = x / y;
//		num++;
//	}
//	return num;
//}
//
//int main()
//{
//	int input = 0;
//	int power = 0;
//	printf("找次方程序开始\n请输入一个正整数>:");
//	scanf("%d", &input);
//	printf("\n请输入一个这个数字的任意正整数次方数>:");
//	scanf("%d", &power);
//	printf("\n%d 是 %d 的 %d 次方\n", power, input, find_power(power, input));
//	return 0;
//}

//↑
//每次循环都会使num+1
//↓

//int game(int * num)
//{
//	(*num)++;
//	return *num;
//}
//
//int main()
//{
//	int i = 1;
//	int n = 10;
//	while(n>0)
//	{
//		n--;
//		game(&i);
//	}
//	printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//奇妙的嵌套,printf返回值是打印的字符个数

//函数的声明和定义掌握啦!