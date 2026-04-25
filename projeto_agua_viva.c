#include <stdio.h>

int main() {
    // Declaração de variáveis
    int moradores;
    float consumo_m3, consumo_litros, media_pessoa;

    printf("=== GESTAO AGUAVIVA: CALCULADORA COMUNITARIA ===\n");
    printf("Ferramenta de Apoio ao Consumo Consciente\n\n");

    // Entrada de dados
    printf("Informe o numero de pessoas na residencia: ");
    scanf("%d", &moradores);

    printf("Informe o consumo total de agua no mes (em m3): ");
    scanf("%f", &consumo_m3);

    // Processamento
    // 1 m3 = 1000 litros. Calculo da media diaria por pessoa (mes de 30 dias)
    consumo_litros = consumo_m3 * 1000.0;
    media_pessoa = (consumo_litros / moradores) / 30.0;

    // Resultados e Saida
    printf("\n--- RESULTADOS ---\n");
    printf("Consumo total familiar: %.2f Litros/Mes\n", consumo_litros);
    printf("Media por pessoa: %.2f Litros/Dia\n", media_pessoa);

    // Estrutura Condicional (Avaliacao Praxica)
    if (media_pessoa <= 110.0) {
        printf("\nSTATUS: CONSUMO CONSCIENTE.\n");
        printf("Parabens! Sua comunidade esta ajudando a preservar nossos mananciais.\n");
    } 
    else if (media_pessoa > 110.0 && media_pessoa <= 170.0) {
        printf("\nSTATUS: ATENCAO - CONSUMO MODERADO.\n");
        printf("Considere reduzir o tempo no banho e reutilizar agua da maquina.\n");
    } 
    else {
        printf("\nALERTA: DESPERDICIO CRITICO!\n");
        printf("O consumo esta muito acima do recomendado. Risco de escassez e conta alta.\n");
    }

    printf("\n================================================\n");

    return 0;
}