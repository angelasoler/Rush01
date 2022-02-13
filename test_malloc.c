#include <stdio.h>
#include <stdlib.h>

int *media(int c)
{
	
	printf("%d", c);

}

int	main()
{
	int c;
	int *x;

	x = (int *) malloc(21*sizeof(int));

	printf("Digite seu nome: ");
	scanf("%d", &c);
	int *media(c);
	// fgets(c, 100, stdin);;

	// printf("bom dia %d\n", x);
	return (0);
}

// int	main()
// {
// 	char *c;

// 	c = (char *) malloc(21*sizeof(char)) ;

// 	printf("Digite seu nome: ");
// 	fgets(c, 100, stdin);;

// 	printf("%s", c);
// 	return (0);
// }