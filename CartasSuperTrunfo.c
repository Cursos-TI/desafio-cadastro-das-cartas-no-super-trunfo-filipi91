#include <stdio.h>

int main()
{
    // Criando váriáveis para cartas
    char estado[40];
    char codigo_cidade[40];
    char nome_cidade[40];
    int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
    int populacao_cidade01;
    float area_cidade01;
    float pib_cidade01;
    int numero_pontos_turistiscos_cidade01;
    float densidade_populacional_cidade01;
    float pib_per_capita_cidade01;
    float super_poder_cidade01;
    int populacao_cidade02;
    float area_cidade02;
    float pib_cidade02;
    int numero_pontos_turistiscos_cidade02;
    float densidade_populacional_cidade02;
    float pib_per_capita_cidade02;
    float super_poder_cidade02;

    // Cadastro da Primeira Carta
    printf("Digite o Estado: ");
    scanf("%s", &estado);

    printf("Digite o Código da Cidade 1: ");
    scanf("%s", &codigo_cidade);

    printf("Digite o Nome da Cidade 1: ");
    scanf("%s", &nome_cidade);

    printf("Digite a População: ");
    scanf("%d", &populacao);

    printf("Digite a Área em Km²: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numero_pontos_turisticos);

    densidade_populacional = (float)populacao / area;

    pib_per_capita = (float)pib / populacao;

    super_poder = (float)(populacao + area + pib + pib_per_capita + densidade_populacional + numero_pontos_turisticos);

    //Impressão da Primeira Carta
    printf("Estado: %s\n", estado);
    printf("Código Cidade: %s\n", codigo_cidade);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área em Km²: %.1f\n", area);
    printf("PIB: %.1f\n", pib);
    printf("Pontos Turísticos: %d\n", numero_pontos_turisticos);
    printf("Densidade Populacional: %.2fpessoas/Km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_per_capita);
    printf("Super Poder: %.1f\n", super_poder);

    // Cadastro da Segunda Carta
    printf("Digite o Estado: ");
    scanf("%s", &estado);

    printf("Digite o Código da Cidade 2: ");
    scanf("%s", &codigo_cidade);

    printf("Digite o Nome da Cidade 2: ");
    scanf("%s", &nome_cidade);

    printf("Digite a População: ");
    scanf("%d", &populacao);

    printf("Digite a Área em Km²: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numero_pontos_turisticos);

    densidade_populacional = (float)populacao / area;

    pib_per_capita = (float)pib / populacao;

    super_poder = (float)populacao + area + pib + pib_per_capita + densidade_populacional + numero_pontos_turisticos;

    //Impressão da Segunda Carta
    printf("Estado: %s\n", estado);
    printf("Código Cidade: %s\n", codigo_cidade);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área em Km²: %.1f\n", area);
    printf("PIB: %.1f\n", pib);
    printf("Pontos Turísticos: %d\n", numero_pontos_turisticos);
    printf("Densidade Populacional: %.2fpessoas/Km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_per_capita);
    printf("Super Poder: %.1f\n", super_poder);

    //Comparando as cartas e dando o resultado final
    printf("Resultado População é %d\n", populacao_cidade01 > populacao_cidade02);
    printf("Resultado Área é %.d\n", area_cidade01 > area_cidade02);
    printf("Resultado PIB é %.d\n", pib_cidade01 > pib_cidade02);
    printf("Resultado Pontos Turísticos é %d\n", numero_pontos_turistiscos_cidade01 > numero_pontos_turistiscos_cidade02);
    printf("Resultado Densidade Populacional é %d\n", densidade_populacional_cidade01 < densidade_populacional_cidade02);
    printf("Resultado PIB Per Capita é %d\n", pib_per_capita_cidade01 > pib_per_capita_cidade02);
    printf("Resultado Super Poder é %.1f\n", super_poder_cidade01 > super_poder_cidade02);

    return 0;
}