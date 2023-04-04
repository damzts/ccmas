/* un header solo debe llevar declaraciones de estructuras y prototipos de funciones*/
#ifndef colas_h
#define colas_h
// === structs =========================
#include "pedidos.h"
//
typedef struct NodoPedido
{
    Pedido *pedido;
    struct NodoPedido *siguiente;
} NodoPedido;
//
typedef struct Cola
{
    NodoPedido *primer;
    NodoPedido *ultimo;
} Cola;
// === Prototypes =====================
NodoPedido *CrearNodo(Pedido *pedido);
void DestruirNodo(NodoPedido *pedido);
Cola *CrearCola();
void Eliminar(Cola *cola);
void DestruirCola(Cola *cola);
void Encolar(Cola *cola, Pedido *pedido);
Pedido *Consultar(Cola *cola);
void ImprimeCola(Cola *cola);

#endif // !colas_h
