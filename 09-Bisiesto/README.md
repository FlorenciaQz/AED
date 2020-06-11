## Precedencia de Operadores — Bisiesto

### Transcripción del enunciado

#### Objetivos

• Demostrar el uso de operadores booleanos y expresiones complejas.

#### Temas

• Expresiones.

• Operadores booleanos: and, or, y not.

• Operador resto: %.

• Asociatividad de Operadores: ID ó DI.

• Precedencia de Operadores.

• Orden de evaluación de Operandos.

• Efecto de lado de una expresión.

#### Problema

Dado un año, determinar si es bisiesto.

#### Restricciones

• Desarrollar la lógica en una función.

• El nombre de la función debe ser IsBisiesto

• Aplicar operadores booleanos

• No aplicar el operador condicional.

• No aplicar if ni switch.

### Hipótesis 

Se creará una función "IsBisiesto" la cual permitirá definir si un número es bisiesto o no basándose en las condiciones definidas a continuación.
No se contará con un ingreso de datos por teclado ni se mostrará un resultado por consola, y las pruebas se realizarán mediante asserts. 

Trabajaremos teniendo en cuenta los siguientes supuestos: 

•El año deberá ser mayor o igual a 1582.

•Las condiciones para que un año sea bisiesto deberán ser que el año sea divisible por 4 y no divisible por 100 o que sea divisible por 400.

### Léxico 

Sea a ∈ N, IsBisiesto ∈ B 

### Definición matemática

Sean:

x = a > 1582

y = a es divisible por 4

z = a es divisible por 100

w = a es divisible por 400


IsBisiesto= N → B /x ^ ((y ^ -z) ˅ w) 

### Árbol de expresión

![alt text](https://raw.githubusercontent.com/FlorenciaQz/AED/master/09-Bisiesto/DiagramaArbolDeExpresion.png)

### Modelo IPO

![alt text](https://raw.githubusercontent.com/FlorenciaQz/AED/master/09-Bisiesto/ModeloIPO.png)



