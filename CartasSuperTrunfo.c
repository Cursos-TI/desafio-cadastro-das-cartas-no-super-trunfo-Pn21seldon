#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int nPontosTuristicos;
    double populacao, pib, area;
    char nome[20], codigocidade[20];
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Cadastro de carta \n");

    printf("Digite o codigo da cidade: \n");
    scanf("%s", codigocidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite a quantidade populacional: \n");
    scanf("%lf", &populacao);

    printf("Digite a área em KM²: \n");
    scanf(" %lf", &area);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &nPontosTuristicos);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("--------------------------\n");
    printf("Codigo: %s\n", codigocidade);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %.2lf\n", populacao);
    printf("Área: %.2lf KM²\n", area);
    printf("PIB: %.2lf\n", pib);
    printf("N. Pontos Turísticos: %d\n", nPontosTuristicos);

    return 0;
}
