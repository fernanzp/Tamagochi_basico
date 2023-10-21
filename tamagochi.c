/* Programa: Tamagochi
 * Grupo: 1D
 * Nombre: Fernando Pérez Chávez
 */
#include <stdio.h>

int main()
{
	//Declaramos las variables
	int opc, hambre = 0, energia = 100;

	for(int i = 1; i == 1;)
	{
		printf("\n\n			  --Tamagochi--\n");
		printf("			Jugar.........[1]");
		printf("\n			Comer.........[2]");
		printf("\n			Dormir........[3]");
		printf("\n			Ver estado....[4]");
		printf("\n			Salir.........[5]");
		printf("\n			");
		scanf("%d", &opc);

		switch(opc)
		{
			case 1:
				
				break;
			case 2:

				break;
			case 3:
				break;
			case 4:
				printf("\n			Energia: %d", energia);
				printf("\n			Hambre:  %d", hambre);
				break;
			case 5:
				printf("\n			¡Gracias por cuidar de tu Tamagochi!\n");
				return 0;
			default:
				printf("\n			¡Error, opción inexistente!\n");
				return 1;
		}
	}
	return 0;
}
