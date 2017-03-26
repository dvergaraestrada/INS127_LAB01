#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char*argv[]){
	int**matriz; //matriz
	int i, j, filas, columnas, aleatorio;
	printf("Ingrese numero de filas para la matriz A: ");
	scanf("%i",&filas);
	printf("Ingrese numero de columnas para la matriz A: ");
	scanf("%i",&columnas);
	//reserva de memoria para las filas
    matriz = (int**) malloc(filas*sizeof(int*));
	
	for (i=0; i<filas; i++){
   	 //para cada fila reserva memoria para las columnas
   	 matriz[i] = (int*) malloc(columnas*sizeof(int));
    }
    srand(time(NULL));//Se inicia el aleatorio para creacion de los numeros
   //se generan los valores de la matriz
    for (i=0;i<filas;i++){
   	 for (j=0;j<columnas;j++){
   		 aleatorio=rand()%99;
		 matriz[i][j]=aleatorio;
	    }
    }
   //mostrar valores
    printf("\n");
    printf("Los valores de la matriz A son: \n");
    for (i=0;i<filas;i++){
	  printf("Fila %i: ",i);
      for (j=0;j<columnas;j++){ 
      	printf("%i\t", matriz[i][j]);
	  }
	  printf("\n");
    }
    primos(matriz,filas,columnas);
    
    
    //liberación memoria
    for (i=0;i<filas;i++){
    	free (matriz[i]);
	}
	free (matriz);
	return 0;
}
void primos(int **matriz, int filas,int columnas){
	int i , j ;
	for (i=0;i<filas;i++){
		int max_div=0,swc=0,resto=0,num,k;
		for (j=0;j<columnas;j++){
			num = matriz[i][j];
			max_div=num/2;
			for (k=2;k<=max_div;k++){
				resto = num%k;
				if (resto==0){
					swc=1;
				}
			}
			if (swc>0){
				matriz[i][j]=0;
			}
		}
	}
	printf("\n");
	printf("NUEVA MATRIZ : ");
	printf("\n");
	for (i=0;i<filas;i++){
    	for (j=0;j<columnas;j++){
    		printf("%i\t",matriz[i][j]);
		}
		printf("\n");
	}
}
