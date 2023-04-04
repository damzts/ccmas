#if !defined(PEDIDOS)
#define PEDIDOS

typedef struct LineaPedido
{
    int id_producto;
    int cantidad;
    float precio_unidad;
} LineaPedido;

//===== estructura para un pedido unitario
typedef struct NodoLineaPedido
{
    LineaPedido linea;
    struct NodoLineaPedido *siguiente;
} NodoLineaPedido;

typedef struct Pedido
{
    int id_cliente;
    NodoLineaPedido *lista_productos;
} Pedido;

#endif // PEDIDOS
