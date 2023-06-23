#include <stdio.h>
#include <stdlib.h>

int main(){
	int digito[20],m;
	int decimal,residuo,resultado,n,op;
	char hex[8];
  int sum=0;
  int i=0;
  int j=7;
	
	do{	
	printf("\n\n1. DECIMAL A HEXADECIMAL ");
	printf("\n2. HEXADECIMAL A DECIMAL ");
	printf("\n3. SALIR ");
	printf("\n\nIngrese el numero de la opcion a ejecutar: ");
	scanf("%d", &op);
	
	switch(op){
		case 1:	
			n=0;
			for(m=0;m<=1;m++){
			digito[m]=0;
			}
			printf("Ingrese el numero a convertir a Hexadecimal: ");
			scanf ("%d", &decimal);
			
			do{
				residuo=decimal%16;
				resultado=decimal/16;
				digito[n]=residuo;
				decimal=resultado;
				n++;
			}while (resultado > 15);
			
			
			digito[n]=resultado;
			printf("El equivalente en base 16 es: ");
			
			for(m=n;m>=0;m--){
				switch(digito[m]){
					case 10:
						printf("A");
						break;
					case 11:
						printf("B");
						break;
					case 12:
						printf("C");
						break;
					case 13:
						printf("D");
						break;
					case 14:
						printf("E");
						break;
					case 15:
						printf("F");
						break;
					default:
						printf("%d",digito[m]);
						break;
				}
			}
			break;
			
		case 2:
			sum=0;
			for(i=0;i<8;i++){
			hex[i]=0;
			}
			i=-1;  
			printf("Escribe un numero hexadecimal, en caso de usar letras, use MAYUSCULAS: \n");
			scanf("%s",hex); 
			for(j=7;j>=0;j--){
			switch(hex[j]){
			case '0':
				i++;
				sum+=0*pow(16,i);
				break;
			case '1':
				i++;
				sum+=1*pow(16,i);
				break;
			case '2':
				i++;
				sum+=2*pow(16,i);
				break;
			case '3':
				i++;
				sum+=3*pow(16,i);
				break;
			case '4':
				i++;
				sum+=4*pow(16,i);
				break;
			case '5':
				i++;
				sum+=5*pow(16,i);
				break;
			case '6':
				i++;
				sum+=6*pow(16,i);
				break;
			case '7':
				i++;
				sum+=7*pow(16,i);
				break;
			case '8':
				i++;
				sum+=8*pow(16,i);
				break;
			case '9':
				i++;
				sum+=9*pow(16,i);
				break;
			case 'A':
				i++;
				sum+=10*pow(16,i);
				break;
			case 'B':
				i++;
				sum+=11*pow(16,i);
				break;
			case 'C':
				i++;
				sum+=12*pow(16,i);
				break;
			case 'D':
				i++;
				sum+=13*pow(16,i);
				break;
			case 'E':
				i++;
				sum+=14*pow(16,i);
			break;
			case 'F':
				i++;
				sum+=15*pow(16,i);
			break;
			}
  }

  printf("El numero decimal es: %d",sum);
		}
}while(op!=3);
}
