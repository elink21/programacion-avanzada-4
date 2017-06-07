#include <iostream>
#include <iomanip>
using namespace std;
const int FILAS = 3;
const int COLS=4;
void desplegar(int [FILAS][COLS]); // prototipo de la función
int main()
{
  int val[FILAS][COLS] = {8,16,9,52,3,15,27,6,14,25,2,10};
	desplegar(val);
	return 0;
}
void desplegar(int nums[FILAS][COLS])
{
	int num_fila, num_col;
	for (num_fila = 0; num_fila < FILAS; num_fila++)
	{
		for (num_col = 0; num_col < COLS; num_col++)
		cout << setw(4) << nums[num_fila][num_col];
		cout<< endl;
	}
	return;
}