#include <stdio.h>
#include <locale.h>
/* ********************************************************************
    Algumas formata��es importantes:

    %i -> int       %e -> nota��o           %u ->unsigned
    %f -> float     %hd -> short int        %lu -> unsigned long
    %c -> char      %ld -> long int
    %s -> String    %hu -> unsigned short
***********************************************************************/
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("Meu nome � %s, e eu tenho %i anos\n", "Kenny", 20);
    printf("O cliente %s pagou sua conta no valor de R$%f no estabelecimento %s\n", "Jo�o", 1500.0, "Mercadinho do Z�");
    printf("O cliente %s pagou sua conta no valor de R$%.2f no estabelecimento %s ", "Joaquim", 2300.0, "Bar do Domingo"); //exemplo com limite de casas decimais

}

