#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //Declaração das variáveis para as duas cartas
    char estado01, estado02;
    char codigo_carta01[4], codigo_carta02[4];
    char nome_cidade01[50], nome_cidade02[50];
    int populacao01, populacao02, pontos_turismo01, pontos_turismo02;
    float area01, area02, pib01, pib02, demografia01, demografia02, rendacapita01, rendacapita02, super01, super02;
    
    // Lendo os valores para a 1a carta
    printf("Entre com os dados da 1a. Carta: \n");
    printf("Estado:\n");
    scanf("%c", &estado01);
    printf("Código:\n");
    fgetc(stdin);
    fgets(codigo_carta01, sizeof(codigo_carta01), stdin);
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

    // Calculo da Demografia da Carta 01
    demografia01 = populacao01 / area01;

    // Calculo da Renda per Capita da Carta 01
    rendacapita01 = (pib01 * 1000000000) / populacao01;
    
    // Calculando super poder da Carta 01
    super01 = populacao01 + area01 + pib01 + pontos_turismo01 + demografia01 + rendacapita01;

    fgetc(stdin);

    // Lendo os valores para a 2a carta
    printf("Entre com os dados da 2a. Carta: \n");
    printf("Estado:\n");
    scanf("%c", &estado02);
    printf("Código:\n");
    fgetc(stdin);
    fgets(codigo_carta02, sizeof(codigo_carta02), stdin);
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

    // Calculo da Demografia da Carta 02
    demografia02 =  populacao02 / area02;

    // Calculo da Renda per Capita da Carta 01
    rendacapita02 = (pib02 * 1000000000) / populacao02;

    // Calculando super poder da Carta 01
    super02 = populacao02 + area02 + pib02 + pontos_turismo02 + demografia02 + rendacapita02;


    // Mostrando os valores das duas cartas
    //Carta 01
    printf("Estes são os valores das cartas apresentadas: \n");
    printf("Carta 01:\n");
    printf("Estado : %c\n", estado01);
    printf("Código : %s\n", codigo_carta01);
    printf("Nome da cidade : %s", nome_cidade01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Numero de Pontos Turísticos: %d\n", pontos_turismo01);
    printf("Densidade Populacional: %.2f hab/km²\n",demografia01);
    printf("PIB per Capita: %.2f reais\n", rendacapita01);
    printf("Super Poder: %.2f\n", super01);
    printf("\n");

    // Carta 02
    printf("Carta 02:\n");
    printf("Estado : %c\n", estado02);
    printf("Código : %s\n", codigo_carta02);
    printf("Nome da cidade : %s", nome_cidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", pontos_turismo02);
    printf("Densidade Populacional: %.2f hab/km²\n",demografia02);
    printf("PIB per Capita: %.2f reais\n", rendacapita02);
    printf("Super Poder: %.2f\n", super02);

    // Comparando os valores das cartas e apresentando ganhador

    printf("Veja quem ganhou nas comparações: \n");
    printf("População:\n");
    if (populacao01 > populacao02){
        printf("Carta 1 venceu!\n");
    } else if (populacao01 < populacao02)
    {
        printf("Carta 2 venceu!\n");
    }  else {
       printf("As cartas empataram!\n");  
    }

    printf("Área:\n");
    if (area01 > area02){
        printf("Carta 1 venceu!\n");
    } else if (area01 < area02 )
    {
        printf("Carta 2 venceu!\n");
    }  else {
       printf("As cartas empataram!\n");  
    }

    printf("PIB:\n");
    if (pib01 > pib02){
        printf("Carta 1 venceu!\n");
    } else if (pib01 < pib02 )
    {
        printf("Carta 2 venceu!\n");
    }  else {
       printf("As cartas empataram!\n");  
    }

    printf("No. De Pontos Turísticos:\n");
    if (pontos_turismo01 > pontos_turismo02){
        printf("Carta 1 venceu!\n");
    } else if (pontos_turismo01 < pontos_turismo02)
    {
        printf("Carta 2 venceu!\n");
    }  else {
       printf("As cartas empataram!\n");  
    }

    printf("Densidade Populacional:\n");
    if (demografia01 < demografia02){
        printf("Carta 1 venceu!\n");
    } else if (demografia01 > demografia02)
    {
        printf("Carta 2 venceu!\n");
    }  else {
       printf("As cartas empataram!\n");  
    }

    printf("PIB per Capita:\n");
    if (rendacapita01 > rendacapita02){
        printf("Carta 1 venceu!\n");
    } else if (rendacapita01 < rendacapita02)
    {
        printf("Carta 2 venceu!\n");
    }  else {
       printf("As cartas empataram!\n");  
    }

    printf("Super Poder:\n");
    if (super01 > super02){
        printf("Carta 1 venceu!\n");
    } else if (super01 < super02)
    {
        printf("Carta 2 venceu!\n");
    }  else {
       printf("As cartas empataram!\n");  
    }

    return 0;
}
