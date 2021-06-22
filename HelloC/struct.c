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
	gameinfo1.name = "서리사막";
	gameinfo1.year = 2021;
	gameinfo1.price = 100;
	gameinfo1.company = "자빱사단";

	return 0;
}