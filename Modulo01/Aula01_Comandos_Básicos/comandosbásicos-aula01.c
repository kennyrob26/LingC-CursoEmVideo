#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("oi,\ntudo \nbem?\n");
    printf("teste\ttabulacao\tteste \n");
    printf("teste\b backspace\n");
    printf("teste\rretorno\n");
    printf("teste \\ barra\n");
    printf("teste \" aspas\n");
    printf("teste \? interrogacao\n");
    printf("teste \a beep\n");
    printf("teste %% porcentagem\n");

    printf("c é \n\"SUPER\" \nFácil!");
}
