#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declaração de variáveis com nome de Estados.
    char Estado_A[40];
    char Estado_B[40];
    char Estado_C[40];
    char Estado_D[40];
    char Estado_E[40];
    char Estado_F[40];
    char Estado_G[40];
    char Estado_H[40];

    // Declaração de variáveis com nome de Cidades.
    char cidade_01[35];
    char cidade_02[35];
    char cidade_03[35];
    char cidade_04[35];
    // Atribuindo variáveis para código da cidade, população, área, PIB, número de pontos turísticos.
    int cod_cidade;
    float populacao;
    float area;
    double pib;
    int numero_ponto_turistico;
    
    // Cadastro da Carta com variavel Estado_A
    printf('Digite o nome do Estado: \n');
    scanf('%s', &Estado_A);

    //Mensagem exibida com sucesso
    printf('Estado cadastrado com sucesso\n');

    //Cadastrando primeira cidade estado_A
    printf('Digite o nome da 1ª cidade do Estado de %a\n', Estado_A);
    scanf('%s', &cidade_01);

    printf('Digite o código da cidade: \n');
    scanf('%d', &cod_cidade);

    printf('Digite a população da cidade: \n');
    scanf("%f", &populacao);

    printf('Digite o tamanho da área em Km²: \n');
    scanf("%f", &area);

    printf('Digite o PIB da cidade: \n');
    scanf("%f", &pib);

    printf('Digite o número de pontos turísticos: \n');
    scanf("%f", &numero_ponto_turistico);

    //Mensagem ao cadastrar Carta
    printf('Carta Cadastrada com sucesso. \n');

    //Exibindo Dados das Cartas
    printf('Cidade: "%s"\n', cidade_01);
    printf('População: "%f"\n', populacao);
    printf('Área em Km: "%f"\n', area);
    printf('Pib: "%f"\n', pib);
    printf('Pontos Turísticos: "%d"\n', numero_ponto_turistico);

//Cadastrando segunda cidade estado_A
    printf('Digite o nome da 2ª cidade do Estado de %a\n', Estado_A);
    scanf('%s', &cidade_02);

    printf('Digite o código da cidade: \n');
    scanf('%d', &cod_cidade);

    printf('Digite a população da cidade: \n');
    scanf("%f", &populacao);

    printf('Digite o tamanho da área em Km²: \n');
    scanf("%f", &area);

    printf('Digite o PIB da cidade: \n');
    scanf("%f", &pib);

    printf('Digite o número de pontos turísticos: \n');
    scanf("%f", &numero_ponto_turistico);

    //Mensagem ao cadastrar Carta
    printf('Carta Cadastrada com sucesso. \n');

    //Exibindo Dados das Cartas
    printf('Cidade: "%s"\n', cidade_02);
    printf('População: "%f"\n', populacao);
    printf('Área em Km: "%f"\n', area);
    printf('Pib: "%f"\n', pib);
    printf('Pontos Turísticos: "%d"\n', numero_ponto_turistico);

//Cadastrando terceira cidade estado_A
    printf('Digite o nome da 3ª cidade do Estado de %a\n', Estado_A);
    scanf('%s', &cidade_03);

    printf('Digite o código da cidade: \n');
    scanf('%d', &cod_cidade);

    printf('Digite a população da cidade: \n');
    scanf("%f", &populacao);

    printf('Digite o tamanho da área em Km²: \n');
    scanf("%f", &area);

    printf('Digite o PIB da cidade: \n');
    scanf("%f", &pib);

    printf('Digite o número de pontos turísticos: \n');
    scanf("%f", &numero_ponto_turistico);

    //Mensagem ao cadastrar Carta
    printf('Carta Cadastrada com sucesso. \n');

    //Exibindo Dados das Cartas
    printf('Cidade: "%s"\n', cidade_03);
    printf('População: "%f"\n', populacao);
    printf('Área em Km: "%f"\n', area);
    printf('Pib: "%f"\n', pib);
    printf('Pontos Turísticos: "%d"\n', numero_ponto_turistico);

    //Cadastrando quarta cidade estado_A
    printf('Digite o nome da 4ª cidade do Estado de %a\n', Estado_A);
    scanf('%s', &cidade_04);

    printf('Digite o código da cidade: \n');
    scanf('%d', &cod_cidade);

    printf('Digite a população da cidade: \n');
    scanf("%f", &populacao);

    printf('Digite o tamanho da área em Km²: \n');
    scanf("%f", &area);

    printf('Digite o PIB da cidade: \n');
    scanf("%f", &pib);

    printf('Digite o número de pontos turísticos: \n');
    scanf("%f", &numero_ponto_turistico);

    //Mensagem ao cadastrar Carta
    printf('Carta Cadastrada com sucesso. \n');

    //Exibindo Dados das Cartas
    printf('Cidade: "%s"\n', cidade_04);
    printf('População: "%f"\n', populacao);
    printf('Área em Km: "%f"\n', area);
    printf('Pib: "%f"\n', pib);
    printf('Pontos Turísticos: "%d"\n', numero_ponto_turistico);

    return 0;
}
