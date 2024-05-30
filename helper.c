//
// Created by Fran on 30/05/2024.
//

#include "helper.h"
#include "stdlib.h"
#include "stdio.h"

Nodo *newNodo(int num)
{
    Nodo *aux= malloc(sizeof(Nodo));
    if(aux==NULL)
    {
        printf("Error\n");
    }else
    {
        aux->num=num;
        aux->sig=NULL;
    }
    return aux;
}
Lista *newLista()
{
    Lista *aux= malloc(sizeof(Lista));
    if(aux==NULL)
    {
        printf("Error\n");
    }else
    {
        aux->cab=NULL;
    }
    return aux;
}
Pila *newPila()
{
    Pila *aux= malloc(sizeof(Pila));
    if(aux==NULL)
    {
        printf("Error\n");
    }else
    {
        aux->tope=NULL;
    }
    return aux;
}
Cola *newCola()
{
    Cola *aux= malloc(sizeof(Cola));
    if(aux==NULL)
    {
        printf("Error\n");
    }else
    {
        aux->cab=NULL;
        aux->cola=NULL;
    }
    return aux;
}
void agregarLista(Lista *lista,Nodo *nodoAI)
{
    if(lista->cab==NULL)
    {
        lista->cab=nodoAI;
    }else
    {
        Nodo *act=lista->cab;
        while(act->sig!=NULL)
        {
            act=act->sig;
        }
        act->sig=nodoAI;
    }
}
Nodo *eliminarLista(Lista *lista)
{
    if(lista->cab==NULL)
    {
        printf("Nada\n");
        exit(-1);
    }
    Nodo *nodoOut=lista->cab;
    lista->cab=lista->cab->sig;
    nodoOut->sig=NULL;
    return nodoOut;
}
void Enque(Cola *cola,Nodo *nodoOut) {
    if (cola->cab == NULL) {
        cola->cab = nodoOut;
        cola->cola = nodoOut;
    } else {
        cola->cola->sig=nodoOut;
        cola->cola=nodoOut;

    }
}
Nodo *Deque(Cola *cola)
{
    if(cola->cab==NULL)
    {
        printf("Cola vacia\n");
        exit(-1);
    }
    Nodo *nodoOut=cola->cab;
    cola->cab=nodoOut->sig;
    nodoOut->sig=NULL;
    return nodoOut;
}
void pushPila(Pila *pila, Nodo *nodoOut)
{
    if (pila->tope == NULL)
    {
        pila->tope = nodoOut;
    }
    else
    {
        nodoOut->sig = pila->tope;
        pila->tope = nodoOut;
    }
}
Nodo *popPila(Pila *pila)
{
    if (pila->tope == NULL) {
        printf("La pila está vacía\n");
        exit(-1);
    }
    Nodo *nodoOut=pila->tope;
    pila->tope=nodoOut->sig;
    nodoOut->sig=NULL;
    return nodoOut;
}
void Enque1(Cola *cola, Nodo *nodoOut)
{
    if (cola->cab == NULL)
    {
        cola->cab = nodoOut;
        cola->cola = nodoOut;
    }
    else
    {
        cola->cola->sig = nodoOut;
        cola->cola = nodoOut;
    }
}
void imprimirCola(Cola *cola)
{
    Nodo *aux=cola->cab;
    printf("\nCola:\n");
    while(aux!=NULL)
    {
        printf("%d--> ",aux->num);
        aux=aux->sig;
    }
}
void imprimirPila(Pila *pila)
{
    Nodo *aux=pila->tope;
    printf("\nPila:\n");
    while(aux!=NULL)
    {
        printf("%d--> ",aux->num);
        aux=aux->sig;
    }
}
void imprimirLista(Lista *lista)
{
    Nodo *aux=lista->cab;
    printf("\nLista:\n");
    while(aux!=NULL)
    {
        printf("%d--> ",aux->num);
        aux=aux->sig;
    }
}