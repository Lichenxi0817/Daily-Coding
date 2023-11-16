#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//int main() {
//	int a = 10;
//	int b = 50;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d , b = %d\n", a, b);
//	return 0;
//}

//在不引入第三个变量的前提下交换两个数

//int main() {
//	int ch = 0;
//	do {
//		printf("求二进制数字中一的个数。\n请输入:>");
//		int input = 0;
//		int count = 0;
//		scanf("%d", &input);
//		int num = input;
//		input = abs(input);
//		while (input) {
//			if (input % 2 != 0) {
//				count++;
//			}
//			input = input / 2;
//		}
//		printf(" %d 在二进制中一共有 %d 个 1\n", num, count);
//	} while ((ch = getchar()) != EOF);
//	return 0;
//}

//求一个二进制数中1的个数(负数则存在问题)这里利用了abs求绝对值函数

//int main() {
//	int num = 0;
//	int ch = 0;
//	do
//	{
//		int count = 0;
//		scanf("%d", &num);
//		for (int i = 0; i < 64; i++) {
//			if (1 == ((num >> i) & 1)) {
//				count++;
//			}
//		}
//		printf("%d\n", count);
//	} while (ch = getchar() != EOF);
//	return 0;
//}

//这里还是存在问题，因为负数的符号位为1，所以这里存在一些问题
//吗？不会真以为存在问题吧~负数是以补码来存储的，所以会有很多个1~~~~

int main() {

	return 0;
}