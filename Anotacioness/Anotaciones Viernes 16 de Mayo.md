# Estructura BST

``` C++
struct binaryNode{
	int key;
	int pos;
	binaryNode* izq;
	binaryNode* der;
}
typedef struct binaryNode nodoBST
```

# Borrar un elemento en un BST

Borrar una hoja no hay drama, pero borrar un elemento del medio es... complicado

