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
    printf("\nCódigo (1-4): ");
    scanf("%d", codigo1);
    getchar();
    printf("\nNome da Cidade:");
    fgets(cidade1, 20, stdin);
    printf("\nQuantidade de Habitantes: ");
    scanf("%d", &populacao1);
    printf("\nÁrea (km²): ");
    scanf("%f", &pib1);
    printf("\nPIB: R$ ");
    scanf("%f", pib1);
    printf("\nQuantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico1);

    float dpop1 = populacao1/area1;
    float pibpercap1 = pib1/populacao1;

    printf("\nAgora digite as informações da segunda carta:\n");

    printf("\nEstado (letra A-H): ");
    scanf(" %c", &estado2);
    printf("\nCódigo (1-4): ");
    scanf("%d", codigo2);
    getchar();
    printf("\nNome da Cidade:");
    fgets(cidade2, 20, stdin);
    printf("\nQuantidade de Habitantes: ");
    scanf("%d", &populacao2);
    printf("\nÁrea (km²): ");
    scanf("%f", &pib2);
    printf("\nPIB: R$ ");
    scanf("%f", pib2);
    printf("\nQuantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico2);

    float dpop2 = populacao2/area2;
    float pibpercap2 = pib2/populacao2;

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
    "[2] PIB\n"
    "[3] Quantidade de Pontos Turísticos\n"
    "[4] Densidade Populacional\n"
    "[5] PIB per capita\n");
    scanf("%d", &resp);

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    char vencedorop1[100];
    char vencedorop2[100];
    char vencedorop3[100];
    char vencedorop4[100];
    char vencedorop5[100];

    switch (resp) {
        case 1: 
        printf("\nCarta 1: %d\n", populacao1);
        printf("Carta 2: %d\n", populacao2);
        vencedorop1 = (populacao1 > populacao2) ? "A Carta 1 venceu! Ela possui maior número de habitantes." : "A Carta 2 venceu! Ela possui o maior número de habitantes";
        printf("Resultado: %s", vencedorop1);
        break;
        case 2:
        printf("\nCarta 1: %0.2f\n", area1);
        printf("Carta 2: %0.2f\n", area2);
        vencedorop2 = (area1 > area2) ? "A Carta 1 venceu! Ela possui a maior área." : "A Carta 2 venceu! Ela possui a maior área.";
        printf("Resultado: %s", vencedorop2);
        break;
        case 3:
        printf("\nCarta 1: %0.2f\n", area1);
        printf("Carta 2: %0.2f\n", area2);
        vencedorop3 = (area1 > area2) ? "A Carta 1 venceu! Ela possui a maior área." : "A Carta 2 venceu! Ela possui a maior área.";
        printf("Resultado: %s", vencedorop3);
        break;
        case 4:
        printf("\nCarta 1: %0.2f\n", dpop1);
        printf("Carta 2: %0.2f\n", dpop2);
        vencedorop4 = (dpop1 < dpop2) ? "A Carta 1 venceu! Ela possui a menor densidade populacional." : "A Carta 2 venceu! Ela possui menor densidade populacional.";
        printf("Resultado: %s", vencedorop4);
        break;
        case 5:
        printf("\nCarta 1: %0.2f\n", pibpercap1);
        printf("Carta 2: %0.2f\n", pibpercap2);
        vencedorop5 = (pibpercap1 > pibpercap2) ? "A Carta 1 venceu! Ela possui maior PIB per capita." : "A Carta 2 venceu! Ela possui maior PIB per capita.";
        printf("Resultado: %s", vencedorop5);
        break;
        default:
        printf("Operação invalida.");
        break;
    }

    return 0;
}
