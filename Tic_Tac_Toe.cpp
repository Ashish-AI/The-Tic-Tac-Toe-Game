#include<bits/stdc++.h>
using namespace std;

char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
int row,col;

void Display()
{	
	int x;
	cout<<"\n\n\n\n\n\t\t\t\t\t!!!!!========================================!!!!!";
	cout<<"\n\t\t\t\t\t\t\t      The \n";
	cout<<"\n\t\t\t\t\t\t          Tic Tac Toe\n";
	cout<<"\n\t\t\t\t\t\t\t     Game \n";
	cout<<"\t\t\t\t\t!!!!!========================================!!!!!";
	cout<<"\n\n\n\t\t\tPlayer 1  ------> [ X ]\n";
	cout<<"\n\n\t\t\tPlayer 2  ------> [ 0 ]\n";
	cout<<"\n\n\n\n";	
	cout<<"\t\t\t\t\t      |      |       \n";
	cout<<"\t\t\t\t\t   "<<board[0][0]<<"  |   "<<board[0][1]<<"  |   "<<board[0][2]<<"   \n";
	cout<<"\t\t\t\t\t______|______|_______\n";
	cout<<"\t\t\t\t\t      |      |       \n";
	cout<<"\t\t\t\t\t   "<<board[1][0]<<"  |   "<<board[1][1]<<"  |   "<<board[1][2]<<"   \n";
	cout<<"\t\t\t\t\t______|______|_______\n";
	cout<<"\t\t\t\t\t      |      |       \n";
	cout<<"\t\t\t\t\t   "<<board[2][0]<<"  |   "<<board[2][1]<<"  |   "<<board[2][2]<<"   \n";
	cout<<"\t\t\t\t\t      |      |       \n";
	
}

void player_turn()
{
	if(turn=='X' && board[row][col]!='0' && board[row][col]!='X')
	{
		cout<<"\nPlayer 1 -> Enter Your choice to Cross...      ";
		turn='0';
	}
	
	else if(turn=='0' && board[row][col]!='0' && board[row][col]!='X')
	{
		cout<<"\nPlayer 2 -> Enter Your choice to Zero...      ";
		turn='X';
	}
	else
	{
		cout<<"\nWrong Position....Please enter a Correct Position\n";
	}
	

		if(turn=='0')
		board[row][col]='X';
		else
		board[row][col]='0';
		Display();
	

}

int main()
{
		int choice;
	cin>>choice;
	switch(choice)
		{
			case 1:
				row=0;
				col=0;
				break;
			case 2:
				row=0;
				col=1;
				break;
			case 3:
				row=0;
				col=2;
				break;
			case 4:
				row=1;
				col=0;
				break;
			case 5:
				row=1;
				col=1;
				break;
			case 6:
				row=1;
				col=2;
				break;
			case 7:
				row=2;
				col=0;
				break;
			case 8:
				row=2;
				col=1;
				break;
			case 9:
				row=2;
				col=2;
				break;
			default:
				cout<<"\nInvalid Option\n";
				break;
		}
		Display();
		player_turn();

	
}
