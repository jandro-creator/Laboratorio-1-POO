#include<stdio.h>
#include<string.h>


void imprimirpalabra (char matriz [][10], int n );
void palabraMasPequena(char matriz[][10], int n);
 void palabraMasLarga(char matriz [][10], int n);
 void pequenaAlfabeticamente (char matriz [][10], int n);
 void ordenamientoBurbuja(char matriz [][10], int n);
 void copiarYModificar(char matriz[][10], int n );
 void verificarPalabrasRepetidas(char matriz[][10], int n);


int main (){
    char matriz[5][10];

    for (int i=0; i < 5 ; i++){
        printf("Ingresa la %d palabra de la matriz: ", i+1);
        scanf(" %9[^\n]", matriz [i]);
    }

    imprimirpalabra(matriz,5);
    palabraMasPequena(matriz, 5);
    palabraMasLarga(matriz, 5);
    pequenaAlfabeticamente(matriz, 5);
    ordenamientoBurbuja(matriz, 5);
    for (int i=0 ; i<5; i++){
    printf("\n La palabra es %s ", matriz[i]);
  }
  copiarYModificar(matriz, 5);
  verificarPalabrasRepetidas(matriz, 5);

return 0;
}
 //IMPLEMENTACIONES

//para imprimir las cadenas

void imprimirpalabra (char matriz [][10], int n ){
    for (int i =0 ; i<5; i++){
        printf("\n La %d palabra es %s", i+1, matriz [i]);
    }
}
//para la palabra mas pequena

void palabraMasPequena( char matriz [][10], int n ){
  int filaPosicion= 0;
  int corta = strlen(matriz [0]);

  for (int i=0; i < n ; i ++){
     int longitudActual = strlen(matriz [i]);
     if (longitudActual < corta) {
            corta= longitudActual;
            filaPosicion = i;
    }
  }

printf("\n --- Resultado ---");
    printf("\nLa palabra mas pequena es:  %s y tiene %d letras \n", matriz[filaPosicion], corta);
}
//para la palabra mas LARGAA
 void palabraMasLarga(char matriz [][10], int n){
   int filaPosicion= 0;
   int larga = strlen(matriz [0]);

     for (int i=0; i < n; i++){
      int longitudActual = strlen(matriz [i]);
      if (longitudActual> larga ){
            larga = longitudActual;
            filaPosicion= i;
    }
   }
 printf("\n --- Resultado ---");
    printf("\n La palabra mas larga es:  %s y tiene %d letras \n", matriz [filaPosicion], larga );
 }
//PARA LA PALABRA MAS BAJA EN ORDEN ALFABETICO

 void pequenaAlfabeticamente (char matriz [][10], int n){
  int palabraBaja = 0 ;
  for (int i = 1; i < n; i++) {
        if (strcmp(matriz[i], matriz[palabraBaja]) < 0) {
            palabraBaja = i;
        }
  }
  printf("\n--- Orden Alfabetico ---");
    printf("\nLa palabra que va primero en el diccionario es: %s\n", matriz[palabraBaja]);
 }
//VERIFICAR SI HAY PALABRAS REPETIDAS
void verificarPalabrasRepetidas(char matriz[][10], int n){
   int resultado, k=6;

    for(int j = 0; j < 5; j++){
            for(int i = j+1; i < 5; i++){
                resultado = strcmp(matriz[j], matriz[i]);
                    if(resultado==0){
                        k = j;
            }
        }
    }
   if(k != 6){
        printf("\nPalabra repetida: %s", matriz[k]);
    }else{
        printf("\nNo hay palabras repetidas");
    }
}

//ORDENAR PALABRAS ALFABETICAMENTE
void ordenamientoBurbuja (char matriz[][10], int n){
       int interruptor = 1;
       int pasada, j;
       int resComparacion;

       for (pasada =0;pasada < n-1 && interruptor; pasada ++){
        interruptor =0;
        for (j=0; j < n-pasada-1; j++){
           resComparacion= strcmp (matriz[j], matriz [j+1]); // si matriz j es mayor a j+1
            if (resComparacion > 0)
                {
                char aux [10];
                interruptor =1;
                strcpy (aux, matriz [j]);
                strcpy (matriz[j], matriz[j+1]);
                strcpy (matriz[j+1] , aux) ;
               }
        }
       }
 }
//PALABRA PARA MODIFICAR
void copiarYModificar(char matriz[][10], int n ){
    char temporal[10];


    strcpy(temporal, matriz[0]);
    printf("\nQue desea modificar a la palabra: ");
    scanf("%s", temporal);

    printf("Palabra modificada: %s", temporal);
}


