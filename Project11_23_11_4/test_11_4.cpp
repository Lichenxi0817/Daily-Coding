#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//void bubble_sort(int* arr, int sz) {
////�������鴫�ݱ���ʱΪ�˽�ʡ�ռ䣬ֻ���ݵ�һ��Ԫ�صĵ�ַ���ʻ���Դ�С���ж���
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//	//ȷ���ڼ���ð������
//		int flag = 1;
//		//���������������
//		for (int j = 0; j < sz - 1 - i; j++) {
//		//ȷ��ÿ��ð������ıȽϴ���
//			if (arr[j] > arr[j + 1]) {
//				//ð�ݲ���
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//				//�������鲻��ȫ����
//			}
//		}
//		if (flag == 1)
//			break;
//		//�����жϱ���û�н��н�����˵������������򣬲�����ѭ����һ���̶��Ͻ�����ʱ�临�Ӷ�
//	}
//}
//
//int main() {
//	int arr[] = {10,5,8,2,6,3,4,1,9,7};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int n = 0; n < sz; n++) {
//	//��������б��������ڴ�ӡ
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}

//ð������

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%p\n", arr);
//	printf("%p\n\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n\n", &arr[0] + 1);
//
//	printf("�������Ԫ�� = %d\n\n", arr[0]);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}

//����ĵ�ַ����Ԫ�صĵ�ַ