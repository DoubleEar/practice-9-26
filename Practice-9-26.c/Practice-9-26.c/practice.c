#define  _CRT_SECURE_NO_WARNINGS 1
//������
//#include <stdio.h>
//#include <stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("****************\n");
//	printf("**** 1.play ****\n");
//	printf("**** 0.exit ****\n");
//	printf("****************\n");
//}
//void game()
//{
//	//����һ���������
//	int ret = 0;
//	int guess = 0;
//	ret = (rand()) % 100 + 1;
//	//�����֣�
//	//printf("%d\n",ret);
//	while (1)
//	{
//		printf("�������\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess>ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ��¶��ˣ������Ҽ����������С����\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand ((unsigned int)(time(NULL)));
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//		    default : 
//				printf("ѡ���������ѡ��\n");
//				break;
//		}
//	}while (input);
//	return 0;
//}

//д����������������������в�����Ҫ������,�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
//

//int main()
//{
//	int input = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (1)
//	{
//		printf("��������Ҫ���ҵ�����\n");
//		scanf("%d", &input);
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (input > arr[mid])
//			{
//				left = mid + 1;
//			}
//			else if (input < arr[mid])
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				printf("�ҵ������±���%d\n", mid);
//				break;
//			}
//		}
//		//�������
//		if (left > right)
//		{
//			printf("û�ҵ���\n");
//		}
//	}
//	return 0;
//
//}
//��װ����
//int binary_search(int arr[], int input, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//		printf("��������Ҫ���ҵ�����\n");
//		scanf("%d", &input);
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (input > arr[mid])
//			{
//				left = mid + 1;
//			}
//			else if (input < arr[mid])
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				return mid;
//				break;
//			}
//		}
//		return -1;
//	}
//
//
//
//
//	int main()
//	{
//		int ret = 0;
//		int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//		int input = 0;
//		int sz = sizeof(arr) / sizeof(arr[0]);
//		while (1)
//		{
//			ret = binary_search(arr, input, sz);
//			if (ret == -1)
//			{
//				printf("û�ҵ���\n");
//			}
//			else
//			{
//				printf("�ҵ������±��ǣ�%d\n", ret);
//			}
//		}
//		return 0;
//
//	}
//
//
//��д����ģ��������������ĳ�����
//#include<string.h>
//int main()
//{
//	char input[20] = "";
//	//����������Ϊ��ַ��������ȡ��ַ��
//	int i = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("���������룺\n");
//		scanf("%s", input);
//		if (strcmp(input, "123456")==0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		if (i == 4)
//		{
//			printf("�˳�����\n");
//		}
//		else
//		{
//			printf("��������\n");
//		}
//	}
//	return 0;
//}
//

//��дһ�����򣬿���ֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ�����������ֲ������
//int main()
//{
//	char ch = {0};
//	while (1)
//	{
//		 printf("������һ���ַ���\n");
//		 ch = getchar();
//         if (ch >= 'a'&&ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A'&&ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		else
//		{
//			
//		}
//		ch = getchar();
//	}
//		return 0;
//	
//}
