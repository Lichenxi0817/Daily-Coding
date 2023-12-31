#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"game.h"

void menu() {
	printf("###############################\n");
	printf("######1. play     0. exit######\n");
	printf("###############################\n");
}

void game() {
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
}

void test() {
	int input = 0;
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择!\n");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}