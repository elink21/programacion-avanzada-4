#include <bits/stdc++.h>
using namespace std;

const int MAXI=3;
const int MAXJ=3;

void setField(int[MAXI][MAXJ],bool [MAXI][MAXJ]);


void printZone(int [MAXI][MAXJ],bool [MAXI][MAXJ]);

int main()
{
	int field[MAXI][MAXJ];
	bool clear[MAXI][MAXJ];
	int lifes=3;
	setField(field,clear);
	char again='y';
	int clearCells=0;
	int nearMines=0;

	for(int i=0;i<MAXI;i++)
	{
		for(int j=0;j<MAXJ;j++)
		{
			if(field[i][j]==0)clearCells++;
		}
	}

	

	int x, y;
	while(lifes && clearCells>0)
	{

		if(clearCells==0)
		{
			cout<<"\nGanaste!\n";
			continue;
		}

		cout<<"Este es el campo ahora:\n\n";
		printZone(field,clear);
		cout<<"Inserte la coordenada X a descubrir["<<0<<"-"<<MAXI-1<<"]:";
		cin>>x;
		cout<<"Ahora inserte la coordenada Y a descubrir["<<0<<"-"<<MAXJ-1<<"]:";
		cin>>y;
		clear[x][y]=true;
		if(field[x][y])
		{
			lifes--;
			cout<<"\nEncontraste una mina!, has perdido una vida, te quedan "<<lifes<<"\n";
			if(!lifes)cout<<"GAME OVER";			
		}
		else
		{
			nearMines=0;

			for(int i=y-1;i<=y+1;i++)
			{
				for(int j=x-1;j<=x+1;j++)
				{
					if( (i>=0&&i<MAXI)&&(j>=0&&j<MAXJ) )
					if(field[i][j]==1)nearMines++;					
				}
			}
			field[x][y]=-1*nearMines;

			clearCells--;
			cout<<"\nExcelente, una menos!\n\n";
			if(!clearCells)cout<<"Ganaste!";
		}
	}

	for(int i=0;i<MAXI;i++)
	{
		for(int j=0;j<MAXJ;j++)
		{
			clear[i][j]=true;
		}
	}

	cout<<"\n\nEl campo era:\n\n ";
	printZone(field,clear);

	return 0;
}


void printZone(int matrix[MAXI][MAXJ], bool clear[MAXJ][MAXI])
{
	for(int i=0;i<MAXI;i++)
	{
		for(int j=0;j<MAXJ;j++)
		{
			if(clear[i][j])
			{
				cout<<matrix[i][j]<<"\t\t";	
			}
			else cout<<"#\t\t";
			
		}
		cout<<"\n\n";
	}

	cout<<"\n";
}

void setField(int matrix[MAXI][MAXJ], bool clear[MAXI][MAXJ])
{
	srand(time(NULL));
	for(int i=0;i<MAXI;i++)
	{
		for(int j=0;j<MAXJ;j++)
		{
			matrix[i][j]=rand()%2;
			clear[i][j]=false;
		}
	}
}