#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1, estado2;
    int codigo1, codigo2;
    char cidade1[20], cidade2 [20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pturistico1, pturistico2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("\nBem-vindo ao SuperTrunfo!\n");
    printf("Para começar, digite as informações da primeira carta.\n");

    printf("\nEstado (letra A-H): ");
    scanf(" %c", &estado1);
    printf("Código (1-4): ");
    scanf("%d", &codigo1);
    getchar();
    printf("Nome da Cidade: ");
    fgets(cidade1, 20, stdin);
    printf("Quantidade de Habitantes: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: R$ ");
    scanf("%f", &pib1);
    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico1);

    float dpop1 = (float)populacao1/area1;
    float pibpercap1 = pib1/(float)populacao1;

    printf("\nAgora digite as informações da segunda carta:\n");

    printf("\nEstado (letra A-H): ");
    scanf(" %c", &estado2);
    printf("Código (1-4): ");
    scanf("%d", &codigo2);
    getchar();
    printf("Nome da Cidade: ");
    fgets(cidade2, 20, stdin);
    printf("Quantidade de Habitantes: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: R$ ");
    scanf("%f", &pib2);
    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico2);

    float dpop2 = (float)populacao2/area2;
    float pibpercap2 = pib2/(float)populacao2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    int resp;

    printf("\nAgora escolha o atributo das cartas a ser comparado:\n");
    printf("[1] Quantidade de Habitantes\n"
    "[2] Área\n"
    "[3] PIB\n"
    "[4] Quantidade de Pontos Turísticos\n"
    "[5] Densidade Populacional\n"
    "[6] PIB per capita\n");
    scanf("%d", &resp);

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    switch (resp) {
        case 1: 
        printf("\nCarta 1: %d\n", populacao1);
        printf("Carta 2: %d\n", populacao2);
        if (populacao1 > populacao2){
            printf("A Carta 1 venceu! Ela possui maior número de habitantes.\n");
        } else if (populacao2 > populacao1){
            printf("A Carta 2 venceu! Ela possui maior número de habitantes.\n");
        } else {
            printf("Empate! Não houve vencedor para este atributo.\n");
        };
        break;
        case 2:
        printf("\nCarta 1: %0.2f\n", area1);
        printf("Carta 2: %0.2f\n", area2);
        if (area1 > area2){
            printf("A Carta 1 venceu! Ela possui a maior área.\n");
        } else if (area2 > area1) {
            printf("A Carta 2 venceu! Ela possui a maior área.\n");
        } else {
            printf("Empate! Não houve vencedor para este atributo.\n");
        };
        break;
        case 3:
        printf("\nCarta 1: %0.2f\n", pib1);
        printf("Carta 2: %0.2f\n", pib2);
        if (pib1 > pib2){
            printf("A Carta 1 venceu! Ela possui o maior PIB.\n");
        } else if (pib2 > pib1) {
            printf("A Carta 2 venceu! Ela possui o maior PIB.\n");
        } else {
            printf("Empate! Não houve vencedor para este atributo.");
        };
        break;
        case 4:
        printf("\nCarta 1: %d\n", pturistico1);
        printf("Carta 2: %d\n", pturistico2);
        if (pturistico1 > pturistico2){
            printf("A Carta 1 venceu! Ela possui mais pontos turísticos.\n");
        } else if (pturistico2 > pturistico1) {
            printf("A Carta 2 venceu! Ela possui mais pontos turísticos.\n");
        } else {
            printf("Empate! Não houve vencedor para este atributo.\n");
        };
        break;
        case 5:
        printf("\nCarta 1: %0.2f\n", dpop1);
        printf("Carta 2: %0.2f\n", dpop2);
        if (dpop1 < dpop2){
            printf("A Carta 1 venceu! Ela possui menor densidade demográfica.\n");
        } else if (dpop2 < dpop1) {
            printf("A Carta 2 venceu! Ela possui menor densidade demográfica.\n");
        } else {
            printf("Empate! Não houve vencedor para este atributo.\n");
        };
        break;
        case 6:
        printf("\nCarta 1: %0.2f\n", pibpercap1);
        printf("Carta 2: %0.2f\n", pibpercap2);
        if (pibpercap1 > pibpercap2){
            printf("A Carta 1 venceu! Ela possui o maior PIB per capita.\n");
        } else if (pibpercap2 > pibpercap1){
            printf("A Carta 2 venceu! Ela possui o maior PIB per capita.\n");
        } else {
            printf("Empate! Não houve vencedor para este atributo.\n");
        };
        break;
        default:
        printf("Operação inválida.\n");
        break;
    }
    
    return 0;
}