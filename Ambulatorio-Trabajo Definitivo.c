#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define u 10


typedef struct
{
	char usuario[10];
	char clave[10];
	
}Tusuario;

typedef struct
{
	char nombre[10];
	char apellido1[15];
	char apellido2[15];
	char dni[10];
	char fnacimiento[15];
	int numtarjetasanitaria;
}paciente;

typedef struct
{
	int dia;
	char mes[10];
	int hora;
	int min;	
}cita;

int ExisteUsuario(Tusuario usuarioValido[],char username[],char password[]);

void validacion(void);

void Guardar(char nombreficheroC[],char nombreficheroP[],cita[],paciente[]);
void leerficheros(char nombreficheroC[],char nombreficheroP[]);

int main()
{

	int menu;
	int option;
	int i,j,k;
		
	int respuesta;
	
	validacion ();

    paciente pt[3];
	cita ct[3];
	
	int ficha;
	int consulta;
	
	do{
			printf("\nIntroduzca el numero de opcion que desea realizar.\n");
        	printf("\nOpcion 1: Introducir datos de un nuevo paciente.");
	        printf("\nOpcion 2: Modificar datos de un paciente.");
	        printf("\nOpcion 3: Consultar datos de un paciente.");
	        printf("\nOpcion 4: Crear una cita.");
            printf("\nOpcion 5: Modificar una cita.");
	        printf("\nOpcion 6: Consultar una cita.");
	        printf("\nOpcion 7: Guardar y salir.");

	        scanf("%d",&option);
	        
	    switch(option)
	    {
		   case 1:
		   	        
		   	        printf("\nIndique en que ficha quiere guardar al paciente:1 o 2 o 3.\n");
	                scanf("%d",&ficha);
	                
	                switch(ficha)
	                {
	                	case 1:
	                		
	                		printf("\nIndique el nombre del paciente.");
				          	scanf("%s",pt[0].nombre);
					        printf("\n Indique el primer apellido del paciente.");
					        scanf("%s",pt[0].apellido1);
					        printf("\n Indique el segundo apellido del paciente.");
					        scanf("%s",pt[0].apellido2);
					        printf("\nIndique el dni del paciente.");
					        scanf("%s",pt[0].dni);
				        	printf("\nIndique la fecha de nacimiento del paciente (sin espacios).");
					        scanf("%s",pt[0].fnacimiento);
					        printf("\nIndique el numero de tarjeta sanitaria.");
					        scanf("%d",&pt[0].numtarjetasanitaria);	
	                		break;
	                		
	                	case 2:
	                		
						   	printf("\nIndique el nombre del paciente.");
				          	scanf("%s",pt[1].nombre);
					        printf("\n Indique el primer apellido del paciente.");
					        scanf("%s",pt[1].apellido1);
					        printf("\n Indique el segundo apellido del paciente.");
					        scanf("%s",pt[1].apellido2);
					        printf("\nIndique el dni del paciente.");
					        scanf("%s",pt[1].dni);
				        	printf("\nIndique la fecha de nacimiento del paciente (sin espacios).");
					        scanf("%s",pt[1].fnacimiento);
					        printf("\nIndique el numero de tarjeta sanitaria.");
					        scanf("%d",&pt[1].numtarjetasanitaria);	
	                		break;
							
						
						case 3:
							
						   	printf("\nIndique el nombre del paciente.");
				          	scanf("%s",pt[2].nombre);
					        printf("\n Indique el primer apellido del paciente.");
					        scanf("%s",pt[2].apellido1);
					        printf("\n Indique el segundo apellido del paciente.");
					        scanf("%s",pt[2].apellido2);
					        printf("\nIndique el dni del paciente.");
					        scanf("%s",pt[2].dni);
				        	printf("\nIndique la fecha de nacimiento del paciente (sin espacios).");
					        scanf("%s",pt[2].fnacimiento);
					        printf("\nIndique el numero de tarjeta sanitaria.");
					        scanf("%d",&pt[2].numtarjetasanitaria);	
	                		break;
				
							
						default:
						
						   printf("\nEste numero de ficha no esta disponible.");
						   break;				
					}
	                				    
				    printf("\nPulse para continuar.");
				    while(getchar()!='\n');
				    break;
					
		   case 2:
		   			   	
                printf ("\nIndique el numero de tarjeta sanitaria del paciente.");
				scanf ("%d",&j);
				
				if(j==pt[0].numtarjetasanitaria)
				{
					printf("\nModifique los datos necesarios,y en el caso de que algunos datos no se deseen modificar,escriba de nuevo el dato original.");
					printf("\nIndique de nuevo el numero de tarjeta sanitaria del paciente.");
					scanf("%d",&pt[0].numtarjetasanitaria);
					printf("\nIndique de nuevo el nombre del paciente.");
					scanf("%s",pt[0].nombre);
					printf("\nIndique de nuevo el primer apellido del paciente.");
					scanf("%s",pt[0].apellido1);
					printf("\nIndique de nuevo el segundo apellido del paciente.");
					scanf("%s",pt[0].apellido2);
					printf("\nIndique de nuevo el dni del paciente.");
					scanf("%s",pt[0].dni);
					printf("\nIndique de nuevo la fecha de nacimiento del paciente(sin espacios).");
					scanf("%s",pt[0].fnacimiento);
					
					printf("Los datos actualizados son: Paciente %s %s %s, nacido el %s,con DNI %s y numero de tarjeta sanitaria %d.",pt[0].nombre,pt[0].apellido1,pt[0].apellido2,pt[0].fnacimiento,pt[0].dni,pt[0].numtarjetasanitaria);
				}
                
                else if(j==pt[1].numtarjetasanitaria)
				{
					printf("\nModifique los datos necesarios,y en el caso de que algunos datos no se deseen modificar,escriba de nuevo el dato original.");
					printf("\nIndique de nuevo el numero de tarjeta sanitaria del paciente.");
					scanf("%d",&pt[1].numtarjetasanitaria);
					printf("\nIndique de nuevo el nombre del paciente.");
					scanf("%s",pt[1].nombre);
					printf("\nIndique de nuevo el primer apellido del paciente.");
					scanf("%s",pt[1].apellido1);
					printf("\nIndique de nuevo el segundo apellido del paciente.");
					scanf("%s",pt[1].apellido2);
					printf("\nIndique de nuevo el dni del paciente.");
					scanf("%s",pt[1].dni);
					printf("\nIndique de nuevo la fecha de nacimiento del paciente(sin espacios).");
					scanf("%s",pt[1].fnacimiento);
					
					printf("Los datos actualizados son: Paciente %s %s %s, nacido el %s,con DNI %s y numero de tarjeta sanitaria %d.",pt[1].nombre,pt[1].apellido1,pt[1].apellido2,pt[1].fnacimiento,pt[1].dni,pt[1].numtarjetasanitaria);
				}
                
                else if(j==pt[2].numtarjetasanitaria)
				{
					printf("\nModifique los datos necesarios,y en el caso de que algunos datos no se deseen modificar,escriba de nuevo el dato original.");
					printf("\nIndique de nuevo el numero de tarjeta sanitaria del paciente.");
					scanf("%d",&pt[2].numtarjetasanitaria);
					printf("\nIndique de nuevo el nombre del paciente.");
					scanf("%s",pt[2].nombre);
					printf("\nIndique de nuevo el primer apellido del paciente.");
					scanf("%s",pt[2].apellido1);
					printf("\nIndique de nuevo el segundo apellido del paciente.");
					scanf("%s",pt[2].apellido2);
					printf("\nIndique de nuevo el dni del paciente.");
					scanf("%s",pt[2].dni);
					printf("\nIndique de nuevo la fecha de nacimiento del paciente(sin espacios).");
					scanf("%s",pt[2].fnacimiento);
					
					printf("\nLos datos actualizados son: Paciente %s %s %s, nacido el %s,con DNI %s y numero de tarjeta sanitaria %d.",pt[2].nombre,pt[2].apellido1,pt[2].apellido2,pt[2].fnacimiento,pt[2].dni,pt[2].numtarjetasanitaria);
				}
                
				else
				{
					printf("\nEl numero de tarjeta sanitaria no está registrado en este departamento.");
					}	
                 
				printf("\nPulse para continuar.");
				while(getchar()!='\n');
				break;
						
		   case 3:
		         
				printf("\nIndique el numero de la tarjeta sanitaria del paciente.");
	            scanf("%d",&j);	
				
			    if(j==pt[0].numtarjetasanitaria)
			    {
			    	printf("\nEl paciente con el numero de tarjeta sanitaria %d, se llama %s %s %s, nacido el %s y con DNI %s.",pt[0].numtarjetasanitaria,pt[0].nombre,pt[0].apellido1,pt[0].apellido2,pt[0].fnacimiento,pt[0].dni);
			    }
			    
			    else if(j==pt[1].numtarjetasanitaria)
			    {
			    	printf("\nEl paciente con el numero de tarjeta sanitaria %d, se llama %s %s %s, nacido el %s y con DNI %s.",pt[1].numtarjetasanitaria,pt[1].nombre,pt[1].apellido1,pt[1].apellido2,pt[1].fnacimiento,pt[1].dni);
				}
				
				else if(j==pt[2].numtarjetasanitaria)
				{
					printf("\nEl paciente con el numero de tarjeta sanitaria %d, se llama %s %s %s, nacido el %s y con DNI %s.",pt[2].numtarjetasanitaria,pt[2].nombre,pt[2].apellido1,pt[2].apellido2,pt[2].fnacimiento,pt[2].dni);
				}
				
				else
				{
					printf("\nNo se encuentran pacientes con este numero de tarjeta sanitaria.");
				}
				
				printf("\nPulse para continuar.");
				while(getchar()!='\n');
				break;
		   case 4: 
		   
		        printf("\nIndique en que consulta quiere guardar al paciente: 1 o 2 o 3.\n");
	            scanf("%d",&consulta);
	                
	                switch(consulta)
	                {
	                	case 1:
	                		
	                		printf("\nIndique el dia de la cita.");
				          	scanf("%d",&ct[0].dia);
					        printf("\nIndique el mes de la cita.");
					        scanf("%s",ct[0].mes);
					        printf("\nIndique la hora de la cita.");
					        scanf("%d",&ct[0].hora);
					        printf("\nIndique el min de la cita.");
					        scanf("%d",&ct[0].min);
	                		break;
	                		
	                	case 2:
	                		
						    printf("\nIndique el dia de la cita.");
				          	scanf("%d",&ct[1].dia);
					        printf("\nIndique el mes de la cita.");
					        scanf("%s",ct[1].mes);
					        printf("\nIndique la hora de la cita.");
					        scanf("%d",&ct[1].hora);
					        printf("\nIndique el min de la cita.");
					        scanf("%d",&ct[1].min);
	                		break;
	                		
						
						case 3:
							
						   	printf("\nIndique el dia de la cita.");
				          	scanf("%d",&ct[2].dia);
					        printf("\nIndique el mes de la cita.");
					        scanf("%s",ct[2].mes);
					        printf("\nIndique la hora de la cita.");
					        scanf("%d",&ct[2].hora);
					        printf("\nIndique el min de la cita.");
					        scanf("%d",&ct[2].min);
	                		break;
				
							
						default:
						
						   printf("\nEste numero de ficha no esta disponible.");
						   break;				
					}
	                				    
				    printf("\nPulse para continuar.");
				    while(getchar()!='\n');
				    break;
				
		   case 5:
		   	
		   	    printf("\nIndique el dia de la cita.");
				scanf("%d",&k);
				
				if(k==ct[0].dia)
				{
					printf("\nModifique los datos necesarios,y en el caso de que algunos datos no se deseen modificar,escriba de nuevo el dato original.");
					printf("\nIndique de nuevo el dia de la cita del paciente.");
					scanf("%d",&ct[0].dia);
					printf("\nIndique de nuevo el mes de la cita del paciente.");
					scanf("%s",ct[0].mes);
					printf("\nIndique de nuevo la hora de la cita del paciente.");
					scanf("%d",&ct[0].hora);
					printf("\nIndique de nuevo los minutos de la cita del paciente.");
					scanf("%d",&ct[0].min);
					
					printf("Los datos actualizados de la cita son: Cita programada para el dia %d de %s a las %d:%d.",ct[0].dia,ct[0].mes,ct[0].hora,ct[0].min);
				}
                
                else if(k==ct[1].dia)
				{
				    printf("\nModifique los datos necesarios,y en el caso de que algunos datos no se deseen modificar,escriba de nuevo el dato original.");
					printf("\nIndique de nuevo el dia de la cita del paciente.");
					scanf("%d",&ct[1].dia);
					printf("\nIndique de nuevo el mes de la cita del paciente.");
					scanf("%s",ct[1].mes);
					printf("\nIndique de nuevo la hora de la cita del paciente.");
					scanf("%d",&ct[1].hora);
					printf("\nIndique de nuevo los minutos de la cita del paciente.");
					scanf("%d",&ct[1].min);
					
					printf("Los datos actualizados de la cita son: Cita programada para el dia %d de %s a las %d:%d.",ct[1].dia,ct[1].mes,ct[1].hora,ct[1].min);
				}
                
                else if(k==ct[2].dia)
				{
					printf("\nModifique los datos necesarios,y en el caso de que algunos datos no se deseen modificar,escriba de nuevo el dato original.");
					printf("\nIndique de nuevo el dia de la cita del paciente.");
					scanf("%d",&ct[2].dia);
					printf("\nIndique de nuevo el mes de la cita del paciente.");
					scanf("%s",ct[2].mes);
					printf("\nIndique de nuevo la hora de la cita del paciente.");
					scanf("%d",&ct[2].hora);
					printf("\nIndique de nuevo los minutos de la cita del paciente.");
					scanf("%d",&ct[2].min);
					
					printf("Los datos actualizados de la cita son: Cita programada para el dia %d de %s a las %d:%d.",ct[2].dia,ct[2].mes,ct[2].hora,ct[2].min);
				}
                
				else
				{
					printf("\nNo hay ninguna cita programada para este dia.");
					}	
                 
				printf("\nPulse para continuar.");
				while(getchar()!='\n');
				break;
               
		        
		   case 6:
	            printf("\nIndique el dia de la cita del paciente.");
				scanf("%d",&k);
					
			    if(k==ct[0].dia)
			    {
			    	printf("La cita esta programada para el dia %d de %s a las %d:%d.",ct[0].dia,ct[0].mes,ct[0].hora,ct[0].min);
			    }
			    
			    else if(k==ct[1].dia)
			    {
			        printf("La cita esta programada para el dia %d de %s a las %d:%d.",ct[1].dia,ct[1].mes,ct[1].hora,ct[1].min);
				}
				
				else if(k==ct[2].dia)
				{
					printf("La cita esta programada para el dia %d de %s a las %d:%d.",ct[2].dia,ct[2].mes,ct[2].hora,ct[2].min);
				}
				
				else
				{
					printf("\nNo se encuentran citas programadas para ese dia.");
				}
				
				printf("\nPulse para continuar.");
				while(getchar()!='\n');
				break;
					
		   case 7:
		   	
		        printf("\nSe van a guardar los datos introducidos o modificados.");
		        printf("\nSe va a cerrar la aplicacion.");
				Guardar("citas.txt","pacientes.txt",ct,pt);				
				break;
			
		   
		   default:
			printf("\nOpcion incorrecta.\n");
			printf("\nPulse otra opcion para continuar.");
			break;
			
    	}
    	
    }while(option!=7);
        
	return 0;	
}

