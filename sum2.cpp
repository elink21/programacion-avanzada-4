/*
Suma de los elementos internos de una matriz de 2
dimensiones

Elias Edgardo Segundo Antonio

27/02/2017
*/

#include <bits/stdc++.h>
using namespace std;

const int MAXI=3;
const int MAXJ=5;

void setRand(int[MAXI][MAXJ]);

int sum(int [MAXI][MAXJ]);

void printMatrix(int [MAXI][MAXJ]);

int main()
{
	int a[MAXI][MAXJ];
	setRand(a);
	cout<<"La matriz es:\n\n ";
	printMatrix(a);

	cout<<"\nLa suma de sus elementos es "<<sum(a);


	return 0;
}

int sum(int a[MAXI][MAXJ])
{
	int total=0;
	for(int i=0;i<MAXI;i++)
	{
		for(int j=0;j<MAXJ;j++)
		{
			total+=a[i][j];
		}
	}
	return total;
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
	srand(time(NULL));
	for(int i=0;i<MAXI;i++)
	{
		for(int j=0;j<MAXJ;j++)
		{
			matrix[i][j]=1+rand()%10;
		}
	}
}