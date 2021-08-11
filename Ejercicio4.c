#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	printf("Introduzca un dia con numeros del 1 al 7: ");
	scanf("%c", &ch);
	switch(ch)
	{
	case '1':
		puts("Domingo.");
		break;
	case '2':
		puts("Lunes.");
		break;
	case '3':
		puts("Martes.");
		break;
	case '4':
		puts("Miercoles.");
		break;
	case '5':
		puts("Jueves.");
		break;
	case '6':
		puts("Viernes.");
		break;
	case '7':
		puts("Sabado.");
		break;
	default:
		puts("Error");
	}
	system("pause");

}
