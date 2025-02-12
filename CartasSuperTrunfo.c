#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Teste João Marcello
int main() {
    char codigo_cidade[4];
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // Cadastro das Cartas:
    printf("\nDigite o código da cidade (Ex: A01): ");
    scanf("%3s", codigo_cidade);

    printf("\nDigite o nome da cidade: ");
    scanf(" %[^\n]", nome);

    printf("\nPopulação: ");
    scanf("%d", &populacao);

    printf("\nÁrea (km²): ");
    scanf("%f", &area);
    
    printf("\nPIB (em bilhões): ");
    scanf("%f", &pib);
    
    printf("\nNúmero de pontos turísticos: ");
    scanf("%d", &pontos_turisticos); 

    // Exibição dos Dados das Cartas:
    printf("\nCIDADE CADASTRADA COM SUCESSO!\n");
    printf("Código da cidade: %s\n", codigo_cidade);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$%.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
