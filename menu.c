+#include <stdio.h>

int main()
{
	
	int menu;
	int option;
	/*Respecto a las opciones del doctor, se replantearán suprimirlas si son causa de complicar el programa*/

	
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
