#include <stdio.h>

int main(){
    char estado;                        // dados da carta 1
    char codigodacarta [20];
    char nomedacidade [20];
    int população;
    float área;
    float pib;
    int numerosdept;      // numerosdept = numeros de ponto turísticos
    
    
    char estado2;                     // dados da carta 2
    char codigodacarta2 [20];
    char nomedacidade2 [20];
    int população2;
    float área2;
    float pib2;
    int numerosdept2;      

    // Carta 1 
    printf("Carta 1: \n");

    printf("Estado: \n");
    scanf("%c", &estado);

    printf("Codigo da carta: \n");
    scanf("%s", &codigodacarta);

    printf("Nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite a área: \n");
    scanf("%f", &área);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerosdept);

    printf("\n");

    // Carta 2
    printf("Carta 2: \n");

    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Codigo da carta: \n");
    scanf("%s", &codigodacarta2);

    printf("Nome da cidade: \n");
    scanf("%s", &nomedacidade2);

    printf("Digite a população: \n");
    scanf("%d", &população2);

    printf("Digite a área: \n");
    scanf("%f", &área2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerosdept2);

    // Saída de dados da carta 1

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código da carta: %s \n", codigodacarta);
    printf("Nome da cidade: %s \n", nomedacidade);
    printf("População: %d habitantes\n", população);
    printf("Área: %.2f km² \n", área);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turiríticos: %d \n", numerosdept);

    printf("\n");     
    
    // Saída de dados da carta 2

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código da carta: %s \n", codigodacarta2);
    printf("Nome da cidade: %s \n", nomedacidade2);
    printf("População: %d habitantes\n", população2);
    printf("Área: %.2f km² \n", área2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turiríticos: %d \n", numerosdept2);


    return 0;



}