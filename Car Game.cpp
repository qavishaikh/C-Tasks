#include<iostream>
#include<conio.h>
#include<dos.h>
#include<windows.h>
#include<time.h>

#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int enemyX[3];
int enemyY[3];
int enemyFlag[3];
char car[4][4] = { ' ','+','+',' ',
                  '+','+','+','+','+',
                    ' ','+','+',' ',
                    '+','+','+','+'};
int carpos = WIN_WIDTH/2;
int score = 0;

void gotoxy(int x, int y){
	CursorPosition.X =y;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}
void setcursor(bool visible, DWORD size){
	  if(size ==0)
	  size = 0;
	  
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bvisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console,&lpCursor);	
}
void drawBorder(){
	for(int i=0; i<SCREEN_HEIGHT; i++){
		for(j=0; j<17; j++){
			gotoxy(0+j,i); cout<<"+";
			gotoxy(WIN_WIDTH-j,i); cout<<"+";
		}
	}
	for(int i=0; i<SCREEN_HEIGHT; i++){
		gotoxy(SCREEN_WIDTH, i); cout<<"+";
	}
}
void genEnemy(int ind){
	enemy[ind] = 17 + rand()%(33);
}
void drawEnemy(int ind){
	if(enemyFlag[ind] == true){
		gotoxy(enemyX[ind], enemy[ind]); cout<<"****";
		gotoxy(enemyX[ind], enemy[ind]+1); cout<<"**";
		gotoxy(enemyX[ind], enemy[ind])+2; cout<<"****";
		gotoxy(enemyX[ind], enemy[ind])+3; cout<<"**";
	}		
}
void eraseEnemy(int ind){
	if(enemyFlag[ind] == true){
		gotoxy(enemyX[ind], enemy[ind]); cout<<"      ";
		gotoxy(enemyX[ind], enemy[ind]+1); cout<<"     ";
		gotoxy(enemyX[ind], enemy[ind])+2; cout<<"     ";
		gotoxy(enemyX[ind], enemy[ind])+3; cout<<"     ";
	}
}
void resetEnemy(int ind){
	eraseEnemy(ind);
	enemyY[ind] = 1;
	genEnemy(ind);
}
void drawCar(){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
		gotoxy(j+carPos, i+22); cout<<car[i][j];
      	}
	}
}
void eraseCar(){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			gotoxy(j+carPos, i+22); cout<<" ";
		}
	}
}
void collision(){
	if( enemyY[0]+4 >= 23 ){
		if( enemX[0] + 4 - carPos >= 0 && enemyX[0] + 4 - carPos < 9 ){
			return 1;
		}
	}
}
void gameover(){
	system("cls");
	cout<<"\t\t---------------------------"<<endl;
	cout<<"\t\t-------- Game Over ---------"<<endl;
	cout<<"\t\t---------------------------"<<endl;
	cout<<"\t\tPress any key to go back to Menu.";
}
void updateScore(){
	gotoxy(WIN_WIDTH + 7, 5); cout<<"Score:  "<<score<<endl;
}
void instructions(){
	
	system("cls");
	cout<<"Instructions";
	cout<<"\n -------------";
	cout<<"\n Avoid cars by Moving Left or Right.";	
	cout<<"\n Press 'a' to Move Left";
	cout<<"\n Press 'd' to Move Right";
	cout<<"\n Press Escape To Exit";
	cout<<"\n\n Press any key to go Back to menu";
	getch();
}
void play(){
	carPos = -1 + WIN_WIDTH/2;
	score = 0;
	enemyFlag[0] = 1;
	enemyFlag[1] = 0;
	enemyY[0] = enemyY[1] = 1;
	
	system("cls");
	drawBorder();
	updateScore();
	genEnemy(0);
	genEnemy(1);
	
	gotoxy(WIN_WIDTH + 7, 2); cout<<"Car Game";
	gotoxy(WIN_WIDTH + 6, 4); cout<<"-------------";
	gotoxy(WIN_WIDTH + 6, 6); cout<<"----------------";
	gotoxy(WIN_WIDTH + 7, 12); cout<<"Control  ";
	gotoxy(WIN_WIDTH + 7, 13); cout<<"------------";
	gotoxy(WIN_WIDTH + 2, 14); cout<<"A Key -- Left ";
	gotoxy(WIN_WIDTH + 2, 15); cout<<"D Key -- Right ";
	
	gotoxy(18, 5);cout<<"Press any key to Start";
	getch();
	gotoxt(18, 5);cout<<"                      ";
		
	while(1){
		if(kbhit()){
			char ch = getch();
			if(ch =='a'|| ch=='A'){
				if(carPos > 18)
				    carPos -= 4;
			}
			if(ch =='d'|| ch=='D'){
	          		if(carPos > 50)
				    carPos += 4;
			}
			if(ch== 27){
				break;
			}
		}
		drawCar();
		drawEnemy(0);
		drawEnemy(1);
		if(collision()== 1){
			gamerover();
			return 0;
		}
		sleep(50);
		eraseCar();
		eraseEnemy(0);
		eraseEnemy(1);
	}
}






















