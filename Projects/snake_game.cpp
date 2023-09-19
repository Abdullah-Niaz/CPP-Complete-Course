#include <iostream>
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include <time.h>

#define MAXSNAKESIZE 100

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoxy(int x, int y){
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}

class Point{
	private:
		int x;
		int y;
	public:
		Point(){
			x = y = 10;
		} 
		Point(int x, int y){
			this -> x = x;
			this -> y = y;
		}
		void SetPoint(int x, int y){
			this -> x = x;
			this -> y = y;
		}
		int GetX(){
			return x;
		}
		int GetY(){
			return y;
		}
		void MoveUp(){
			y--;
		}
		void MoveDown(){
			y++;
		}
		void MoveLeft(){
			x--;
		}
		void MoveRight(){
			x++;
		}
		void Draw(){
			gotoxy(x,y);
			cout<<"*";
		}
		void Erase(){
			gotoxy(x,y);
			cout<<" ";
		}
		void CopyPos(Point * p){
			p->x = x;
			p->y = y;
		}
		void Debug(){
			cout<<"("<<x<<","<<y<<") ";
		}
};

class Snake{
	private:
		Point * cell[MAXSNAKESIZE]; // array of points to represent snake
		int size; // current size of snake
		char dir; // current direction of snake
		Point fruit; 
	public:
		Snake(){
			size = 1; // default size
			cell[0] = new Point(20,20); // 20,20 is default position
			for( int i=1; i<MAXSNAKESIZE; i++){
				cell[i] = NULL;
			}
			fruit.SetPoint(rand()%50, rand()%25); 
		}
		void AddCell(int x, int y){
			cell[size++] = new Point(x,y);
		}
		void TurnUp(){
			dir = 'w'; // w is control key for turning upward
		}
		void TurnDown(){
			dir = 's'; // w is control key for turning downward
		}
		void TurnLeft(){
			dir = 'a'; // w is control key for turning left
		}
		void TurnRight(){
			dir = 'd'; // w is control key for turning right
		}
		void Move(){
			// Clear screen
			system("cls");
			
			// making snake body follow its head
			for(int i=size-1; i>0; i--){
				cell[i-1]->CopyPos(cell[i]);
			}
			
			// turning snake's head
			switch(dir){
				case 'w':
					cell[0]->MoveUp();
					break;
				case 's':
					cell[0]->MoveDown();
					break;
				case 'a':
					cell[0]->MoveLeft();
					break;
				case 'd':
					cell[0]->MoveRight();
					break;
			}
			
			// Collision with fruit
			if( fruit.GetX() == cell[0]->GetX() && fruit.GetY() == cell[0]->GetY()){
				AddCell(0,0);
				fruit.SetPoint(rand()%50, rand()%25); 	
			}
			
			//drawing snake
			for(int i=0; i<size; i++)
				cell[i]->Draw();
			fruit.Draw();
			
			//Debug();
			
			Sleep(100);
		}
		void Debug(){
			for( int i=0; i<size; i++){
				cell[i]->Debug();
			}
		}
};

int main(){
	//random no generation
	srand( (unsigned)time(NULL));
	
	// Testing snake 
	Snake snake;
	char op = 'l';
	do{
		if(kbhit()){
			op = getch();
		}
		switch(op){
			case 'w':
			case 'W':
				snake.TurnUp();
				break;
			
			case 's':
			case 'S':
				snake.TurnDown();
				break;
			
			case 'a':
			case 'A':
				snake.TurnLeft();
				break;
			
			case 'd':
			case 'D':
				snake.TurnRight();
				break;
		}
		snake.Move();
	}while(op != 'e');
	
	return 0;
}

// THE END
