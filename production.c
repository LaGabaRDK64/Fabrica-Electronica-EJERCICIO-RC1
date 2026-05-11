#include "production.h"
#include "betterio.h"
#include <stdio.h>


// TIEMPO TOTAL
float calcularTiempoTotal(int demanda[], float tiempoUnidad[], int totalProductos) {

    int i;
    float total = 0;

    for (i = 0; i < totalProductos; i++) {

        total += demanda[i] * tiempoUnidad[i];
    }

    return total;
}

// MATERIA PRIMA TOTAL
int calcularMateriaPrimaTotal(int demanda[], int materiaPrimaUnidad[], int totalProductos) {

    int i;
    int total = 0;

    for (i = 0; i < totalProductos; i++) {

        total += demanda[i] * materiaPrimaUnidad[i];
    }

    return total;
}

// MANO DE OBRA TOTAL
float calcularManoObraTotal(int demanda[], float manoObraUnidad[], int totalProductos) {

    int i;
    float total = 0;

    for (i = 0; i < totalProductos; i++) {

        total += demanda[i] * manoObraUnidad[i];
    }

    return total;
}

// ENERGIA TOTAL
float calcularEnergiaTotal(int demanda[], float energiaUnidad[], int totalProductos) {

    int i;
    float total = 0;

    for (i = 0; i < totalProductos; i++) {

        total += demanda[i] * energiaUnidad[i];
    }

    return total;
}

// RECURSOS FALTANTES
float calcularRecursosFaltantes(float requerido, float disponible) {

    if (requerido > disponible) {

        return requerido - disponible;
    }

    return 0;
}

// PRODUCCION MAXIMA POSIBLE
int produccionMaximaPosible(float recursoDisponible, float recursoPorUnidad) {

    return recursoDisponible / recursoPorUnidad;
}

// PORCENTAJE DEMANDA CUBIERTA
float porcentajeDemandaCubierta(int produccionReal, int demanda) {

    return ((float)produccionReal / demanda) * 100;
}

// EFICIENCIA DE USO
float eficienciaUsoRecurso(float usado, float disponible) {

    return (usado / disponible) * 100;
}

// VERIFICAR DEMANDA
void verificarDemanda(float tiempoTotal, int materiaPrimaTotal, float manoObraTotal, float energiaTotal) {

    float tiempoDisponible;
    int materiaDisponible;
    float manoObraDisponible;
    float energiaDisponible;

    float faltante;

    printf("\nTiempo disponible: ");
    tiempoDisponible = DECnumberverification(0, 1000000);

    printf("Materia prima disponible: ");
    materiaDisponible = ENTnumberverification  (0, 1000000);

    printf("Mano de obra disponible: ");
    manoObraDisponible = DECnumberverification(0, 1000000);

    printf("Energia disponible: ");
    energiaDisponible = DECnumberverification(0, 1000000);

    if (tiempoTotal <= tiempoDisponible &&
        materiaPrimaTotal <= materiaDisponible &&
        manoObraTotal <= manoObraDisponible &&
        energiaTotal <= energiaDisponible) {

        printf("\nLa demanda SI puede cumplirse\n");

    } else {

        printf("\nLa demanda NO puede cumplirse\n");

        faltante = calcularRecursosFaltantes(tiempoTotal,
                                             tiempoDisponible);

        if (faltante > 0) {

            printf("Falta tiempo: %.2f\n", faltante);
        }

        faltante = calcularRecursosFaltantes(materiaPrimaTotal,
                                             materiaDisponible);

        if (faltante > 0) {

            printf("Falta materia prima: %.2f\n", faltante);
        }

        faltante = calcularRecursosFaltantes(manoObraTotal,
                                             manoObraDisponible);

        if (faltante > 0) {

            printf("Falta mano de obra: %.2f\n", faltante);
        }

        faltante = calcularRecursosFaltantes(energiaTotal,
                                             energiaDisponible);

        if (faltante > 0) {

            printf("Falta energia: %.2f\n", faltante);
        }
    }
}
