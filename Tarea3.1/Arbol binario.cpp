// main.cpp

#include "ArbolBinario.cpp"
#include <iostream>
#include <conio.h>

using namespace std;

NodoArbol *arbol = NULL;

void mostrarMenu();

int main() {
    mostrarMenu();
    getch();
    borrarArbol(arbol);
    return 0;
}

void mostrarMenu() {
    int dato, opcion;
    do {
        cout << "\t*** MENÚ ***" << endl;
        cout << "1. Insertar un nuevo nodo" << endl;
        cout << "2. Mostrar el árbol en orden" << endl;
        cout << "3. Borrar árbol y capturar nuevos nodos" << endl;
        cout << "4. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nIngrese un número: ";
                cin >> dato;
                insertarNodo(arbol, dato);
                cout << "\n";
                system("pause");
                break;

            case 2:
                cout << "\nMostrando el árbol en orden:" << endl;
                mostrarEnOrden(arbol, 0);
                cout << "\n";
                system("pause");
                break;

            case 3:
                borrarArbol(arbol);
                cout << "Árbol borrado. Ingrese nuevos nodos." << endl;
                cout << "\n";
                system("pause");
                break;
        }

        system("cls");
    } while (opcion != 4);
}
