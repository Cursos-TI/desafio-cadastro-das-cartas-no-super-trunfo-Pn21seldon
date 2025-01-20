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
} Cidade;

void calcularPropriedades(Cidade *cidade) {
    cidade->densidade_populacional = cidade->populacao / cidade->area;
    cidade->pib_per_capita = cidade->pib / cidade->populacao;
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

    return 0;
}