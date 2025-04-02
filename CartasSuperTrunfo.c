    #include <stdio.h>

int main() {
    // Estrutura para armazenar os dados de uma carta
    struct Carta {
        int populacao;
        float area;
        float pib;
        int pontos_turismo;
    };
    
    // Declarando as duas cartas
    struct Carta carta1, carta2;

    // Entrada de dados para a Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a area: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);
    printf("Digite o numero de pontos turistico: ");
    scanf("%d", &carta1.pontos_turismo);

    // Entrada de dados para a Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a area: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);
    printf("Digite o numero de pontos turistico: ");
    scanf("%d", &carta2.pontos_turismo);

    // Exibindo os dados da Carta 1
    printf("\nDados da Carta 1:\n");
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turismo);

    // Exibindo os dados da Carta 2
    printf("\nDados da Carta 2:\n");
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turismo);

    return 0;
}

