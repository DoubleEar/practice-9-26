#define  _CRT_SECURE_NO_WARNINGS 1
//猜数字
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
//	//生成一个随机数；
//	int ret = 0;
//	int guess = 0;
//	ret = (rand()) % 100 + 1;
//	//猜数字；
//	//printf("%d\n",ret);
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了，你是我见过最聪明的小孩！\n");
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
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//		    default : 
//				printf("选择错误，重新选择\n");
//				break;
//		}
//	}while (input);
//	return 0;
//}

//写代码可以在整型有序数组中查找想要的数字,找到了返回下标，找不到返回 - 1.（折半查找）
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
//		printf("请输入你要查找的数：\n");
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
//				printf("找到啦，下标是%d\n", mid);
//				break;
//			}
//		}
//		//两种情况
//		if (left > right)
//		{
//			printf("没找到诶\n");
//		}
//	}
//	return 0;
//
//}
//封装函数
//int binary_search(int arr[], int input, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//		printf("请输入你要查找的数：\n");
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
//				printf("没找到诶\n");
//			}
//			else
//			{
//				printf("找到啦，下标是：%d\n", ret);
//			}
//		}
//		return 0;
//
//	}
//
//
//编写代码模拟三次密码输入的场景。
//#include<string.h>
//int main()
//{
//	char input[20] = "";
//	//数组名本身为地址，不用在取地址；
//	int i = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("请输入密码：\n");
//		scanf("%s", input);
//		if (strcmp(input, "123456")==0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		if (i == 4)
//		{
//			printf("退出程序\n");
//		}
//		else
//		{
//			printf("重新输入\n");
//		}
//	}
//	return 0;
//}
//

//编写一个程序，可以直接收键盘字符，如果是小写字符就输出对应的大写字符，如果是数字不输出。
//int main()
//{
//	char ch = {0};
//	while (1)
//	{
//		 printf("请输入一个字符：\n");
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
