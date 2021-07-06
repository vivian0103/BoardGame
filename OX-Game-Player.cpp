#include"Player.h"
#include<iostream>
#include<iomanip>
using namespace std;

int  Player::index = 1;


Player::Player() {

}
Player::Player(string nN,char nSy) {
	Name = nN;
	Symbol = nSy;
}
bool Player::setSymbol(char B[][8],char nSy,int Block) {
	bool re = false;
#if 0
/*int xy[10][2] = {
	{1,1},{1,3},{1,5},
	{3,1},{3,3},{3,5},
	{5,1},{5,3},{5,5}};
	int x, y;
	x = xy[Block][0];
	y = xy[Block][1];
*/
	int x, y;
	x = ((Block - 1) / 3)*2+1;
	y = ((Block - 1) % 3) * 2 + 1;
	if (B[x][y] != '1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9')
	{
		cout << "此格已被填寫過了! 請換格!!!!";
	}

	else
	{
		B[x][y] = nSy;//填入玩家的代號
		re = true;
	}


	/*if(B[x][y] != '0')
	{
		cout << "此格已被填寫過了! 請換格!!!!";
	}
	else
	{
		B[x][y] = nSy;//填入玩家的代號
		re = true;
	}*/
#else
	
	switch (Block) { //找格子
	case 1:
		if (B[1][1] != '1') {
			cout << "此格已被填寫過了! 請換格!!!!";
			return index - 2;
		}
		else
		{
			B[1][1] = nSy;//填入玩家的代號
			re = true;
			return index++;
		}
		break;
	case 2:
		if (B[1][3] != '2') {
			cout << "此格已被填寫過了! 請換格!!!!";
			return index - 2;
		}
		else
		{
			B[1][3] = nSy;
			re = true;
			return index++;
		}
		break;
	case 3:
		if (B[1][5] != '3') {
			cout << "此格已被填寫過了! 請換格!!!!";
			return index - 2;
		}
		else
		{
			B[1][5] = nSy;
			re = true;
			return index++;
		}
		break;
	case 4:
		if (B[3][1] != '4') {
			cout << "此格已被填寫過了! 請換格!!!!";
			return index - 2;
		}
		else
		{
			B[3][1] = nSy;
			re = true;
			return index++;
		}
		break;
	case 5:
		if (B[3][3] != '5') {
			cout << "此格已被填寫過了! 請換格!!!!";
			return index - 2;
		}
		else
		{
			B[3][3] = nSy;
			re = true;
			return index++;
		}
		break;
	case 6:
		if (B[3][5] != '6') {
			cout << "此格已被填寫過了! 請換格!!!!";
			return index - 2;
		}
		else
		{
			B[3][5] = nSy;
			re = true;
			return index++;
		}
		break;
	case 7:
		if (B[5][1] != '7') {
			cout << "此格已被填寫過了! 請換格!!!!";
			return index - 2;
		}
		else
		{
			B[5][1] = nSy;
			re = true;
			return index++;
		}
		break;
	case 8:
		if (B[5][3] != '8') {
			cout << "此格已被填寫過了! 請換格!!!!";
			return index - 2;
		}
		else
		{
			B[5][3] = nSy;
			re = true;
			return index++;
		}
		break;
	case 9:
		if (B[5][5] != '9') {
			cout << "此格已被填寫過了! 請換格!!!!";
			return index - 2;
		}
		else
		{
			B[5][5] = nSy;
			re = true;
			return index++;
		}
		break;

	default:
		cout << "你輸入的數字不在範圍內，請重新輸入!!!" << endl;
		break;

	}
#endif
	return re;
}
int Player::getindex() {
	return index;
}
string Player::getName() {
	return Name;
}
int  Player::winlose(char cf[][8], char z, string n) {
	if (cf[1][1] == z && cf[1][3] == z && cf[1][5] == z) {
		cout << n << " win!!";
		return 11;
	}
	else if (cf[3][1] == z && cf[3][3] == z && cf[3][5] == z) {
		cout << n << " win!!";
		//cout << endl;
		return 11;
	}
	else if (cf[5][1] == z && cf[5][3] == z && cf[5][5] == z) {
		cout << n << " win!!";
		//cout << endl;
		return 11;
	}
	else if (cf[1][1] == z && cf[3][1] == z && cf[5][1] == z) {
		cout << n << " win!!";
		//cout << endl;
		return 11;
	}
	else if (cf[1][3] == z && cf[3][3] == z && cf[5][3] == z) {
		cout << n << " win!!";
		//cout << endl;
		return 11;
	}
	else if (cf[1][5] == z && cf[3][5] == z && cf[5][5] == z) {
		cout << n << " win!!";
		//cout << endl;
		return 11;
	}
	else if (cf[1][1] == z && cf[3][3] == z && cf[5][5] == z) {
		cout << n << " win!!";
		//cout << endl;
		return 11;
	}
	else if (cf[1][5] == z && cf[3][3] == z && cf[5][1] == z) {
		cout << n << " win!!";
		//cout << endl;
		return 11;
	}
	else {
		return getindex();
	}
}
