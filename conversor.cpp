#include "conversor.h"
#include<stdio.h>
#include<ctype.h>
#include<cmath>
#include<string.h>

int Logaritmo_Discreto(int numero, int base){
    int resultado = 0;
    while(numero >= base){
        numero = numero/base;
        resultado++;
    }
    return resultado;
}

int Inverter(int numero){
    int tamanho_do_vetor = Logaritmo_Discreto(numero,10);
    int vetor[tamanho_do_vetor],i = tamanho_do_vetor;
    int invertido = 0;
    while(numero >= 10){
        vetor[i] = numero%10;
        numero = numero/10;
        i--;
    }
    vetor[0] = numero;
    for(i = 0; i <= tamanho_do_vetor; i++){
        invertido = invertido + (vetor[i] * pow(10,i));
    }
    return invertido;
}

int Fatorial(int numero){
    int i,f = 1;
    for(i = 1; i <= numero; i++){
        f = f * i;
    }
    return f;
}
