# Heaps
+ estructura de datos tipo árbol que esta ordenado
+ un heap especial se puede implementar perfectamente en un arreglo
+ los últimos nodos deben ir a lo mas a la izquierda posible

# Colas de prioridad
+ tipos da datos abstracto que se puede insertar elementos con prioridad
+ permiten claves duplicadas o elementos duplicados con la misma prioridad

# colas de prioridad en un heap
+ un heap que implementa una cola de prioridad, sus padres tendrán mayor prioridad que sus hijos, salvo que el hijo tenga prioridad
+ La inserción se hace "trepando", esto es intercambiando espacios es el arreglo que este contenido el heap
+ la extracción se extrae siempre el de mayor prioridad, y luego la raíz se pone el mayor o el menor (dependiendo si es un max o un min heap)