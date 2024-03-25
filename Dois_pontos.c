#include <stdio.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

float calcularDistancia(struct Ponto p1, struct Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct Ponto ponto_a = {1.0, 2.0};
    struct Ponto ponto_b = {4.0, 6.0};

    float distancia = calcularDistancia(ponto_a, ponto_b);

    printf("Distância entre os pontos: %.2f\n", distancia);

    printf("Tamanho da estrutura Ponto: %lu bytes\n", sizeof(struct Ponto));

    return 0;
}
