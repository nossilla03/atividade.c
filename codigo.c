#include <stdio.h>

int main() {
    int idade[10];
    int autorizacao;
    
    int c;
    
    int liberados = 0;
    int negados = 0;
    
    int maiorIdade = 0;
    
    int soma = 0;
    float media;
    
    for(c = 0; c < 10; c++){
        printf("\nDigite a Idade %d: ", c + 1);
        scanf("%d", &idade[c]);
        printf("Possui Autorização? [1/0]: ");
        scanf("%d", &autorizacao);
        if(idade[c] >= 17 && autorizacao == 1){
            printf("ENTRADA LIBERADA!\n");
            liberados++;
        }
        else{
            printf("ENTRADA NEGADA!\n");
            negados++;
        }
        if(idade[c] > maiorIdade){
            maiorIdade = idade[c];
        }
        else{
            
        }
        soma = soma + idade[c];
    }
        media = soma / 10;
    printf("\nEntradas Liberadas: %d", liberados);
    printf("\nEntradas Negadas: %d", negados);
    printf("\nMaior Idade Registrada: %d", maiorIdade);
    printf("\nA Média das Idadades Registradas foi de: %.2f", media);
    
    return 0;
}
