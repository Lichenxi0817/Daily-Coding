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
//			printf("%d�Ǻ���\n", x);
//			break;
//		}
//	}
//	if (i >= sqrt(x))
//		printf("%d������", x);
//}
//
//int main()
//{
//	prime(29);
//	return 0;
//}

//���������ж�

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
//	printf("����Ϊ:");
//	for (i = 100; i <= 200; i++)
//		if (1 == year(i))
//			printf(" %d ", a);
//	return 0;
//}

//�����жϺ���

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
//        printf("�ҵ��ˣ�������ֵ��±���%d\n", binary_search(arr, size, want));
//    else
//        printf("û�ҵ�");
//    return 0;
//}

//���ֲ��Һ�����������������Ϊ����ʱ����Ҫ�ں�������Ԫ�ظ������ǲ��У�Ҫ���ⶨ��һ��size��������ʾ

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
//	printf("�Ҵη�����ʼ\n������һ��������>:");
//	scanf("%d", &input);
//	printf("\n������һ��������ֵ������������η���>:");
//	scanf("%d", &power);
//	printf("\n%d �� %d �� %d �η�\n", power, input, find_power(power, input));
//	return 0;
//}

//��
//ÿ��ѭ������ʹnum+1
//��

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

//�����Ƕ��,printf����ֵ�Ǵ�ӡ���ַ�����

//�����������Ͷ���������!