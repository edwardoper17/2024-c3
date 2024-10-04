#include <stdio.h>

int main() {
    // Entradas
    float consumo_min, consumo_max, precio_G;
    const float LPG = 3.78;  // Litros por galón

    // Pedir valores al usuario
    printf("Ingrese el consumo mínimo en L/100 km: ");
    scanf("%f", &consumo_min);

    printf("Ingrese el consumo máximo en L/100 km: ");
    scanf("%f", &consumo_max);

    printf("Ingrese el costo del galón de combustible: ");
    scanf("%f", &precio_G);

    // Encabezado de la tabla
    printf("\nConsumo (L/100 km)    Precio por km\n");

    // Calcular y mostrar la tabla de costos
    for (float consumo = consumo_min; consumo <= consumo_max; consumo++) {
        float precio_por_km = (consumo / 100) * (precio_G / LPG);
        printf("%.2f L/100 km          %.2f\n", consumo, precio_por_km);
    }

    return 0;
}