int ExisteUsuario(Tusuario usuarioValido[],char username[],char password[])
{
	int validar;
	int i;
	for(i=0;i<u;i++)
	{
		validar=(strcmp(usuarioValido[i].usuario,username)||strcmp(usuarioValido[i].clave,password));
		if(validar==0)
		break;
	}
	return validar;
}

void validacion (void)
{
	Tusuario usuarios[u];
	char usuarioInt[10];
	char claveInt[10];
	int valido;
	int intento=0;
	
	strcpy (usuarios[0].usuario, "ana"); strcpy (usuarios[0].clave,"1978");
	strcpy (usuarios[1].usuario, "profesor"); strcpy (usuarios[1].clave,"1234");

	do
	{
		intento++;
		if(intento>3)
		{
			printf("\nSe han agotado el numero de intentos.Pulse de nuevo para salir del programa.");
			while(getchar()!='\n');
			exit(-33);
		}
		
		printf("\nIntroduzca el usuario y la clave.");
		scanf("%s %s",usuarioInt,claveInt);
		while(getchar()!='\n');
		
		valido=ExisteUsuario(usuarios,usuarioInt,claveInt);
	}while(valido!=0);
}

void Guardar(char nombreficheroC[],char nombreficheroP[],cita ctk[],paciente ptk[])
{
	
	int i;
	FILE *pArchivoC;
	FILE *pArchivoP;
	pArchivoC=fopen(nombreficheroC,"w");
	pArchivoP=fopen(nombreficheroP,"w");
	
	if(pArchivoC==NULL)
	{
		printf("\nError al abrir el archivo de citas.");
		return;
	}
	if(pArchivoP==NULL)
	{
		printf("\nError al abrir el archivo de pacientes.");
		return;
	}
	
	for(i=0;i<3;i++)
	{
		fprintf(pArchivoC,"%d %s %d:%d\n",ctk[i].dia,ctk[i].mes,ctk[i].hora,ctk[i].min);		
	}

	for(i=0;i<3;i++)
	{
		fprintf(pArchivoP, "%d %s %s %s %s %s\n",ptk[i].numtarjetasanitaria,ptk[i].dni,ptk[i].fnacimiento,ptk[i].nombre,ptk[i].apellido1,ptk[i].apellido2);
	}
	
	
	fclose(pArchivoC);
	fclose(pArchivoP);
}

