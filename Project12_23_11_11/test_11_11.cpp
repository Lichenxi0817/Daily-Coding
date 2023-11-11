#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<cmath>

#define pi acos(-1)

//int main() {
//	
//	int n = 0;//定义n
//	while (scanf("%d", &n) != EOF) {//输入要计算的n!
//		int power = 0;
//		power = (double)1 / 2 * log10(2 * pi * n) + n * log10(n / exp(1));
//		power = power + 1;
//		printf("%d\n", power);
//	}
//	return 0;
//}

//——————————————————————————————↓冒泡排序

//int main() {
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			scanf("%d ", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void bubble_sort(int arr[], int size) {
//	int i = 1;//确定冒泡排序的趟数
//	int flag = 1;//确定是否已有序
//	for (i; i <= size - 1; i++) {
//		for (int j = 0; j <= size - 1 - i; j++){//确定比较的下标 
//			int tmp = 0;//给定交换的值
//			if (arr[j] > arr[j + 1]) {
//				tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 9,8,5,6,2,1,4,3,7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, size);
//	for (int n = 0; n < size; n++) {
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}

//自己打出来的冒泡排序，厉害了我的哥~~~

//int main() {
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	printf("行数 = %d\n", sizeof(arr) / sizeof(arr[0]));
//	printf("列数 = %d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
//	return 0;
//}

//二维数组计算行数与列数