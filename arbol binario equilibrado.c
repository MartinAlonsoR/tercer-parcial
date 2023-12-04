#include <stdio.h>
#include <stdlib.h>

// nodo del árbol
struct NodoArbol {
    int dato;
    struct NodoArbol* izquierda;
    struct NodoArbol* derecha;
};
struct NodoArbol* crearNodo(int valor) {
    struct NodoArbol* nuevoNodo = (struct NodoArbol*)malloc(sizeof(struct NodoArbol));
    nuevoNodo->dato = valor;
    nuevoNodo->izquierda = NULL;
    nuevoNodo->derecha = NULL;
    return nuevoNodo;
}

// Nuevo elemento en el árbol
struct NodoArbol* insertar(struct NodoArbol* raiz, int valor) {
    if (raiz == NULL) {
        return crearNodo(valor);
    }

    if (valor < raiz->dato) {
        raiz->izquierda = insertar(raiz->izquierda, valor);
    } else if (valor > raiz->dato) {
        raiz->derecha = insertar(raiz->derecha, valor);
    }

    return raiz;
}
void inOrden(struct NodoArbol* raiz) {
    if (raiz != NULL) {
        inOrden(raiz->izquierda);
        printf("%d ", raiz->dato);
        inOrden(raiz->derecha);
    }
}

// Función principal
int main() {

    struct NodoArbol* raiz = NULL;
    raiz = insertar(raiz, 5);
    insertar(raiz, 3);
    insertar(raiz, 7);
    insertar(raiz, 2);
    insertar(raiz, 4);

    // Imprimir el árbol
    printf("Árbol binario en orden: ");
    inOrden(raiz);
    printf("\n");

    return 0;
}