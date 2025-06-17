# Tablas Hash

## Tablas de Direccionamiento Directo

* Cada registro se le asocia una clave unica en una tabla de indices de tamaño m= |U|
* esto es mas practico que hacerlo asi nomas.

## Funcion Hash
+ debe ser lo mas uniforme posible e independiente de la probabilidad de claves
+ El metodo de la division [h(k) = k % m], se prefiere usar un M primo evitando usar un valor cercano a potencias de 2
+ en promedio no debe ser mas de C coliciones por celda, c constante (lo mas pequeño), osea eligiremos un M primo cercanoa |U|/c y alejado de las potencias de 2
