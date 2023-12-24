// main.cpp

#include <iostream>
#include "ArbolBinario.cpp"  // Incluimos la biblioteca ArbolBinario.cpp

using namespace std;

int main() {
    // Asignar valores al Árbol Binario.
    NodoArbol *arbol = NULL;

    insertarNodo(arbol, 0);
    insertarNodo(arbol, 1);
    insertarNodo(arbol, 2);
    insertarNodo(arbol, 3);
    insertarNodo(arbol, 4);
    insertarNodo(arbol, 5);
    insertarNodo(arbol, 6);

    // Imprimir el diagrama del Árbol Binario.
    cout << " * Diagrama del Arbol Binario:" << endl;
    mostrarEnOrden(arbol, 0);

    // Liberar memoria
    borrarArbol(arbol);

    return 0;
}

