#include "list.h"
#include <iostream>
using namespace std;
// Constructor
List::List()
{
	first = nullptr;
}

// Agregar un dato
List *List::append(int e)
{
	if (isEmpty())
	{ // caso inicial
		first = new Node;
		first->data = e;
		first->next = nullptr;
		return this;
	}
	Node *n = new Node;
	n->data = e;
	// probando con la nueva funcione

	addNext(first, n);

	// n->next = last->next;
	// last->next = n;

	return this;
}

// obtenemos la cabeza
int List::head()
{
	return  first->data;
}

// obtenemos el tamanio
int List::size()
{
	int c = 0;
	Node *iter = first;
	while (iter)
	{
	  iter = iter->next;
	  c++;
	}
	return c;
}

// verificamos si esta vacio
bool List::isEmpty()
{
	return first == nullptr;
}


// Agregar un dato en una posicion
List *List::append(int data, int pos)
{
	if (isEmpty())
	{ // caso inicial
		first = new Node;
		first->data = data;
		first->next = nullptr;
		return this;
	}

	// verificamos si entraria en esas posicion
	// aun no consideramos lista circular
	if (pos > size())
	{
		cout << "La posicion no existe" << endl;
		return this;
	}

	// creamos un puntero para recorrer
	Node *iter = first;
	while (pos--)
	{
		iter = iter->next;
	}

	// creamos el nodo
	Node *n = new Node;
	n->data = data;

	// agregamos el nodo
	addNext(iter, n);

	return this;
}

Node *List::deleteNext(Node *current)
{
	if (current == nullptr)
	{
		return current;
	}
	current->next = current->next->next;
	return current;
}

Node *List::addNext(Node *current, Node *newNode)
{
	if (current == nullptr)
		return newNode;

	newNode->next = current->next;
	current->next = newNode;

	return newNode;
}
