
#include <stdio.h>
/* consumo minimo de combustible: 8l por cada 100 km
/* distancia maxima: 12 km
/* costo del combustible: 290 */

 int main() {
    // Entradas
    float consumo_min, consumo_max, precio_Galones;
    const float LPG = 3.78;  // Litros por galón

    // Pedir valores al usuario
    printf("Ingrese el consumo mínim en L/100 km: ");
    scanf("%f", &consumo_minim);

    printf("Ingrese el consumo máxim en L/100 km: ");
    scanf("%f", &consumo_maxim);

    printf("Ingrese el costo del galón de combustible: ");
    scanf("%f", &precio_Galones);

    // Encabezado de la tabla
    printf("\nConsumo (L/100 km)    Precio por km\n");

    // Calcular y mostrar la tabla de costos
    for (float consumo = consumo_min; consumo <= consumo_max; consumo++) {
        float precio_por_km = (consumo / 100) * (precio_G / LPG);
        printf("%.2f L/100 km          %.2f\n", consumo, precio_por_km);
    }

    return 0;
}

