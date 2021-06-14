#include <stdio.h>
#include <time.h>
//10마리의 서로 다른 동물 (각 카드 2장씩)
//사용자로부터 2개의 입력값을 받아서 -> 같은 동물 찾으면 카드 뒤집기
//모든 동물 쌍을 찾으면 게임 종료
//총 실패 횟수 알려주기

int arrayAnimal[4][5]; //20장의 카드 지도
int initAnimalName();

void initAnimalArray();

int main() {

	srand(time(NULL));

	initAnimalArray();
	initAnimalName();

	return 0;
}

void initAnimalArray() {

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			arrayAnimal[i][j] = -1;
		}
	}
}

int initAnimalName() {

}