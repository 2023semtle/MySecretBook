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
	printf("링크를 입력하세요: ");
	scanf("%s", data[count++]);
	system("cls");
		printf("성공적으로 추가하였습니다!");
}

void removeBookmark(){
	list();
	printf("다음 중 제거할 북마크를 선택해주세요.");
}

void menu(){
	printf("\n수행하실 일을 선택해주세요\n");
	printf("1. 리스트 보기	2. 북마크 추가	3. 북마크 제거\n");
	
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
		printf("없는 메뉴입니다.\n");
		menu();
	}
}

int main(){
	printf("안ㄴㅇ하세요 반갑습니다\n");
	printf("나만의 비밀수첩★\n");
	printf("v0.0.1 BETA\n");
	menu();
}
