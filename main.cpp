#include <stdio.h>
#include <Windows.h>

int count = 0;
char data[10][200];

void list(){
	system("cls");
	printf("-----------------\n");
	for(int i = 0; i < 10; i++){
		printf("%d. %s\n", i + 1, data[i]);
		printf("-----------------\n");
	}
}

void addBookmark(){
	system("cls");
	printf("��ũ�� �Է��ϼ���: ");
	scanf("%s", data[count++]);
	system("cls");
		printf("���������� �߰��Ͽ����ϴ�!");
}

void removeBookmark(){
	list();
	printf("���� �� ������ �ϸ�ũ�� �������ּ���.");
}

void menu(){
	printf("\n�����Ͻ� ���� �������ּ���\n");
	printf("1. ����Ʈ ����	2. �ϸ�ũ �߰�	3. �ϸ�ũ ����\n");
	
	int input;
	scanf("%d", &input);
	
	if(input == 1){
		list();
		menu();
	}else if(input == 2){
		addBookmark();
		menu();
	}else if(input == 3){
		removeBookmark();
		menu();
	}else{
		system("cls");
		printf("���� �޴��Դϴ�.\n");
		menu();
	}
}

int main(){
	printf("�Ȥ����ϼ��� �ݰ����ϴ�\n");
	printf("������ ��м�ø��\n");
	printf("v0.0.1 BETA\n");
	menu();
}
