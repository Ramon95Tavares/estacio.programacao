#include <stdio.h>

int main(){

    char estado1, estado2;
    char cidade1[50], cidade2[50];
    int cod_carta1, cod_carta2;
    unsigned long int pop1, pop2;
    int tur1, tur2;
    float area1, area2;
    float pib1, pib2;
    float ppc1, ppc2;
    float dens1, dens2;
    float superpoder1, superpoder2;
    
    printf("Olá! Iremos criar duas cartas para o jogo Super Trunfo\n");
    printf("Para começar, iremos inserir os dados da primeira cidade. Siga as instruções abaixo.\n\n");

    //Coleta dados da carta 1
    printf("Insira uma letra de A a H referente ao Estado: ");
    scanf(" %c", &estado1);
    printf("Insira um código de carta de 01 a 04: ");
    scanf("%d", &cod_carta1);
    printf("Insira o nome da cidade. Atenção: se necessário, separe as palavras usando hifens: ");
    scanf("%s", cidade1);
    printf("Insira a população da cidade: ");
    scanf("%u", &pop1);
    printf("Insira a área da cidade (em km^2): ");
    scanf("%f", &area1);
    printf("Insira o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &tur1);

    ppc1 = (float) (pib1 * 1000000000) / pop1;
    dens1 = pop1 / area1;

    printf("\n\n");
    printf("Agora inseriremos dados da segunda carta.\n\n");

    //Coleta dados da carta 2
    printf("Insira uma letra de A a H referente ao Estado: ");
    scanf(" %c", &estado2);
    printf("Insira um código de carta de 01 a 04: ");
    scanf("%d", &cod_carta2);
    printf("Insira o nome da cidade. Atenção: se necessário, separe as palavras usando hifens: ");
    scanf("%s", cidade2);
    printf("Insira a população da cidade: ");
    scanf("%u", &pop2);
    printf("Insira a área da cidade (em km^2): ");
    scanf("%f", &area2);
    printf("Insira o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &tur2);

    ppc2 = (float) (pib2 * 1000000000)/ pop2;
    dens2 = pop2 / area2;

    //cálculo do Super Poder
    superpoder1 = (float )pop1 + area1 + pib1 + tur1 + ppc1 + (1/dens1);
    superpoder2 = (float )pop2 + area2 + pib2 + tur2 + ppc2 + (1/dens2);

    printf("\nJá temos nossas primeiras cartas!\n\n");

    //Exibe dados da carta 1
    printf("Carta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c-%d\n", estado1, cod_carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", pop1);
    printf("Área: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", tur1);
    printf("Densidade populacional: %.2f hab/km\n", dens1);
    printf("PIB per capita: %.2f reais\n\n", ppc1);

    //Exibe dados da carta 2
    printf("Carta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c-%d\n", estado2, cod_carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", pop2);
    printf("Área: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", tur2);
    printf("Densidade populacional: %.2f hab/km\n", dens2);
    printf("PIB per capita: %.2f reais\n\n", ppc2);

    printf("Resultado da batalha:\n\n");

    // População
    printf("População: Carta 1 venceu (%d)\n", pop1 > pop2);
    
    // Área
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

    // PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    // Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", tur1 > tur2);

    // Densidade Populacional (MENOR valor vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", dens1 < dens2);

    // PIB per capita
    printf("PIB per capita: Carta 1 venceu (%d)\n", ppc1 > ppc2);

    // Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;

}
