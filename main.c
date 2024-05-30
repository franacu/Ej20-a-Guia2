
#include "helper.h"
int main()
{

    Lista *lista=newLista();
    Pila *pila=newPila();
    Cola *cola=newCola();
    agregarLista(lista,newNodo(1));
    agregarLista(lista,newNodo(2));
    agregarLista(lista,newNodo(3));

    imprimirLista(lista);

    Enque(cola,eliminarLista(lista));
    Enque(cola,eliminarLista(lista));
    Enque(cola,eliminarLista(lista));

    imprimirCola(cola);


    pushPila(pila,Deque(cola));
    pushPila(pila,Deque(cola));
    pushPila(pila,Deque(cola));

    imprimirPila(pila);

    Enque1(cola, popPila(pila));
    Enque1(cola, popPila(pila));
    Enque1(cola, popPila(pila));

    imprimirCola(cola);


    return 0;
}
