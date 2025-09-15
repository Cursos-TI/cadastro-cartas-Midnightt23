#include <stdio.h>

int main (){

    //declaracao das variaveis referente as cartas
    
    char estado1[1], estado2[2];
    char codigo_da_carta1[2], codigo_da_carta2 [2];
    char nome_da_cidade1[25], nome_da_cidade2 [25];
    int populacao1, populacao2;
    float area_em_km1, area_em_km2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;


    //entrada de dados da primeira carta

    printf ("***Digite os dados da primeira carta***\n");

    printf ("Digite o estado \n");
    scanf ("%s", &estado1);

    printf ("Digite o codigo da carta \n");
    scanf ("%s", &codigo_da_carta1);

    printf ("Digite o nome da cidade \n");
    scanf ("%s", &nome_da_cidade1);

    printf ("Digite a populacao \n");
    scanf ("%d", &populacao1);

    printf ("Digite a area em km \n");
    scanf ("%f", &area_em_km1);

    printf ("Digito o PIB \n");
    scanf ("%f", &pib1);

    printf ("Digite o numero de pontos turisticos \n");
    scanf ("%d", &pontos_turisticos1);


    //entrada de dados da segunda carta

    printf ("***Digite os dados da segunda carta***\n");

    printf ("Digite o estado \n");
    scanf ("%s", &estado2);

    printf ("Digite o codigo da carta \n");
    scanf ("%s", &codigo_da_carta2);

    printf ("Digite o nome da cidade \n");
    scanf ("%s", &nome_da_cidade2);

    printf ("Digite a populacao \n");
    scanf ("%d", &populacao2);

    printf ("Digite a area em km \n");
    scanf ("%f", &area_em_km2);

    printf ("Digito o PIB \n");
    scanf ("%f", &pib2);

    printf ("Digite o numero de pontos turisticos \n");
    scanf ("%d", &pontos_turisticos2);

    //Saida de dados digitados pelo usuario (carta1)

    printf ("***Carta1***\n");
    printf ("estado: %s \n", estado1);
    printf ("codigo_da_carta: %s \n", codigo_da_carta1);
    printf ("cidade: %s \n", nome_da_cidade1);
    printf ("populacao: %d \n", populacao1);
    printf ("area_em_km: %.2f \n", area_em_km1);
    printf ("pib: %.2f \n", pib1);
    printf ("pontos_turisticos: %d \n", pontos_turisticos1);

    //Saida de dados digitados pelo usuario (carta2)

    printf ("***Carta2***\n");
    printf ("estado: %s \n", estado2);
    printf ("codigo_da_carta: %s \n", codigo_da_carta2);
    printf ("cidade: %s \n", nome_da_cidade2);
    printf ("populacao: %d \n", populacao2);
    printf ("area_em_km: %.2f \n", area_em_km2);
    printf ("pib: %.2f \n", pib2);
    printf ("pontos_turisticos: %d \n", pontos_turisticos2);

    return 0;

}
