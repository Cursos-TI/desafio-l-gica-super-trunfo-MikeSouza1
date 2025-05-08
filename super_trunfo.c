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

    /**Exibindo as densidades e PIB per capita das cartas 1 e 2 ao usuário
    printf("Densidade %s: %f\n", estado1, densidade1);
    printf("Densidade %s: %f\n", estado2, densidade2);
    printf("PIB per capita %s: %f\n", estado1, pibPerCapita1);
    printf("PIB per capita %s: %f\n", estado2, pibPerCapita2);**/

    /*CRIANDO MENU INTERATIVO*/

    int opcao_atributo1, opcao_atributo2;

    printf("Escolha o primeiro atributo para comparação: \n");
    printf("1 - Área\n");
    printf("2 - População\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB per capita\n");
    printf("6 - Pontos Turísticos\n");
    scanf("%d", &opcao_atributo1); // Captura a primeira opção escolhida pelo usuário.

    printf("Escolha o segundo atributo para comparação: \n");
    switch (opcao_atributo1)
    {
    case 1:
        printf("2 - População\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional\n");
        printf("5 - PIB per capita\n");
        printf("6 - Pontos Turísticos\n");
        break;
    case 2:
        printf("1 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional\n");
        printf("5 - PIB per capita\n");
        printf("6 - Pontos Turísticos\n");
        break;
    case 3:
        printf("1 - Área\n");
        printf("2 - População\n");
        printf("4 - Densidade Populacional\n");
        printf("5 - PIB per capita\n");
        printf("6 - Pontos Turísticos\n");
        break;
    case 4:
        printf("1 - Área\n");
        printf("2 - População\n");
        printf("3 - PIB\n");
        printf("5 - PIB per capita\n");
        printf("6 - Pontos Turísticos\n");
        break;
    case 5:
        printf("1 - Área\n");
        printf("2 - População\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional\n");
        printf("6 - Pontos Turísticos\n");
        break;
    case 6:
        printf("1 - Área\n");
        printf("2 - População\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional\n");
        printf("5 - PIB per capita\n");
        break;
    default:
        printf("Opção inválida! Reinicie o programa.\n");
        return 1; // Encerra o programa em caso de entrada inválida.
    }

    scanf("%d", &opcao_atributo2); // Captura a segunda opção escolhida pelo usuário.
    if (opcao_atributo2 == opcao_atributo1)
    {
        printf("Você escolheu o mesmo atributo duas vezes! Reinicie o programa.\n");
        return 1; // Encerra o programa em caso de repetição de atributos.
    }

    switch (opcao_atributo1)
    {
    case 1:
        /*Comparando as cartas 1 e 2 com base no atributo "Área" usando operador ternário*/
        printf("Comparação de cartas (Atributo: Área): \nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", estado1, area1, estado2, area2);
        printf("Resultado: Carta %d (%s) venceu!\n", (area1 > area2 ? 1 : 2), (area1 > area2 ? estado1 : estado2));
        break;
    case 2:
        /*Comparando as cartas 1 e 2 com base no atributo "População" usando operador ternário*/
        printf("Comparação de cartas (Atributo: População): \nCarta 1 - %s: %d\nCarta 2 - %s: %d\n", estado1, populacao1, estado2, populacao2);
        printf("Resultado: Carta %d (%s) venceu!\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2 ? estado1 : estado2));
        break;
    case 3:
        /*Comparando as cartas 1 e 2 com base no atributo "PIB" usando operador ternário*/
        printf("Comparação de cartas (Atributo: PIB): \nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", estado1, pib1, estado2, pib2);
        printf("Resultado: Carta %d (%s) venceu!\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2 ? estado1 : estado2));
        break;
    case 4:
        /*Comparando as cartas 1 e 2 com base no atributo "Densidade Populacional" usando operador ternário*/
        printf("Comparação de cartas (Atributo: Densidade Populacional): \nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", estado1, densidade1, estado2, densidade2);
        printf("Resultado: Carta %d (%s) venceu!\n", (densidade1 > densidade2 ? 1 : 2), (densidade1 > densidade2 ? estado1 : estado2));
        break;
    case 5:
        /*Comparando as cartas 1 e 2 com base no atributo "PIB per capita" usando operador ternário*/
        printf("Comparação de cartas (Atributo: PIB per capita): \nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", estado1, pibPerCapita1, estado2, pibPerCapita2);
        printf("Resultado: Carta %d (%s) venceu!\n", (pibPerCapita1 > pibPerCapita2 ? 1 : 2), (pibPerCapita1 > pibPerCapita2 ? estado1 : estado2));
        break;
    case 6:
        /*Comparando as cartas 1 e 2 com base no atributo "Pontos Turísticos" usando operador ternário*/
        printf("Comparação de cartas (Atributo: Pontos Turísticos): \nCarta 1 - %s: %d\nCarta 2 - %s: %d\n", estado1, pontos_turisticos1, estado2, pontos_turisticos2);
        printf("Resultado: Carta %d (%s) venceu!\n", (pontos_turisticos1 > pontos_turisticos2 ? 1 : 2), (pontos_turisticos1 > pontos_turisticos2 ? estado1 : estado2));
        break;
    default:
        printf("Opção inválida! Tente novamente.\n"); // Mensagem de erro caso o usuário insira uma opção inválida.
        break;
    }

    switch (opcao_atributo2)
    {
    case 1:
        /*Comparando as cartas 1 e 2 com base no atributo "Área" usando operador ternário*/
        printf("Comparação de cartas (Atributo: Área): \nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", estado1, area1, estado2, area2);
        printf("Resultado: Carta %d (%s) venceu!\n", (area1 > area2 ? 1 : 2), (area1 > area2 ? estado1 : estado2));
        break;
    case 2:
        /*Comparando as cartas 1 e 2 com base no atributo "População" usando operador ternário*/
        printf("Comparação de cartas (Atributo: População): \nCarta 1 - %s: %d\nCarta 2 - %s: %d\n", estado1, populacao1, estado2, populacao2);
        printf("Resultado: Carta %d (%s) venceu!\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2 ? estado1 : estado2));
        break;
    case 3:
        /*Comparando as cartas 1 e 2 com base no atributo "PIB" usando operador ternário*/
        printf("Comparação de cartas (Atributo: PIB): \nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", estado1, pib1, estado2, pib2);
        printf("Resultado: Carta %d (%s) venceu!\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2 ? estado1 : estado2));
        break;
    case 4:
        /*Comparando as cartas 1 e 2 com base no atributo "Densidade Populacional" usando operador ternário*/
        printf("Comparação de cartas (Atributo: Densidade Populacional): \nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", estado1, densidade1, estado2, densidade2);
        printf("Resultado: Carta %d (%s) venceu!\n", (densidade1 > densidade2 ? 1 : 2), (densidade1 > densidade2 ? estado1 : estado2));
        break;
    case 5:
        /*Comparando as cartas 1 e 2 com base no atributo "PIB per capita" usando operador ternário*/
        printf("Comparação de cartas (Atributo: PIB per capita): \nCarta 1 - %s: %f\nCarta 2 - %s: %f\n", estado1, pibPerCapita1, estado2, pibPerCapita2);
        printf("Resultado: Carta %d (%s) venceu!\n", (pibPerCapita1 > pibPerCapita2 ? 1 : 2), (pibPerCapita1 > pibPerCapita2 ? estado1 : estado2));
        break;
    case 6:
        /*Comparando as cartas 1 e 2 com base no atributo "Pontos Turísticos" usando operador ternário*/
        printf("Comparação de cartas (Atributo: Pontos Turísticos): \nCarta 1 - %s: %d\nCarta 2 - %s: %d\n", estado1, pontos_turisticos1, estado2, pontos_turisticos2);
        printf("Resultado: Carta %d (%s) venceu!\n", (pontos_turisticos1 > pontos_turisticos2 ? 1 : 2), (pontos_turisticos1 > pontos_turisticos2 ? estado1 : estado2));
        break;
    default:
        printf("Opção inválida! Tente novamente.\n"); // Mensagem de erro caso o usuário insira uma opção inválida.
        break;
    }
    return 0;
}
