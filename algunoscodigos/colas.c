#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//===== estructura para un pedido unitario
typedef struct LineaPedido{
	int id_producto;
	int cantidad;
	float precio_unidad;
}LineaPedido;

typedef struct NodoLineaPedido{
	LineaPedido linea;
	struct NodoLineaPedido* siguiente;
}NodoLineaPedido;

typedef struct Pedido{
	int id_cliente;
	NodoLineaPedido* lista_productos;
}Pedido;
//===== estructura para una cola de pedidos
typedef struct NodoPedido{
	Pedido* pedido;
	struct NodoPedido* siguiente;
}NodoPedido;

typedef struct Cola{
	NodoPedido* primer;
	NodoPedido* ultimo;	
}Cola;
//=============================================
NodoPedido* CrearNodo(Pedido* pedido);
void DestruirNodo(NodoPedido* pedido);
Cola* CrearCola();
void Eliminar(Cola* cola);
void DestruirCola(Cola* cola);
void Encolar(Cola* cola, Pedido* pedido);
Pedido* Consultar(Cola* cola);
void ImprimeCola(Cola* cola);
//=============================================
NodoPedido* CrearNodo(Pedido* pedido){
	NodoPedido* nodo = (NodoPedido*) malloc(sizeof(NodoPedido));
	nodo->pedido = pedido;
	nodo->siguiente = NULL;
	return nodo;	
}

void DestruirNodo(NodoPedido* nodo){
	nodo->pedido = NULL;
	nodo->siguiente = NULL;
	free(nodo);
}

Cola* CrearCola(){
	// en este ejemplo se esta haciendo uso de la memoria dinamica para instanciar un objeto del tipo cola
	// en el ejemplo de la lista yo lo hice mediante la declaracion
	// Lista lista;
	// donde por defecto en la estructura los valores se colocaron en  NULL.
	Cola* cola = (Cola*) malloc(sizeof(Cola));
	cola->primer = cola->ultimo = NULL;
	return cola;
}

Pedido* CrearPedido(){
	Pedido* pedido = (Pedido*) malloc(sizeof(Pedido));
	pedido->id_cliente = 0;
	pedido->lista_productos = NULL;
	return pedido;
}

void Eliminar(Cola* cola){
	if(cola->primer){
		NodoPedido* eliminado = cola->primer;
		cola->primer = cola->primer->siguiente;
		DestruirNodo(eliminado);
		if(cola->primer == NULL){
			cola->ultimo = NULL;
		}
	}
}

void DestruirCola(Cola* cola){
	while(cola->primer){
		Eliminar(cola);
	}
	free(cola);
}

void Encolar(Cola* cola, Pedido* pedido){
	NodoPedido* nodo = CrearNodo(pedido);
	if(cola->primer == NULL){
		cola->primer = nodo;
		cola->ultimo = nodo;
	}else{
		
		cola->ultimo->siguiente = nodo;
		cola->ultimo = nodo;
	}
}

Pedido* Consultar(Cola* cola){
	if(cola->primer){
		return cola->primer->pedido;
	}else{
		return NULL;
	}
	
}

void ImprimeCola(Cola* cola){
	if(cola == NULL){
		printf("No hay ninguna cola\n");
	}else{
		if(cola->primer == NULL){
			printf("No hay elementos en la cola\n");
		}else{
			NodoPedido* puntero = cola->primer;
			while(puntero->siguiente){
				printf("%d|",puntero->pedido->id_cliente);
				puntero = puntero->siguiente;
			}
			printf("%d|",puntero->pedido->id_cliente);
			printf("\n");
		} 
	}

}
//=============================================
int main()
{

	
	Pedido p1, p2, p3;
//	strncpy(p1->id_cliente,"juliocesarchavez",50);
//	strncpy(p2->id_cliente,"lamalamita",50);
//	strncpy(p3->id_cliente,"niurca",50);

	p1.id_cliente = 100;
	p2.id_cliente = 101;
	p3.id_cliente = 102;
//	printf("%d\n",p1.id_cliente);
//hasta aqui se asigna bien el valor al pedido
	
	Cola* ordenesdelpatron = CrearCola();
	//La cola se crea bien.
	ImprimeCola(ordenesdelpatron);
	// se detecta cuando hay y no hay elementos en la cola, por lo que la cola funciona bien.
	Encolar(ordenesdelpatron,&p1);
	Encolar(ordenesdelpatron,&p2);
	Encolar(ordenesdelpatron,&p3);
	//el problema esta en que esta funcion no accede al valor.
	ImprimeCola(ordenesdelpatron);
	//la solucion fue que si se estaba asignando bien el valor de id de cliente al pedido.
	//pero la funcion encolar, que recibe un pedido, crea un Nodo de cola, al cual se le envia ese pedido.
	// y no se estaba asignando la direccion del pedido al nodo, sino que estaba asignandose en NULL.
	// esto fue un error porque no lo escribi bien.
	// se debe descartar cada problema, regresando hacia atras en operaciones.
	Eliminar(ordenesdelpatron);
	ImprimeCola(ordenesdelpatron);
	//este si destruye la cola, pero la variable ordenes del patron sigue apuntando a donde antes existia la cola
	DestruirCola(ordenesdelpatron);
	//se tiene que borrar la direccion de este pointer
	ordenesdelpatron=NULL;
	// si no este comando va a  imprimir los numeros que estan alojados ahora en esa direccion.
	ImprimeCola(ordenesdelpatron);
	
	return 0;
}
