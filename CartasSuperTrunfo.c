#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Teste João Marcello

int main() {
    // Variaveis das informações da cidade
    char codigo_cidade[4]; // Codigo da cidade [Sempre cadastrar uma letra e depois dois numeros](Ex: A01)
    char nome[30]; // Nome da cidade
    int populacao; // População da cidade
    float area; // Área da cidade em km²
    float pib; // PIB da cidade em bilhões
    int pontos_turisticos; // Numero de pontos turisticos na cidade

    // Novas variáveis para cálculos
    float densidade_populacional; // Densidade populacional (habitantes/km²)
    float pib_per_capta; // PIB per capita


    // Cadastro das Cartas:
    printf("\nDigite o código da cidade (Ex: A01): \n");
    scanf("%3s", codigo_cidade); // Lê o código da cidade (máximo 3 caracteres)


    // POR ALGUM MOTIVO O CODIGO ESTAVA PULANDO A ETAPA DE SOLICITAR O 'NOME DA CIDADE'
    // Após algumas pesquisas descobri o getchar()
    // getchar();
    // Porém ainda nao estava resolvendo. Decidi coloca-lo em loop até solucionar
    while (getchar() != '\n'); 
    // Agora ele consome todos os caracteres até a nova linha. Solucionando o problema


    printf("\nDigite o nome da cidade: \n");
    scanf("%[^\n]", nome); // Lê o nome da cidade até a nova linha


    printf("\nPopulação: \n");
    scanf("%d", &populacao); // Lê a população da cidade
    
    printf("\nÁrea (km²): \n");
    scanf("%f", &area); // Lê a área da cidade
    
    printf("\nPIB (em bilhões): \n");
    scanf("%f", &pib); // Lê o PIB da cidade
    
    printf("\nNúmero de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos); // Lê o numero de pontos turísticos
    

    // Cálculos
    densidade_populacional = (float)populacao / area; // Calcula a densidade populacional
    pib_per_capta = pib / populacao; // Calcula o PIB per capita

    // Exibição dos Dados:
    printf("\n====== CIDADE CADASTRADA COM SUCESSO! ======\n");
    printf("Código da cidade: %s\n", codigo_cidade);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$%.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional);
    printf("PIB per cápita: R$%.2f\n", pib_per_capta);

    return 0;
}


/* 
Estou com dificuldades de fazer que a saída fique igual ao exemplo. Não estou conseguindo manter uma carta salva para que seja mostrada junto com a carta seguinte.
Tentei de algumas formas faze-lo usando 'funçoes' ou 'loop for'. 
Porém vi que nao podia usa-los no NIVEL AVENTUREIRO/INTERMEDIARIO.
Segui as instruçoes do exercicio conforme solicitado:


"Exemplo de Saída:
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
Densidade Populacional: 5622.24 hab/km²=
PIB per Capita: 44532.91 reais"


"Simplificações para o nível intermediário: 
- Você ainda só precisa lidar com duas cartas.
- Continue sem usar estruturas de repetição (for, while) ou estruturas de decisão (if, else)."


*/ 