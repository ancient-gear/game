#include <stdio.h>

#include <windows.h>

//특정 좌표로 커서를 옮기자
void gotoXY(int x, int y) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(hConsole, coord);
}

//0 : 검정
//1 : 빨강
//2 : 초록
//3 : 노랑
//4 : 파랑
//5 : 자주
//6 : 청록
//7 : 흰색
// ...  
// \033 : ASCII escape
//38: 이 코드는 텍스트의 전경(글자) 색상을 설정하겠다는 의미입니다. 텍스트의 배경색을 설정하려면 48을 사용합니다.
//5: 이 코드의 5는 256색 모드를 사용하는 것을 의미합니다.이 모드는 256가지 색상을 사용할 수 있는 확장된 색상 범위를 제공합니다.
//%d : 이 자리는 색상 코드를 나타내는 숫자가 들어갈 자리입니다.색상 코드는 0부터 255까지의 값을 가질 수 있습니다.

void setColor(int colorCode) {
    printf("\033[38;5;%dm", colorCode); // 38;5;%dm은 256색 모드
}



int main() {
    gotoXY(20, 0);
    setColor(6);
    printf("#\n");
    gotoXY(19, 1);  // (x, y) 좌표를 설정
    printf("###\n");
    gotoXY(18, 2);
    printf("#####\n");
    gotoXY(17, 3);
    printf("#######\n");
    gotoXY(16, 4);
    printf("#########\n");
    gotoXY(15, 5);
    printf("###########\n");
    gotoXY(14, 6);
    printf("#############\n");
    gotoXY(13, 7);
    printf("###############\n");
    gotoXY(12, 8);
    printf("##############");
    setColor(7);
    printf("#");
    setColor(6);
    printf("##\n");
    gotoXY(11, 9);
    printf("###############");
    setColor(7);
    printf("##");
    setColor(6);
    printf("##\n");
    gotoXY(10, 10);
    printf("################");
    setColor(7);
    printf("###");
    setColor(6);
    printf("##\n");
    gotoXY(10, 11);
    printf("################");
    setColor(7);
    printf("###");
    setColor(6);
    printf("##\n");
    gotoXY(10, 12);
    printf("#################");
    setColor(7);
    printf("#");
    setColor(6);
    printf("###\n");
    gotoXY(11, 13);
    printf("###################\n");
    gotoXY(13, 14);
    printf("###############\n");
    gotoXY(16, 15);
    printf("#########\n");

    setColor(7);

    gotoXY(1, 20);
    printf("|\n");
    gotoXY(1, 21);
    printf("|__('A`)___\n");
    gotoXY(0, 22);
    printf("/  ノ(ヘヘ");
    
    return 0;
}