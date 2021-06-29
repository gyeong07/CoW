#include <stdio.h>
#include <time.h>
//5마리의 고양이
//아무 키나 눌러서 랜덤으로 고양이 뽑기
//5마리 모두 수집을 해서 열심히 키우면 됨
//고양이 중복 뽑기 가능

//고양이 종류
//이름, 나이, 성격, 키우기 난이도(레벨)

typedef struct {
	char* name;
	int age;
	char* character;
	int level;
} CAT;


int collection[5] = { 0,0,0,0,0 }; //현재까지 보유한 고양이

CAT cats[5]; //전체 고양이 리스트

void initCats(); //고양이 정보 초기화
void printCat(int selected);


int main() {

	srand(time(NULL));

	initCats();
	while (1) 
	{
		printf("두근두근~! 어느 고양이가 나올까~!\n아무 키나 눌러서 확인!");
		getchar();

		int selected = rand() % 5; //0~4 사이의 숫자 반환
		printCat(selected); //뽑은 고양이 정보 출력
		collection[selected] = 1; //뽑은 고양이 처리

		int collectAll = checkCollection();
		if (collectAll == 1)
		{
			break;
		}

	}
	return 0;
}

void initCats() {
	cats[0].name = "빨강이";
	cats[0].age = 5;
	cats[0].character = "빨간색";
	cats[0].level = 1;

	cats[1].name = "주황이";
	cats[1].age = 1;
	cats[1].character = "주황색";
	cats[1].level = 2;
	
	cats[2].name = "노랑이";
	cats[2].age = 3;
	cats[2].character = "노란색";
	cats[2].level = 3;

	cats[3].name = "초록이";
	cats[3].age = 2;
	cats[3].character = "초록색";
	cats[3].level = 4;

	cats[4].name = "파랑이";
	cats[4].age = 4;
	cats[4].character = "파란색";
	cats[4].level = 5;
}

void printCat(int selected)
{
	printf("\n\n---당신은 이 고양이의 집사!---\n\n");
	printf("이름: %s\n", cats[selected].name);
	printf("나이: %d\n", cats[selected].age);
	printf("특징: %s\n", cats[selected].character);
	printf("레벨: ");
	
	for (int i = 0; i < cats[selected].level; i++)
	{
		printf("%s", "★");
	}
	printf("\n\n");
}

int checkCollection() 
{
	//현재 보유한 고양이 목록 출력
	//다 모았는지의 여부 반환
	int collectAll = 1;

	printf("\n\n--- 보유한 고양이 목록 --- \n\n");
	for (int i = 0; i < 5; i++) {
		if (collection[i] == 0)
		{
			printf("%10s", "(빈 박스)");
			collectAll = 0;
		}
		else
		{
			printf("%10s", cats[i].name);
		}
	}
	printf("\n===================================\n\n");

	if (collectAll)
	{
		printf("\n\n축하합니다! 모든 고양이를 다 모았읍니다!");
	}
	return collectAll;
}