#include <stdio.h>

int main(){

    int valores[]= {13,8,23,95,47,14,10,45,165};
    int soma = 0;

        for (int i = 0 ; i < 9 ; i++){
            soma += valores[i];
        }
        printf("A soma dos elementos no array é %d\n", soma);
        return 0;
}