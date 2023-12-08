#include <stdio.h>
#define MAX_VERTICES 5

void imprimirGrafo(int grafo[MAX_VERTICES][MAX_VERTICES], int vertices) {
    printf("Matriz de Adyacencia del Grafo:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", grafo[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int grafo[MAX_VERTICES][MAX_VERTICES] = {0}; // Iniciamos con ceros
    int vertices = 5; // Número de vértices

    // Aristas al grafo
    grafo[0][1] = 1;
    grafo[0][2] = 1;
    grafo[1][2] = 1;
    grafo[2][0] = 1;
    grafo[2][3] = 1;
    grafo[3][3] = 1;

    //grafo
    imprimirGrafo(grafo, vertices);

    return 0;
}
