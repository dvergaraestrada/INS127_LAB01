#include <stdio.h>

int main(int argc, char *argv[]){
	printf("\t\t NUMERO MAGICO DE LAS PERSONAS\n");
	printf("\n");
	int dia, mes, ano, fecha_correcta, sumaInicial, nroMagico, dia_maximo;
    printf("Ingrese el numero del dia de su nacimiento: ");
    scanf("%d", &dia);
    printf("Ingrese el numero del mes de su nacimiento: ");
    scanf("%d", &mes);
    printf("Ingrese el numero del año de su nacimiento: ");
    scanf("%d", &ano);

	
    fecha_correcta = 0;

    if ( mes >= 1 && mes <= 12 && ano > 0) //valida mes y año
    {
        switch ( mes )
        {
            case  1 :
            case  3 :
            case  5 :
            case  7 :
            case  8 :
            case 10 :
            case 12 : dia_maximo = 31;
                      break;

            case  4 :
            case  6 :
            case  9 :
            case 11 : dia_maximo = 30;
                      break;

            case  2 : if ( ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0 ){
                          dia_maximo = 29;
                      }else{
                          dia_maximo = 28;
                      }
        }

        if ( dia >= 1 && dia <= dia_maximo) fecha_correcta = 1; //valida el dia
    }


    if ( fecha_correcta ){
	sumaInicial = dia+mes+ano;
	nroMagico = numeroMagico(sumaInicial); //si fecha es correcta obtenemos el numero magico
        printf("Su numero magico es: %i\n", nroMagico);
    }else{
	printf("Imposible obtener numero magico, fecha incorrecta"); // numero mal
    }
    
	return 0;
}

int numeroMagico(int numero) {
    
    int digito;
	int num = numero;
	int sumaFinal = 0;
	
    if(num >0 && num < 10){ //el numero magico me imagino que es entre 0 y 10
        return num;//retorna numero magico        
    }else{
        while(num){ //obtiene el digito y lo va sumando
            digito = num % 10;
    	    sumaFinal = sumaFinal + digito;
    	    num /= 10;
    	}
        return numeroMagico(sumaFinal); //funcion recursiva hasta encontrar el numero magico
    }
}

