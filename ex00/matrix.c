#include <unistd.h>

void matrix(void)
{
	int row;
	int col;
	char mtr[4][4] = {{'1', '2', '3', '4'},{'2', '3', '4', '1'},{'3', '4', '1', '2'},{'4', '1', '2', '3'}};

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
	matrix();
}
