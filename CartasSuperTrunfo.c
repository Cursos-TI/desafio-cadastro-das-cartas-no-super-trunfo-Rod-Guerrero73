#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //Declaração das variáveis para as duas cartas
    char estado01, estado02;
    char codigo_carta01[4]; codigo_carta02[4];
    char nome_cidade01[50]; nome_cidade02[50];
    int populacao01, populacao02, pontos_turismo01, pontos_turismo02;
    float area01, area02, pib01, pib02;
    
    // Lendo os valores para a 1a carta
    printf("Entre com os dados da 1a. Carta: \n");
    printf("Estado:\n");
    scanf("%c", &estado01);
    printf("Código:\n");
    scanf("%s", &codigo_carta01);
    fgetc(stdin);
    printf("Nome da Cidade: \n");
    fgets(nome_cidade01, sizeof(nome_cidade01), stdin);
    printf("População:\n");
    scanf("%d", &populacao01);
    printf("Área:\n");
    scanf("%f", &area01);
    printf("PIB:\n");
    scanf("%f", &pib01);
    printf("Pontos Turísticos:\n");
    scanf("%d", &pontos_turismo01);

    fgetc(stdin);

    // Lendo os valores para a 2a carta
    printf("Entre com os dados da 2a. Carta: \n");
    printf("Estado:\n");
    scanf("%c", &estado02);
    printf("Código:\n");
    scanf("%s", &codigo_carta02);
    fgetc(stdin);
    printf("Nome da Cidade: \n");
    fgets(nome_cidade02, sizeof(nome_cidade02), stdin);
    printf("População:\n");
    scanf("%d", &populacao02);
    printf("Área:\n");
    scanf("%f", &area02);
    printf("PIB:\n");
    scanf("%f", &pib02);
    printf("Pontos Turísticos:\n");
    scanf("%d", &pontos_turismo02);


    // Mostrando os valores das duas cartas
    //Carta 01
    printf("Estes são os valores das cartas apresentadas: \n");
    printf("Carta 01:\n");
    printf("Estado : %c\n", estado01);
    printf("Código : %s\n", codigo_carta01);
    printf("Nome da cidade : %s", nome_cidade01);
    printf("População: %d\n", populacao01);
    printf("Área: %2f km²\n", area01);
    printf("PIB: %2f bilhões de reais\n", pib01);
    printf("Numero de Pontos Turísticos: %d\n", pontos_turismo01);
    printf("\n");

    // Carta 02
    printf("Carta 02:\n");
    printf("Estado : %c\n", estado02);
    printf("Código : %s\n", codigo_carta02);
    printf("Nome da cidade : %s", nome_cidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %2f km²\n", area02);
    printf("PIB: %2f bilhões de reais\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", pontos_turismo02);

    return 0;
}
