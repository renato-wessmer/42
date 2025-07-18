
#include <stdio.h>

void	plus_one(int *ptr)
{
	(*ptr)++;
}

int	main(void)
{
	int	n; // variável to tipo inteiro nomeada de n
	int *ptr_n; // variavel do tipo ponteiro nomeada de ptr_n, o asterisco só é colocado
	//para indicar que a variavel é do tipo ponteiro

	n = 42; // valor atribuido, no caso 42;
	ptr_n = &n; // a variavel recebe o endereço de memoria de n 


	plus_one(ptr_n);
	printf("%d\n", n);
}