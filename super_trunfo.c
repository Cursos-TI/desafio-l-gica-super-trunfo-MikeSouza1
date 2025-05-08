#include <stdio.h>

int main()
{
    /*CRIANDO AS CARTAS*/

    /*Definindo as variáveis que serão utilizadas ao longo do programa*/
    char nome_cidade1[50], nome_cidade2[50], estado1[50], estado2[50], codigo_carta1, codigo_carta2; // Os valores entre colchetes representam o número máximo de caractéres que podem ser inseridos.
    int pontos_turisticos1, pontos_turisticos2, populacao1, populacao2;
    float area1, area2, pib1, pib2;

    /*Solicitação de dados ao usuário para que ele possa criar sua própria carta*/
    printf("CARTA NUMERO 1: \n");
    printf("Entre com o nome do estado: \n"); // Input com Prinf
    scanf("%49s", estado1);                   // Captura dos dados com scanf

    printf("Entre com o código do estado: \n");
    scanf("%s", &codigo_carta1);

    printf("Entre com a cidade: \n");
    scanf("%49s", nome_cidade1);

    printf("Entre com a população do estado: \n");
    scanf("%d", &populacao1);

    printf("Entre com o o número de pontos turísticos do estado: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Entre com a área do estado: \n");
    scanf("%f", &area1);

    printf("Entre com o PIB do estado: \n");
    scanf("%f", &pib1);
    printf("\n");                     // Pula uma linha para melhorar a visualização.
    printf("CARTA 1 FINALIZADA! \n"); // Mensagem de finalização da carta 1 para o usuário.
    printf("\n");
    printf("CARTA NÚMERO 2: \n"); // Refazendo o processo, agora para a segunda carta.
    printf("Entre com o nome do estado: \n");
    scanf("%49s", estado2);

    printf("Entre com o código do estado: \n");
    scanf("%s", &codigo_carta2);

    printf("Entre com a cidade: \n");
    scanf("%49s", nome_cidade2);

    printf("Entre com a população do estado: \n");
    scanf("%d", &populacao2);

    printf("Entre com o o número de pontos turísticos do estado: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Entre com a área do estado: \n");
    scanf("%f", &area2);

    printf("Entre com o PIB do estado: \n");
    scanf("%f", &pib2);
    printf("CARTA 2 FINALIZADA! \n");

    /*INICIANDO COMPARAÇÕES*/

    float densidade1 = populacao1 / area1;   // Cálculo da densidade populacional do estado 1.
    float densidade2 = populacao2 / area2;   // Cálculo da densidade populacional do estado 2.
    float pibPerCapita1 = pib1 / populacao1; // Cálculo do PIB per capita do estado 1.
    float pibPerCapita2 = pib2 / populacao2; // Cálculo do PIB per capita do estado 2.

    /*Exibindo as densidades e PIB per capita das cartas 1 e 2 ao usuário*/
    printf("Densidade %s: %f\n", estado1, densidade1);
    printf("Densidade %s: %f\n", estado2, densidade2);
    printf("PIB per capita %s: %f\n", estado1, pibPerCapita1);
    printf("PIB per capita %s: %f\n", estado2, pibPerCapita2);

    /*Comparando as cartas 1 e 2 com base no atributo "Área", explicitando ao usuário o resultado*/
    if (area1 > area2)
    {
        printf("Comparação de cartas (Atributo: Área): \nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", estado1, area1, estado2, area2);
        printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
    }
    else
    {
        printf("Comparação de cartas (Atributo: Área): \nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", estado1, area1, estado2, area2);
        printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
    }

    return 0;
}
