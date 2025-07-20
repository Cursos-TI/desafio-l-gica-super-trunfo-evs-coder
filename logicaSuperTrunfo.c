#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    //iniciar programa

    printf("\nWELCOME TO SUPER TRUNFO!\n");
    
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    //informacoes da carta1:

    char estado1;
    int codigo1;
    char cidade1[10];
    int populacao1;
    float area1;
    float pib1;
    int pturisticos1;

    //informacoes da carta2:

    char estado2;
    int codigo2;
    char cidade2[10];
    int populacao2;
    float area2;
    float pib2;
    int pturisticos2;
    
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    //inserir informações da carta1

    printf("\nInsira as informacoes da primeira carta:\n");
    printf("\nEstado (letra de A-H): ");
    scanf (" %c", &estado1);
    printf("Codigo (1-4): ");
    scanf("%d", &codigo1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("Numero de habitantes: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pturisticos1);

    //inserir informações da carta2

    printf("\nInsira as informacoes da segunda carta:\n");
    printf("\nEstado (letra de A-H): ");
    scanf (" %c", &estado2);
    printf("Codigo (1-4): ");
    scanf("%d", &codigo2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("Numero de habitantes: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pturisticos2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
