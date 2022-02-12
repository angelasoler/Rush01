#include <stdio.h>
#include <unistd.h>

int count(char *par)
{
	int i;

	i = 0;

	while (par[0] != '\0')
		i++;
	return(i);
}

char *split_parameters(char *par)
{
	int i;
	int index;
	// char aux[17];
	// aux[16] = '\0';
	index = 0;
	i = 0;

	while (par[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (par[i] == '1')
			if (par[i] == '2')
			if (par[i] == '3')
			if (par[i] == '4')
		}
		i++;
	}
	return(par);
}

int	main(int argc, char *argv[])
{
	char *parameters;
	if (count(argv[argc - 1]) == 30) //30 é o tamanho da minha strig parametro comezando de 0
		parameters = split_parameters(argv[argc - 1]);
	printf("%s", parameters);

}
