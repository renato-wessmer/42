
#include <stdio.h>

int	main(void)
{
	int	n; // variável to tipo inteiro nomeada de n
	int *ptr_n; // variavel do tipo ponteiro nomeada de ptr_n, o asterisco só é colocado
	//para indicar que a variavel é do tipo ponteiro

	n = 42; // valor atribuido, no caso 42;
	ptr_n = &n; // a variavel recebe o endereço de memoria de n 

	printf("%d\n", n); // traz o valor inicial referênciado de n;
	*ptr_n = 1337;
	// agora a variavel do tipo ponteiro recebe um novo valor 1337
	printf("%d\n", n); // traz o valor novo refenciado a variavel do tipo ponteiro ptr_n;
}
