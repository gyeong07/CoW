#include <stdio.h>

struct GameInfo
{
	char* name;
	int year;
	int price;
	char* company;
};


int main() {

	struct GameInfo gameinfo1;
	gameinfo1.name = "�����縷";
	gameinfo1.year = 2021;
	gameinfo1.price = 100;
	gameinfo1.company = "�ڻ����";

	return 0;
}