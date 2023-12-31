/* Programa: Tamagochi
 * Grupo: 1D
 * Nombre: Fernando Pérez Chávez
 */
#include <stdio.h>
#include <string.h>

int main()
{
	//Declaramos las variables
	int opc, hambre = 0, energia = 100, x = 1;
	char nom[12];

	printf("\n			Ponle un nombre a tu tamagochi\n");
	printf("			Nombre: ");
	fgets(nom, 12, stdin);
	nom[strcspn(nom, "\n")] = '\0';
	x = 0;

	for(int i = 1; i == 1 && x == 0;)
	{
		printf("\n\n			  --Tamagochi--\n");
		printf("			Jugar.........[1]");
		printf("\n			Comer.........[2]");
		printf("\n			Dormir........[3]");
		printf("\n			Ver Estado....[4]");
		printf("\n			Salir.........[5]");
		printf("\n			");
		scanf("%d", &opc);

		switch(opc)
		{
			case 1:
				for(int i = 1; i == 1;)
				{
					int opc_jugar;
					printf("\n\n			       --Jugar--\n");
					printf("			Jugar a la pelota...[1]");
					printf("\n			Jugar videojuegos...[2]");
					printf("\n			Jugar UNO...........[3]");
					printf("\n			Regresar............[4]");
					printf("\n			");
					scanf("%d", &opc_jugar);
	
					switch(opc_jugar)
					{
						case 1:
							printf("\n			Gracias por jugar a la pelota conmigo :D\n");
							energia -= 10;
							hambre += 5;
							break;
						case 2:
							printf("\n			Gracias por jugar videojuegos conmigo :D\n");
							energia -= 5;
							hambre += 10;
							break;
						case 3:
							printf("\n			Gracias por jugar UNO conmigo :D\n");
							energia -= 5;
							hambre += 5;
							break;
						case 4:
							printf("\n			¡Gracias por jugar con tu Tamagochi!\n");
							i++;
							break;
						default:
							printf("\n			¡Error, opción inexistente!\n");
							break;
					}
					if(energia < 0 || hambre > 100)
					{
						printf("\n			%s murió T-T\n", nom);
						return 0;
					}
				}

				break;
			case 2:
				for(int i = 1; i == 1;)
				{
					int opc_comer;
					printf("\n\n			        --Comer--\n");
					printf("			Comer una manzana.....[1]");
					printf("\n			Comer comida china....[2]");
					printf("\n			Comer espagueti.......[3]");
					printf("\n			Regresar..............[4]");
					printf("\n			");
					scanf("%d", &opc_comer);
	
					switch(opc_comer)
					{
						case 1:
							if(hambre >= 15)
							{
								printf("\n			Mmmmm ¡rico! :D\n");
								energia += 5;
								hambre -= 15;
							}else
							{
								printf("\n			%s no tiene hambre\n", nom);
							}
							break;
						case 2:
							if(hambre >= 20)
							{
								printf("\n			Mmmmm ¡rico! :D\n");
								energia += 10;
								hambre -= 20;
							}else
							{
								printf("\n			%s no tiene hambre\n", nom);
							}
							break;
						case 3:
							if(hambre >= 15)
							{
								printf("\n			Mmmmm ¡rico! :D\n");
								energia += 10;
								hambre -= 15;
							}else
							{
								printf("\n			%s no tiene hambre\n", nom);
							}
							break;
						case 4:
							printf("\n			¡Gracias por alimentar tu Tamagochi!\n");
							i++;
							break;
						default:
							printf("\n			¡Error, opción inexistente!\n");
							break;
					}
					if(energia < 0 || hambre > 100)
					{
						printf("\n			%s murió T-T\n", nom);
						return 0;
					}
				}

				break;
			case 3:
				for(int i = 1; i == 1;)
				{
					int opc_dormir;
					printf("\n\n			       --Dormir--\n");
					printf("			Dormir 30 min....[1]");
					printf("\n			Dormir 3 horas...[2]");
					printf("\n			Dormir 8 horas...[3]");
					printf("\n			Regresar.........[4]");
					printf("\n			");
					scanf("%d", &opc_dormir);
	
					switch(opc_dormir)
					{
						case 1:
							if(energia <= 90)
							{
								printf("\n			Zzz\n");
								energia += 10;
								hambre += 5;
							}else
							{
								printf("\n			%s no tiene sueño\n", nom);
							}
							break;
						case 2:
							if(energia <= 80)
							{
								printf("\n			Zzz\n");
								energia += 20;
								hambre += 5;  
							}else
							{
								printf("\n			%s no tiene sueño\n", nom);
							}
							break;
						case 3:
							if(energia <= 70)
							{
								printf("\n			Zzz\n");
								energia += 30;
								hambre += 5;  
							}else
							{
								printf("\n			%s no tiene sueño\n", nom);
							}
							break;
						case 4:
							printf("\n			¡Tu tamagochi ya descanzó!\n");
							i++;
							break;
						default:
							printf("\n			¡Error, opción inexistente!\n");
							break;
					}	
					if(energia < 0 || hambre > 100)
					{
						printf("\n			%s murió T-T\n", nom);
						return 0;
					}
				}

				break;
			case 4:
				printf("\n		         --Estado--");
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
