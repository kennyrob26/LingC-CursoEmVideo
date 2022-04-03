#include <stdio.h>
#include <locale.h>
/* ********************************************************************
    Algumas formatações importantes:

    %i -> int       %e -> notação           %u ->unsigned
    %f -> float     %hd -> short int        %lu -> unsigned long
    %c -> char      %ld -> long int
    %s -> String    %hu -> unsigned short
***********************************************************************/
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("Meu nome é %s, e eu tenho %i anos\n", "Kenny", 20);
    printf("O cliente %s pagou sua conta no valor de R$%f no estabelecimento %s\n", "João", 1500.0, "Mercadinho do Zé");
    printf("O cliente %s pagou sua conta no valor de R$%.2f no estabelecimento %s ", "Joaquim", 2300.0, "Bar do Domingo"); //exemplo com limite de casas decimais

}

