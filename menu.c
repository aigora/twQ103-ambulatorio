#include <stdio.h>

typedef struct
{
	char usuario[10];
	char clave[10];
	
}sesion; //en el caso de que queramos iniciar sesion para acceder al menu

typedef struct
{
	char nombre[10];
	char apellido1[15];
	char apellido2[15];
	char dni[10];
	char fnacimiento[15];
	//metemos grupo sanguineo? o innecesario?
	
}paciente;

typedef struct
{
	int dia;
	int mes;
	int year;
	int hora;
	int min;
	
}cita;


int main()
{
	
	int menu;
	int option;
	
	do{
		
			printf("Introduzca el numero de opcion que desea realizar.\n");
        	printf("\nOpcion 1: Introducir datos de un nuevo paciente.");
	        printf("\nOpcion 2: Modificar datos de un paciente.");
	        printf("\nOpcion 3: Consultar datos de un paciente.");
	        printf("\nOpcion 4: Crear una cita.");
            printf("\nOpcion 5: Modificar una cita.");
	        printf("\nOpcion 6: Consultar una cita.");
	        printf("\nOpcion 7: Salir del menu.");
	        scanf("%d",&option);
	        
	    switch(option)
	    {
		   case 1:
				
				break;
				
		   case 2:
                
				break;
						
		   case 3:
                
				break;
						
		   case 4: 

	            break;
					     
		   case 5:
		
		        break;
		        
		   case 6:
	            
				break;
					
		   case 7:
		        
		        return 0;
		        break;
		   
			
		   default:
			printf("\nOpcion incorrecta.\n");
			printf("\nPulse otra opcion para continuar.");
			break;
			
    	}
    	
    }while(option != 7);
        
	return 0;	
}
