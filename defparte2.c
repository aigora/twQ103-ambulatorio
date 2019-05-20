#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define u 10
#define x 10
#define y 10

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

void Guardar(char nombreficheroC[],char nombreficheroP[],int dimC,int dimP);
void leerficheros(char nombreficheroC[], char nombreficheroP[],int dimC,int dimP);

int Contardimp(char nombreficheroP[]);

int Contardimc(char nombreficheroC[]);

int main()
{

	int menu;
	int option;
	int i,j,k;
	int Nc,Np;	
	int respuesta;
	
	validacion ();
    Nc=Contardimc("citas.txt");
    Np=Contardimp("pacientes.txt");
    
	leerficheros("citas.txt","pacientes.txt",Nc,Np); 

	paciente pt[x];
	cita ct[y];

    int fichas;
    
    printf("Introduzca el numero de fichas de pacientes que desea realizar.");
    scanf("%d",&fichas);
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
		   	        
	                for(i=0;i<fichas;i++)
	                {
					printf ("\n Indique el nombre del paciente.");
					scanf ("%s",pt[i].nombre);
					printf ("\n Indique el primer apellido del paciente.");
					scanf ("%s",pt[i].apellido1);
					printf ("\n Indique el segundo apellido del paciente.");
					scanf ("%s",pt[i].apellido2);
					printf ("\nIndique el dni del paciente.");
					scanf ("%s",pt[i].dni);
					printf ("\nIndique la fecha de nacimiento del paciente (sin espacios).");
					scanf ("%s",pt[i].fnacimiento);
					printf ("\nIndique el numero de tarjeta sanitaria.");
					scanf ("%d",&pt[i].numtarjetasanitaria);	
				    }
				    printf("\nPulse para continuar.");
				    while(getchar()!='\n');
				    break;
					
		   case 2:
		   			   	
                printf ("\nIndique el numero de tarjeta sanitaria del paciente.");
				scanf ("%d",&j);
		
                 		
				  if (j!=pt[i].numtarjetasanitaria)
				  {
					printf("\nNo hay pacientes con ese numero de tarjeta sanitaria.");
					break;
			   }
				  else
				  {
				  	for(i=0;i<fichas;i++)
				 {
					printf("\nModifique los datos necesarios,y en el caso de que algunos datos no se deseen modificar,escriba de nuevo el dato original.");
					printf("\nIndique de nuevo el numero de tarjeta sanitaria del paciente.");
					scanf("%d",&pt[i].numtarjetasanitaria);
					printf("\nIndique de nuevo el nombre del paciente.");
					scanf("%s",pt[i].nombre);
					printf("\nIndique de nuevo el primer apellido del paciente.");
					scanf("%s",pt[i].apellido1);
					printf("\nIndique de nuevo el segundo apellido del paciente.");
					scanf("%s",pt[i].apellido2);
					printf("\nIndique de nuevo el dni del paciente.");
					scanf("%s",pt[i].dni);
					printf("\nIndique de nuevo la fecha de nacimiento del paciente(sin espacios).");
					scanf("%s",pt[i].fnacimiento);
				
			      }  
				break;
			}
				printf("\nPulse para continuar.");
				while(getchar()!='\n');
				break;
						
		   case 3:
		         
				printf ("\nIndique el numero de la tarjeta sanitaria del paciente.");
	            scanf("%d",&j);	
				
				for(i=0;i<fichas;i++)
				{
				if(j==pt[i].numtarjetasanitaria)
   	            {
					   printf("\nEl paciente se llama %s %s %s, de DNI %s, con numero de tarjeta sanitaria %d y su fecha de nacimiento es %s",pt[i].nombre,pt[i].apellido1,pt[i].apellido2,pt[i].dni,pt[i].numtarjetasanitaria,pt[i].fnacimiento);
					   while(getchar()!='\n');
				}
				else
				{
				      printf("\nNo se ha encontrado en el registro ningun paciente con este numero de tarjeta sanitaria.");
			          while(getchar()!='\n');
			    }
			    }
				printf("\nPulse para continuar.");
				while(getchar()!='\n');
				break;
			    
		   case 4: 
				
					printf ("\nIndique el dia de la cita.");
					scanf ("%d",&ct[i].dia);
					printf ("\nIndique el mes de la cita.");
					scanf ("%s",ct[i].mes);
					printf ("\nIndique la hora de la cita.");
					scanf ("%d",&ct[i].hora);
					printf ("\nIndique los minutos de la hora de la cita.");
					scanf ("%d",&ct[i].min);	
		
				printf("\nPulse para continuar.");
				while(getchar()!='\n');
	            break;
					     
		   case 5:
                printf ("\nIndique el dia de la cita del paciente.");
				scanf ("%d",&k);
				if (k!=ct[i].dia)
				{
					printf("\nNo se ha encontrado en el registro.");
					while(getchar()!='\n');	
				}
				else	
				{
					printf("\nModifique los datos necesarios,y en el caso de que algunos datos no se deseen modificar,escriba de nuevo el dato original.");
					printf("\nIndique de nuevo el dia de la cita.");
					scanf("%d",&ct[i].dia);
					printf("\nIndique de nuevo el mes de la cita.");
					scanf("%s",ct[i].mes);
					printf("\nIndique de nuevo la hora de la cita.");
					scanf("%d",&ct[i].hora);
					printf("\nIndique los minutos de la hora de la cita.");
					scanf("%d",&ct[i].min);	
				}
				printf("\nPulse para continuar.");
				while(getchar()!='\n');		
		        break;
		        
		   case 6:
	            printf("\nIndique el dia de la cita del paciente.");
				scanf("%d",&k);
				if(k!=ct[i].dia)
				{
					printf("\nNo se ha encontrado en el registro ninguna cita para ese dia.");
					while(getchar()!='\n');	
				}
				else
				{
				 	printf ("La cita esta programa para el dia %d del %s,a las %d:%d.",ct[i].dia,ct[i].mes,ct[i].hora,ct[i].min);
					while(getchar()!='\n');
				}
				printf("\nPulse para continuar.");
				while(getchar()!='\n');
				break;
					
		   case 7:
		        printf("\nSe va a cerrar la aplicacion.");
				Guardar("citas.txt", "pacientes.txt",Nc,Np);				
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

void Guardar(char nombreficheroC[], char nombreficheroP[],int dimC, int dimP)
{
	cita ctk[y];
	paciente ptk[x];
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
	
	for(i=0;i<dimC;i++)
	{
		if(ctk[i].dia) 
		fprintf(pArchivoC,"%d %s %d:%d\n",ctk[i].dia,ctk[i].mes,ctk[i].hora,ctk[i].min);
		else 
		fprintf(pArchivoC,"\nError");
	}
	
	for(i=0;i<dimP;i++)
	{
		if(ptk[i].numtarjetasanitaria)
		fprintf(pArchivoP, "%d %s %s %s %s %s\n",ptk[i].numtarjetasanitaria,ptk[i].dni,ptk[i].fnacimiento,ptk[i].nombre,ptk[i].apellido1,ptk[i].apellido2);
		else 
		fprintf(pArchivoP,"\nError");
	}
	
	fclose(pArchivoC);
	fclose(pArchivoP);
}

void leerficheros(char nombreficheroC[],char nombreficheroP[],int dimC,int dimP)
{
	cita ctl[y];
	paciente ptl[x];
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
	
	for(i=0;i<dimC;i++)
		fscanf(pArchivoC,"%d %s %d %d",&ctl[i].dia,ctl[i].mes,ctl[i].hora,ctl[i].min);
	for(i=0; i<dimP;i++)
		fscanf(pArchivoP,"%d %s %s %s %s %s",&ptl[i].numtarjetasanitaria,ptl[i].dni,ptl[i].fnacimiento,ptl[i].nombre,ptl[i].apellido1,ptl[i].apellido2);	
	
	fclose(pArchivoC);
	fclose(pArchivoP);
}

int Contardimc(char nombreficheroC[])
{
	int contadorc=0;
	char c;
	FILE *pArchivoC;
	pArchivoC = fopen (nombreficheroC,"r");
	if(pArchivoC==NULL)
	{
		printf("Error de lectura.");
		return;
	}
	while ((fscanf(pArchivoC,"%d %s %d %d"))==4)
	{ 
	contadorc++;
    }
    fclose(pArchivoC);
	return contadorc;	
}

int Contardimp(char nombreficheroP[])
{
	int contadorp=0;
	char p;
	FILE *pArchivoP;
	pArchivoP = fopen (nombreficheroP,"r");
	if(pArchivoP==NULL)
	{
		printf("Error de lectura.");
		return;
	}
	while ((fscanf(pArchivoP,"%d %s %d %d"))==4)
	{ 
	contadorp++;
    }
    fclose(pArchivoP);
	return contadorp;	
}
