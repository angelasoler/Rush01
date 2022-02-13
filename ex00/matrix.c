#include <unistd.h>

char processamento_de_parametro(char *array, argv);
void matrix(char *array_processado)
{

	int row;
	int col;
	char mtr[4][4] = {{'0', '0', '0', '0'},{'0', '0', '0', '0'},{'0', '0', '0', '0'},{'0', '0', '0', '0'}};

	processamento_de_parametro(mtr[4][4], paremeters);
	row = 0;
	while (row <=  3)
	{
		col = 0;
		while (col <= 3)
		{
			write(1, &mtr[row][col], 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int	main()
{
	char *arra;
	array = matrix();
}