void leerficheros(char nombreficheroC[],char nombreficheroP[])
{
	cita ctl[2];
	paciente ptl[2];
	int i;
	FILE *pArchivoC;
	FILE *pArchivoP;
	pArchivoC=fopen(nombreficheroC,"r");
	if(pArchivoC==NULL)
	{
		printf("\nError de lectura.");
		return;
	}
	pArchivoP=fopen(nombreficheroP,"r");
	if(pArchivoP==NULL)
	{
		printf("\nError de lectura.");
		return;
	}
	
	for(i=0;i<3;i++)
	{
		fscanf(pArchivoC,"%d %s %d %d",&ctl[i].dia,ctl[i].mes,&ctl[i].hora,&ctl[i].min);
		printf("\n%d %s %d %d",ctl[i].dia,ctl[i].mes,ctl[i].hora,ctl[i].min);
    }
  
	for(i=0;i<3;i++)
	{
		fscanf(pArchivoP,"%d %s %s %s %s %s",&ptl[i].numtarjetasanitaria,ptl[i].dni,ptl[i].fnacimiento,ptl[i].nombre,ptl[i].apellido1,ptl[i].apellido2);	
		printf("\n%d %s %s %s %s %s",ptl[i].numtarjetasanitaria,ptl[i].dni,ptl[i].fnacimiento,ptl[i].nombre,ptl[i].apellido1,ptl[i].apellido2);
    }
	fclose(pArchivoC);
	fclose(pArchivoP);
}

