// ArbolBinario.cpp

#ifndef ARBOLBINARIO_CPP
#define ARBOLBINARIO_CPP

#include <iostream>
#include <stdlib.h>

using namespace std;

struct NodoArbol {
    int dato;
    NodoArbol *izquierda;
    NodoArbol *derecha;
};

NodoArbol *crearNodo(int n) {
    NodoArbol *nuevoNodo = new NodoArbol();
    nuevoNodo->dato = n;
    nuevoNodo->izquierda = NULL;
    nuevoNodo->derecha = NULL;
    return nuevoNodo;
}

void insertarNodo(NodoArbol *&arbol, int n) {
    if (arbol == NULL) {
        NodoArbol *nuevoNodo = crearNodo(n);
        arbol = nuevoNodo;
    } else {
        int valorRaiz = arbol->dato;
        if (n < valorRaiz) {
            insertarNodo(arbol->izquierda, n);
        } else {
            insertarNodo(arbol->derecha, n);
        }
    }
}

void mostrarEnOrden(NodoArbol *arbol, int nivel) {
    if (arbol != NULL) {
        mostrarEnOrden(arbol->derecha, nivel + 1);
        for (int i = 0; i < nivel; i++) {
            cout << "   ";
        }
        cout << arbol->dato << endl;
        mostrarEnOrden(arbol->izquierda, nivel + 1);
    }
}

void liberarMemoria(NodoArbol *arbol) {
    if (arbol != NULL) {
        liberarMemoria(arbol->izquierda);
        liberarMemoria(arbol->derecha);
        delete arbol;
    }
}

void borrarArbol(NodoArbol *&arbol) {
    liberarMemoria(arbol);
    arbol = NULL;
}

#endif // ARBOLBINARIO_CPP
