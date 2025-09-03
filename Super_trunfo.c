#include <stdio.h>

int main()
{

    int populacao, numerodepontosturisticos;
    float areaemkm², pib;
    char estado, codigodacarta[20], nomedacidade[50], carta;

    printf("digite a carta: \n");
    scanf(" %c", &carta);   

    printf("digite o estado: \n");
    scanf(" %c", &estado);

    printf("digite o codigo da carta: \n");
    scanf("%s", &codigodacarta);

    printf("digite o nome da cidade: \n");
    scanf(" %[^\n]", nomedacidade);

    printf("digite a populacao: \n");
    scanf("%d", &populacao);

    printf("digite a area em km²: \n");
    scanf("%f", &areaemkm²);

    printf("digite o pib: \n");
    scanf("%f", &pib);

    printf("digite o numero de pontos turistico: \n");
    scanf("%d", &numerodepontosturisticos);

    printf("Carta: %c\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("Área em km²: %.2f\n", areaemkm²);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos);
    return 0;
}
