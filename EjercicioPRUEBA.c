#include<stdio.h>

int main(){
    float num1;
    float num2;
      printf("SUMA DE ENTEROS PARA REALIZAR UN PROMEDIO \n");
    while (num1 <= 0 || num2 <= 0){
    printf("Ingrese la nota 1: \n"); scanf("%f", &num1);
    printf("Ingrese la nota 2: \n"); scanf("%f", &num2);


    if (num1 >= 0 && num2 >= 0){
        float prom = (num1 + num2) / 2;
        printf("Su promedio es %.2f\n", prom);
        float multi= num1 * num2;
        printf("Su multiplicacion es %.2f\n", multi);

        float resta= num1 - num2;
        printf("Su resta es %.2f\n", resta);

        float division= num1 * num2;
        printf("Su division es %.2f\n",division);




    if(prom >= 14){
        printf("Aprueba");
    }else if (prom < 13.99 && prom >= 11){
        printf("Supletorio");
    }else{
        printf("Reprueba");

        }
    }
}}
