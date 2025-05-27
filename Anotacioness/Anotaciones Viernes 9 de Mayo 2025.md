# Introducción a arboles
* Un arbol es una jerarquizacion de sus componentes
* es una conexion de nodos

# arbol k-ario (arbol de grado K)
* cada nodo tiene 0 o mas hijos siendo k el limite
* formado por raiz y sus hijos
* cada hijo es otro arbol k-ario

# Arbol binario
* cada nodotiene 1 o 2 hijos nomas
* formado por raiz y sus 2 hijos, los subarboles izq y der tambien son arboles binarios

# Arboles binarios de busqueda (ABB o BST)
* Arbol bin. que almacena claves en sus nodos y complen lo siguiente:
1. Las claves denodos subarboles izq son menores a laclave raiz
2. ==== son mayores que la clave raiz
3.  No admite claves duplicadas (SALVO QUE SE INDIQUE LO CONTRARIO YSE PONGA UN PROTOCOLO PARA ESTE CASO)
* Una manera chanta de entenderlo es un numero es mayor o menor que la raiz, mayor¿, va para la derecha, otro numero es mayor o menor que raiz, si, menor o mayor que su hijo, menor, para la izquierda

# BST estructura en C++

```C++
struct binaryNode{
	int key;
	int pos;
	binaryNode* izq;
	binaryNode* der;
}
```

El codigo hace de forma recursiva la insercion en un arbol binario, usando subarboles para poder añadir dicho numero al arbol.

# Variedad de BST y recorridos
* Existen muchos BST con el mismo set
* existen varios tipos de recorrido pero nosotros veremos estas 3:
	1. Preorden: raiz-izq-der
	2. Inorden: izq-raiz-der
	3. postOrden: izq-der-raiz