#include <stdio.h>
#include <time.h>
//10마리의 서로 다른 동물 (각 카드 2장씩)
//사용자로부터 2개의 입력값을 받아서 -> 같은 동물 찾으면 카드 뒤집기
//모든 동물 쌍을 찾으면 게임 종료
//총 실패 횟수 알려주기

int arrayAnimal[4][5]; //20장의 카드 지도
int checkAnimal[4][5];
char* strAnimal[10];

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuestion();


int main() {

	srand(time(NULL));

	initAnimalArray();
	initAnimalName();

	shuffleAnimal();

	int failCount = 0;

	while (1) {
		int select1 = 0;
		int select2 = 0;

		printAnimals();
		printQuestion();
		printf("뒤집을 카드를 2개 고르세요:  ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
			continue;
	}

	return 0;
}

void initAnimalArray() {

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName() {
	strAnimal[0] = "토끼";
	strAnimal[1] = "하마";
	strAnimal[2] = "강아지";
	strAnimal[3] = "고양이";
	strAnimal[4] = "돼지";

	strAnimal[5] = "닭";
	strAnimal[6] = "용";
	strAnimal[7] = "호랑이";
	strAnimal[8] = "도롱뇽";
	strAnimal[9] = "나무늘보";
}

void shuffleAnimal() {

	//□□□□□
	//□□□□□
	//□□□□□
	//□□□□□

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

//좌표에서 빈 공간 찾기
int getEmptyPosition() {
	while (1) {
		int randPos = rand() % 20;
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1) {
			return randPos;
		}
	}
	return 0;
}

int conv_pos_x(int x) {
	return x / 5;
}

int conv_pos_y(int y) {
	return y % 5;
}

void printAnimals() {
	printf("\n==========비==========★=========밀========\n\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%8s", strAnimal[arrayAnimal[j][i]);
		}
		printf("\n");
	}
	printf("\n===========================================\n\n");
}

void printQuestion() {
	printf("\n\n(문제)\n");
	int seq = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			//카드를 뒤집어서 정답을 맞혔으면 동물 이름
			if (checkAnimal[i][j] != 0) {
				printf("%8s", strAnimal[arrayAnimal[i][j]);
			}
			//아직 뒤집지 못했으면(or 정답 X) 위치 숫자
			else {

			}
		}
	}
}
