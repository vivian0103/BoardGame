#include<iostream>
#include<string>
#include<iomanip>
#include"Player.h"
#include<cstdlib> //清除頁面
#include<windows.h> //暫停幾秒
using namespace std;

void Start() {     //遊戲開始介面
	cout << "Welcome to Tic Tac Toe Game!!";
	Sleep(900);
	system("cls");
}
char Board[8][8];
void MakeBoard() //初始化
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{

			if (i % 2 != 0 && j % 2 != 0)
			{
				if (i == 1 && j == 1)
					Board[i][j] = '1';
				else if (i == 1 && j == 3)
					Board[i][j] = '2';
				else if (i == 1 && j == 5)
					Board[i][j] = '3';
				else if (i == 3 && j == 1)
					Board[i][j] = '4';
				else if (i == 3 && j == 3)
					Board[i][j] = '5';
				else if (i == 3 && j == 5)
					Board[i][j] = '6';
				else if (i == 5 && j == 1)
					Board[i][j] = '7';
				else if (i == 5 && j == 3)
					Board[i][j] = '8';
				else if (i == 5 && j == 5)
					Board[i][j] = '9';
			}
			else
				Board[i][j] = '*';
		}
	}
}//呼叫九宮格*/

void ShowBoard(char Board[][8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++) {
			cout << Board[i][j];
		}
		cout << endl;
	}
}
	
int main() {
	MakeBoard();
	Start(); //呼叫開始介面
	string player1, player2;
	cout << "Please enter the player1's name : ";
	cin >> player1;
	cout << "Please enter the player2's name : ";
	cin >> player2;
	system("cls");
	cout << "!!!!!Game Start!!!!!";
	Sleep(900);
	system("cls");
  
	ShowBoard(Board);
	Player P1(player1, 'O'), P2(player2, 'X');
	int B; //要填入的格子

	for (int i = 1; i < 10; ) {
		cout << "圖中數字為要填入的空格" << endl;
		cout << "請輸入要填入的數字: ";
		cin >> B;
		if (i % 2 != 0) {
			if (P1.setSymbol(Board, 'O', B) == true) {
				ShowBoard(Board);
				i = P1.winlose(Board, 'O', player1);
				//i++;
			}
			
		}
		else {
			if (P2.setSymbol(Board, 'X', B) == true) {
				ShowBoard(Board);
				i = P2.winlose(Board, 'X', player2);
				//i++;
			}
				
		}
		if (i == 9) {
			cout << "平手!!!";
		}
	}
}
