#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Cidade;

void calcularPropriedades(Cidade *cidade) {
    cidade->densidade_populacional = cidade->populacao / cidade->area;
    cidade->pib_per_capita = cidade->pib / cidade->populacao;
    cidade->super_poder = cidade->populacao + cidade->area + cidade->pib + cidade->pontos_turisticos + cidade->densidade_populacional + cidade->pib_per_capita;
}

void cadastrarCidade(Cidade *cidade) {
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", cidade->codigo);
    printf("Digite a população da cidade: ");
    scanf("%d", &cidade->populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &cidade->area);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &cidade->pib);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &cidade->pontos_turisticos);

    calcularPropriedades(cidade);
}

void exibirCidade(Cidade cidade) {
    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %s\n", cidade.codigo);
    printf("População: %d\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f bilhões\n", cidade.pib);
    printf("Pontos Turísticos: %d\n", cidade.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", cidade.densidade_populacional);
    printf("PIB per Capita: %.2f bilhões/hab\n", cidade.pib_per_capita);
    printf("Super Poder: %.2f\n", cidade.super_poder);
}

void compararCartas(Cidade cidade1, Cidade cidade2) {
    printf("\n--- Comparação das Cartas ---\n");

    printf("Comparando Densidade Populacional: ");
    if (cidade1.densidade_populacional < cidade2.densidade_populacional) {
        printf("Cidade %s vence\n", cidade1.codigo);
    } else {
        printf("Cidade %s vence\n", cidade2.codigo);
    }

    printf("Comparando População: ");
    if (cidade1.populacao > cidade2.populacao) {
        printf("Cidade %s vence\n", cidade1.codigo);
    } else {
        printf("Cidade %s vence\n", cidade2.codigo);
    }

    printf("Comparando Área: ");
    if (cidade1.area > cidade2.area) {
        printf("Cidade %s vence\n", cidade1.codigo);
    } else {
        printf("Cidade %s vence\n", cidade2.codigo);
    }

    printf("Comparando PIB: ");
    if (cidade1.pib > cidade2.pib) {
        printf("Cidade %s vence\n", cidade1.codigo);
    } else {
        printf("Cidade %s vence\n", cidade2.codigo);
    }

    printf("Comparando Pontos Turísticos: ");
    if (cidade1.pontos_turisticos > cidade2.pontos_turisticos) {
        printf("Cidade %s vence\n", cidade1.codigo);
    } else {
        printf("Cidade %s vence\n", cidade2.codigo);
    }

    printf("Comparando Super Poder: ");
    if (cidade1.super_poder > cidade2.super_poder) {
        printf("Cidade %s vence\n", cidade1.codigo);
    } else {
        printf("Cidade %s vence\n", cidade2.codigo);
    }
}

int main() {
    Cidade cidades[2];
    int i;

    printf("*** Cadastro de Cartas - Super Trunfo - Países ***\n");

    for (i = 0; i < 2; i++) {
        printf("\nCadastro da cidade %d:\n", i + 1);
        cadastrarCidade(&cidades[i]);
    }

    printf("\n--- Exibição das Cartas Cadastradas ---\n");
    for (i = 0; i < 2; i++) {
        exibirCidade(cidades[i]);
    }

    compararCartas(cidades[0], cidades[1]);

    return 0;
}