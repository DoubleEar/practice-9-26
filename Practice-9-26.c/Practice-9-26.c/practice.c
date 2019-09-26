#define  _CRT_SECURE_NO_WARNINGS 1
//猜数字
#include <stdio.h>
//#include <stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("****************\n");
//	printf("**** 1.play ****\n");
//	printf("**** 2.exit ****\n");
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

