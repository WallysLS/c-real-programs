#include <stdio.h>
#include <math.h>

int main()
{
    int valor;
    int meses;
    float montante;
    float juros;
    printf("Quanto você tem na poupança, em reais? ");
    scanf("%d", &valor);
    printf("Agora digite o número de meses que o dinheiro vai ficar guardado: ");
    scanf("%d", &meses);
    printf("You have %d reais na poupança hoje.", valor);
    printf("\n");
    juros = pow(1.01,meses);
    montante = valor * juros;
    printf("O montante no final de %i meses é de R$ %1f\n", meses, montante);
}