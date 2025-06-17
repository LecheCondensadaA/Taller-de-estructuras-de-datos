# Árbol AVL
* Es un BST balanceado
* la ventaja de esto es que las operaciones criticas son mas eficaces en tiempo [Big(O)=log(n)]
# AVL Rotación Simple
+ se necesita reincorporar operaciones de balanceo simple y doble después de una inserción o eliminación

# Factor de equilibrio
Es un Int que indica si un nodo esta equilibrado o no
```[Formula]
v->fEq = highTree(v->der) - highTree(v->izq)

fEq: factor Equilibrio
```
+ v->fEq = 0 entonces esta equilibrado
+ v->fEq = 1 der es un nivel mas alto que izq
+ v->fEq = -1 izq es un nivel mas alto de der
+ v->fEq > 1 esta desequilibrado
