#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//void bubble_sort(int* arr, int sz) {
////由于数组传递变量时为了节省空间，只传递第一个元素的地址，故还需对大小进行定义
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//	//确定第几趟冒泡排序
//		int flag = 1;
//		//假设这个数组有序
//		for (int j = 0; j < sz - 1 - i; j++) {
//		//确定每趟冒泡排序的比较次数
//			if (arr[j] > arr[j + 1]) {
//				//冒泡操作
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//				//本次数组不完全有序
//			}
//		}
//		if (flag == 1)
//			break;
//		//经过判断本次没有进行交换，说明这个数组有序，不必再循环，一定程度上降低了时间复杂度
//	}
//}
//
//int main() {
//	int arr[] = {10,5,8,2,6,3,4,1,9,7};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int n = 0; n < sz; n++) {
//	//对数组进行遍历，便于打印
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}

//冒泡排序

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%p\n", arr);
//	printf("%p\n\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n\n", &arr[0] + 1);
//
//	printf("数组的首元素 = %d\n\n", arr[0]);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}

//数组的地址和首元素的地址