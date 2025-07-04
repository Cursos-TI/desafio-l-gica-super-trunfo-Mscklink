#include <stdio.h>

    
    int main() {

    // Váriavies Carta 1
        
        int populacao1;
        int numero_de_pontos_turisticos1;
        float area_em_km_1, media3;
        float pib1;
        float pib_per_capita1, media1;
        float densidadepopulacional1;
        char nome_da_cidade1[50]; 
        char codigo_da_carta1[4]; //Ex: A01 (3 chars + null terminator)
        char estado1[3]; // 2 chars + null terminator

    // Váriaveis Carta 2
        
        int populacao2;
        int numero_de_pontos_turisticos2;
        float area_em_km_2, media4;
        float pib2;
        float pib_per_capita2, media2;
        float densidadepopulacional2;
        char nome_da_cidade2[50];
        char codigo_da_carta2[4]; // Ex: B02 (3 chars + null terminator)
        char estado2[3]; // 2 chars + null terminator

        printf("=== Cadastro de Carta 1 ===\n");

        printf("Carta 1:\n");
        
        printf("Digite o nome da cidade 1: ");
        scanf(" %[^\n]", nome_da_cidade1);

        printf("Digite o código da carta 1: (ex: A01): ");
        scanf(" %s" , codigo_da_carta1);

        printf("Digite o estado da carta 1: (ex: A) ");
        scanf(" %s", estado1);

        printf("Digite a população da cidade 1: ");
        scanf(" %d", &populacao1);

        printf("Digite o numero de pontos turísticos da cidade 1: ");
        scanf(" %d", &numero_de_pontos_turisticos1);

        printf("Digite a área em km² da cidade 1: ");
        scanf(" %f", &area_em_km_1);

        printf("Digite o PIB da cidade 1: ");
        scanf(" %f", &pib1);



        printf("\n=== Cadastro de Cidade 2 ===\n");

        printf("Carta 2:\n");

        printf("Digite o nome da cidade 2: ");
        scanf(" %[^\n]", nome_da_cidade2);

        printf("Digite o código da carta 2 (ex: B02): ");
        scanf(" %s", codigo_da_carta2);

        printf("Digite o estado da carta 2 (ex: B): ");
        scanf(" %s", estado2);

        printf("Digite a população da cidade 2: ");
        scanf(" %d", &populacao2);

        printf("Digite o numero de pontos turísticos da cidade 2: ");
        scanf(" %d", &numero_de_pontos_turisticos2);

        printf("Digite a área em km² da cidade 2: ");
        scanf(" %f", &area_em_km_2);

        printf("Digite o PIB da cidade 2: ");
        scanf(" %f", &pib2);

        // Cálculo do PIB per capita e densidade populacional
        media1 = (pib1 * 1e9) /  populacao1; 
        media3 =  populacao1 / area_em_km_1;
        media2 =  (pib2 * 1e9) / populacao2; 
        media4 =  populacao2 / area_em_km_2;

    // imprimir os dados das cartas

    printf("\n Carta 1:\n");

    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("Codigo da carta: %s\n", codigo_da_carta1);
    printf("Estado: %s\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Número de pontos turisticos: %d\n", numero_de_pontos_turisticos1);
    printf("Área em km: %.2f km²\n", area_em_km_1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Densidade populacional: %.2f habitantes por km²\n", media3);
    printf("PIB per capita: %.2f Reais\n", media1);
    
    printf("\n");

    //imprimir os dados da carta 2
    
    printf("\n Carta 2:\n");

    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("Código da carta: %s\n", codigo_da_carta2);
    printf("Estado: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Número de pontos turisticos: %d\n", numero_de_pontos_turisticos2);
    printf("Área em km²: %.2f km²\n", area_em_km_2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Densidade populacional: %.2f habitantes por km²\n", media4);
    printf("PIB per capita: %.2f Reais\n", media2);

// Abaixo segue a comparação das cartas (logica do super trunfo)

    printf("\n=== Comparação de Cartas ===\n");
    printf("Carta 1 - %s: R$ %.2f\n", estado1, pib1);
    printf("Carta 2 - %s: R$ %.2f\n", estado2, pib2);

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
