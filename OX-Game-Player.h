#ifndef Player_h
#define Player_h
#include<string>
using namespace std;
class Player {
public:
	Player();
	Player(string , char);
	bool setSymbol(char [][8], char,int); //表格，符號，要填的格子
	
	int getindex();
	int winlose(char[][8],char,string );
	string getName();

private:
	string Name;
	char Symbol;
	static int index;
};
#endif // !Player_h
