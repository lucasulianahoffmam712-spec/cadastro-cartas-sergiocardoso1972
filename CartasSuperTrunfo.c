#include <stdio.h>

int main(){

    // Apresentação do jogo e instruções para o usuário e printf("\n") para pular linha.

    printf("Bem vindo ao jogo Super trunfo!\n");
    printf("\n");

    printf("TEMA DO JOGO: ESTADOS.\n");
    printf("\n");

    printf("O objetivo do jogo é comparar os atributos dos estados e vencer o adversário.\n");
    printf("\n");

    printf("Vamos começar!\n");
    printf("\n");

    printf("Primeiro, vamos cadastrar as informações dos estados.\n");
    printf("\n");

    printf("Primeiro vamos cadastrar o primeiro estado.\n");
    printf("\n");

    // Declaração das variáveis para armazenar as informações dos estados.

    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;

    // Coleta de informações do primeiro estado. OBS: OS ESTADOS NÃO DEVEM TER ESPAÇOS ENTRE AS PALAVRAS, POIS O PROGRAMA NÃO ACEITA ESPAÇOS.

    printf("Digite o nome do primeiro estado:\n");
    scanf(" %s", estado1);
    printf("\n");

    printf("Digite o nome do código do primeiro estado:\n");
    scanf(" %s", codigo1);
    printf("\n");

    printf("Digite o nome da cidade do primeiro estado:\n");
    scanf(" %s", cidade1);
    printf("\n");

    printf("Digite a população do primeiro estado:\n");
    scanf(" %d", &populacao1);
    printf("\n");

    printf("Digite a área do primeiro estado:\n");
    scanf(" %f", &area1);
    printf("\n");  

    printf("Digite o PIB do primeiro estado:\n");
    scanf(" %f", &pib1);
    printf("\n");
 
    printf("Digite o número de pontos turísticos do primeiro estado:\n");
    scanf(" %d", &turismo1);
    printf("\n");

    // Resposta de sucesso para o cadastro do primeiro estado.

    printf("CADASTRANDO INFORMAÇÕES DO PRIMEIRO ESTADO...\n");
    printf("\n");

    printf("Primeiro estado cadastrado com sucesso!\n");
    printf("\n");

    // Coleta de informações do segundo estado.

    printf("Agora vamos cadastrar o segundo estado.\n");
    printf("\n");

    printf("Digite o nome do segundo estado:\n");
    scanf(" %s", estado2);
    printf("\n");

    printf("Digite o código do segundo estado:\n");
    scanf(" %s", codigo2);
    printf("\n");

    printf("Digite o nome da cidade do segundo estado:\n");
    scanf(" %s", cidade2);
    printf("\n");

    printf("Digite a população do segundo estado:\n");
    scanf(" %d", &populacao2);
    printf("\n");

    printf("Digite a área do segundo estado:\n");
    scanf(" %f", &area2);
    printf("\n");

    printf("Digite o PIB do segundo estado:\n");
    scanf(" %f", &pib2);
    printf("\n");

    printf("Digite o número de pontos turísticos do segundo estado:\n");
    scanf(" %d", &turismo2);
    printf("\n");

    // Resposta de sucesso para o cadastro do segundo estado.

    printf("CADASTRANDO INFORMAÇÕES DO SEGUNDO ESTADO...\n");
    printf("\n");

    printf("Segundo estado cadastrado com sucesso!\n");
    printf("\n");

    //Exibição das informações dos estados cadastrados.

    printf("EXIBINDO INFORMAÇÕES DOS ESTADOS...\n");
    printf("\n");

    printf("Primeiro estado...\n");
    printf("\n");

    printf("Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Aréa: %.2f\n PIB: %f\n Pontos turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, turismo1);
    printf("\n");

    printf("Segundo estado...\n");
    printf("\n");

    printf("Estado: %s\n Código: %s\n Cidade: %s\n População: %d\n Aréa: %.2f\n PIB: %f\n Pontos turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, turismo2);

    // Finalização do programa.

    return 0;

}
