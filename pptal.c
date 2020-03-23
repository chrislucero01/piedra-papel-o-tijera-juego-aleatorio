/*Piedra Papel o Tijera*/

# include <stdio.h>
# include <stdlib.h>
#include <time.h>
int main ()
{
	int opcion, r;
	printf("\n****Pidra, Papel o Tijera****\n\n");
	do{
		printf("**Ingrese el numero que corresponda a su eleccion:**\n");
		srand(time(NULL));
		r=rand()%3;
		printf("0. Piedra\n");
		printf("1. Papel\n");
		printf("2. Tijera\n");
		printf("3. Salir\n");
		scanf("%d", &opcion);
		switch (opcion)
		{
			case 0:
			printf("Elegiste Piedra\n");
			    if (r==0)
			    {
				printf("Elegi Piedra\n");
			    printf("*Empate*\n\n");
			    }
			 else
			    {
			     if (r==1)
			     {
			         printf("Elegi Papel\n");
			         printf("*Gana la computadora*\n\n");
			     }
			     else
			    {
			     if (r==2)
			     {
			         printf("Elegi Tijeras\n");
			         printf("*Tu ganas*\n\n");
			     }
			    }
			  }
			break;
			case 1:
			printf("Elegiste Papel\n");
			        if (r==0)
			        {
			            printf("Elegi Piedra\n");
			            printf("*Tu ganas*\n\n");
			        }
			        else
			        {
			            if (r==1)
			            {
			                printf("Elegi Papel\n");
			                printf("*Empate*\n\n");
			            }
			            else
			            {
			                if (r==2)
			                {
			                    printf("Elegi Tijeras\n");
			                   printf("*Gana la computadora*\n\n");
			                }
			            }
			        }
			break;
			case 2 :
			printf("Elegiste: Tijera\n");
			          if (r==0)
			          {
			              printf("Computadora elige Piedra\n");
			            printf("*Gana la computadora*\n\n");
			          }
			          else
			          {
			              if (r==1)
			              {
			                printf("Elegi Papel\n");
			                 printf("*Tu ganas*\n\n");
			              }
			              else
			              {
			                  if (r==2)
			                  {
			                    printf("Elegi Tijera\n");
			                     printf("*Empate*\n\n");
			                  }
			              }
			          }
			          break;
		}
	}
	while(opcion !=3);
}