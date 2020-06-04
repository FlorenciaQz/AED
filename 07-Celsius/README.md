## 08: Funciones y Comparación de Valores en Punto Flotante — Celsius

### Transcripción del enunciado: 

Desarrollar una función que, dada una magnitud en Farehnheit, calcule la
equivalente en Celsius.

Hay dos sub-problemas que se requieren solucionar antes de poder probar e
implementar la función Celsius:

• Valor de la fracción versus la división entera de la expresión 5/9 en C++.

• Representación no precisa de los tipos flotantes.

Una solución al primer problema es realizar división entre flotantes. Para el
segundo problema, debemos incorporar la comparación con tolerancia, para eso
debemos diseñar una función bool que reciba dos flotantes a comparar y un
flotante que repesente la tolerancia.

### Hipótesis 

En éste trabajo crearé las funciones: 

1. double Celsius(double);

2. bool AreNear(double, double, double = 0.001);

Mediante la función Celsius conseguiré calcular el valor en Celsius de un valor dado en Fahrenheits, en tipo de dato double. 
Luego, para realizar los asserts haré uso de la función AreNear, ya que deberé comparar el valor en Celsius calculado por mí misma contra el valor obtenido mediante la función Celsius. 
Al estar comparando doubles mediante asserts será necesearia la función AreNear ya que me permitirá agregar una tolerancia a mis resultados, acotando el error. 

### Tareas

1. Escribir el léxico, es decir, la definición matemática de la función.
2. Escribir las pruebas. (En Celsius.cpp)
3. Escribir los prototipos.
4. Escribir las definiciones. (En Celsius.cpp)

1. Léxico 

#### Celsius

Celsius: R->R/celsius(fahrenheit)= (5*(fahrenheit-32))/9

#### AreNear

AreNear: R^3->B/AreNear(a, b, tol)= true sí a-b<=tol ó AreNear(a, b, tol) = false e.o.c

3. Prototipos

double Celsius(double);

bool AreNear(double, double, double);





