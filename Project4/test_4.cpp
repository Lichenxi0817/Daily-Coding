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

//while�����÷��Լ�break��continue���÷�

//int main()
//{
//	int ch = putchar(EOF);
//	printf("%d\n", ch);
//	return 0;
//}

//putchar��getchar���÷�,ע�����뻺����

//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:");
//	scanf("%s", password);
//	printf("��ȷ������:(Y/N)��");
//	while (getchar() != '\n')
//	{
//		;
//	}
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("����ȷ��");
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

//getchar�Ľ����÷������ˣ���ʦ�����ˣ�

//int main()
//{
//	int i = 0;
//	//	    ��ʼ��; �����ж�; ����
//	for (i = 1; i <= 10; i++)
//	{		if (i == 5)
//			break;
//	printf("%d\n", i);
//	}
//	return 0;
//}

//for���÷�

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

//for�������99�˷���

//int main()
//{
//	int i = 1;
//	int n = 0;
//	printf("������׳���:");
//	scanf("%d", &n);
//	int b = n;
//	static long long int a = n;
//	for (n; n > 1;)
//	{
//		i = n - 1;
//		a = a * i;
//		n--;
//	}
//	printf("%d�Ľ׳���%d", b, a);
//	return 0;
//}

//�׳˼���

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
//	printf("�����:%d\n", d);
//	return 0;
//}

//1-10�׳˼���
//��׼������

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
//		//n�Ľ׳�
//		*/
//		int ret = 1;
//		ret = ret * i;//�Ż��㷨��������ѧ���ɣ�1!��2=2!,2!��3=!,......,(n-1)!��n=n!,......
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//������������������������������������������������������������������������������������������������������������������������������������//

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;//���±�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;//���±�
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	return 0;
//}

//�۰�(����)�����㷨����

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

//�ַ������ұƽ���ӡ

//int main()
//{
//	char pwd[] = "246810@lcx";
//	char put[] = {0};
//	printf("����������:");
//	scanf("%s", put);
//	getchar();
//	int i = 3;
//	while (i > 0)
//	{
//		if (put != pwd)
//		{
//			i--;
//			printf("����������������룬������ʣ%d��\n", i);
//			printf("�������������Ϊ:");
//			scanf("%c", put);
//			getchar();
//			if (i == 0)
//			{
//				printf("�����ù��ˣ��������");
//				break;
//			}
//		}
//		else
//		{
//			printf("������ȷ���ٺٺ�O(��_��)O");
//			break;
//		}
//	}
//	return 0;
//}

//��ȫ����д

//int main()
//{
//	int i = 0;
//	char pwd[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������(��ʾ:������һ����������λ��λ���֣��ܺ���17):");
//		scanf("%s", pwd);
//		if (strcmp(pwd,"123456") == 0)//strcmp�Ƚ������ַ����Ƿ����
//		{
//			printf("��½�ɹ�����������");
//			break;
//		}
//		else
//			printf("�����������������Ŷ~\n������ʣ��%d��\n", 2-i);
//	}
//	if (i == 3)
//		printf("�����ù�����������ᡣ\n�����йرճ���");
//	return 0;
//}

//��ȷ�𰸣��İ��ĺܾ��Ȱ����G�ٺ٣�Ҫ�ľ������Ч��
//��ѧ�﷨����Ҫ�ļ�����ϰ���﷨�����߼�˼ά��������Ҫ��