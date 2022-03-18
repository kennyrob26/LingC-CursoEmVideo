
#include<stdio.h>

void main(){
    char *nome = "Joao";
    char sobrenome[] = "Dos Cactos";
    int idade = 57;
    float altura = 1.81;
    float peso = 95;

    printf("O Senhor(a) %s %s, tem %.2f cm de altura, pesa: %.2f KG, e tem %d anos de idade. \n", nome, sobrenome, altura, peso, idade);

}
