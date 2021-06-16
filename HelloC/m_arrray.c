#include <stdio.h>
#include <time.h>
//10������ ���� �ٸ� ���� (�� ī�� 2�徿)
//����ڷκ��� 2���� �Է°��� �޾Ƽ� -> ���� ���� ã���� ī�� ������
//��� ���� ���� ã���� ���� ����
//�� ���� Ƚ�� �˷��ֱ�

int arrayAnimal[4][5]; //20���� ī�� ����
char* strAnimal[10];

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int conv_pos_x(int x);
int conv_pos_y(int y);

int main() {

	srand(time(NULL));

	initAnimalArray();
	initAnimalName();

	shuffleAnimal();

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
	strAnimal[0] = "�䳢";
	strAnimal[1] = "�ϸ�";
	strAnimal[2] = "������";
	strAnimal[3] = "������";
	strAnimal[4] = "����";

	strAnimal[5] = "��";
	strAnimal[6] = "��";
	strAnimal[7] = "ȣ����";
	strAnimal[8] = "���մ�";
	strAnimal[9] = "�����ú�";
}

void shuffleAnimal() {

	//������
	//������
	//������
	//������

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

//��ǥ���� �� ���� ã��
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