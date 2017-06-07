/*
Elias Edgardo Segundo Antonio
Suma de matrices de dos dimensiones
27/02/2017
*/
#include <bits/stdc++.h>
using namespace std;
const int MAXI=3;
const int MAXJ=3;

void setRand(int[MAXI][MAXJ]);

void addMatrix(int [MAXI][MAXJ],int [MAXI][MAXJ],int [MAXI][MAXJ]);

void printMatrix(int [MAXI][MAXJ]);

int main()
{
	srand(time(NULL));

	int a[MAXI][MAXJ], b[MAXI][MAXJ],c[MAXI][MAXJ];

	setRand(a);
	cout<<"seteando a y b...\n";
	setRand(b);

	cout<<"Las matrices son: \n\n";
	printMatrix(a);

	cout<<"\n\n";

	printMatrix(b);

	addMatrix(a,b,c);

	cout<<"\n\nLa suma de las matrices es:\n\n ";

	printMatrix(c);
	return 0;
}

void addMatrix(int a[MAXI][MAXJ],int b[MAXI][MAXJ],int c[MAXI][MAXJ])
{
	for(int i=0;i<MAXI;i++)
	{
		for(int j=0;j<MAXJ;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}

void printMatrix(int matrix[MAXI][MAXJ])
{
	for(int i=0;i<MAXI;i++)
	{
		for(int j=0;j<MAXJ;j++)
		{
			cout<<matrix[i][j]<<"\t\t";
		}
		cout<<"\n\n";
	}

	cout<<"\n";
}

void setRand(int matrix[MAXI][MAXJ])
{
	
	for(int i=0;i<MAXI;i++)
	{
		for(int j=0;j<MAXJ;j++)
		{
			matrix[i][j]=1+rand()%10;
		}
	}
}