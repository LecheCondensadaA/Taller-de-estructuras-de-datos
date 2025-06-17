# Eliminacion
Para eliminar se necesita hacer una rotacion, para dejar al ancestro abajo y de hay recien eliminar, si el nodo es una hoja, simplemente se elimina
# Algoritmo de eliminacion
+ paso 1: realizar la eliminacion normal como en un BST,y si no fue exitosa , retorna sin realizar actualizaciones
+ paso 2: su la eliminacion se logro, actualizamos la altura de cada nodo
+ paso 3: obtenemos el fEq(v) del nodo actual v para verificar si hay que hacer rotaciones
+ paso 4: si fEq(v)<-1->v esta desiquibrado
+ paso 5: si fEq(v)>1->v esta desequilibrado por la derecha