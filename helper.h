//
// Created by Fran on 30/05/2024.
//

#ifndef EJ20_A_GUIA2_HELPER_H
#define EJ20_A_GUIA2_HELPER_H
typedef struct nodo
{
    int num;
    struct nodo *sig;
}Nodo;

typedef struct pila
{
    Nodo *tope;
}Pila;
typedef struct cola
{
    Nodo *cab;
    Nodo *cola;
}Cola;
typedef struct lista
{
    Nodo *cab;
}Lista;
Nodo *newNodo(int num);
Lista *newLista();
Pila *newPila();
Cola *newCola();
void agregarLista(Lista *lista,Nodo *nodoAI);
Nodo *eliminarLista(Lista *lista);
void Enque(Cola *cola,Nodo *nodoOut);
void pushPila(Pila *pila,Nodo *nodoOut);
Nodo *popPila(Pila *pila);
Nodo *Deque(Cola *cola);
void Enque1(Cola *cola, Nodo *nodoOut);
void imprimirCola(Cola *cola);
void imprimirPila(Pila *pila);
void imprimirLista(Lista *lista);



#endif //EJ20_A_GUIA2_HELPER_H
