# Ejercicio 1


Dado el call stack 

- 3 Bar
- 2 foo 
- 1 main 

¿Cuál función llamó a cuál?

Según el cal stack dado se puede entender que el orden es el siguiente:

1. SO llama a main
2. main llama a foo
3. foo llama a bar

*Insertar Imagen:
![alt text](https://raw.githubusercontent.com/FlorenciaQz/AED/master/Ejercitaci%C3%B3n-CallStack/Ejercicio1.png)

# Ejercicio 2 

Dibuje la secuencia de estados de call stack para el programa ejemplo "Saludos" del texto Funciones:

-Cada instante presenta el call stack en un estado determinado 
-Tanto en el priemr instante como en el último instante el stack está vacío

Insertar Imagen:
![alt text](https://raw.githubusercontent.com/FlorenciaQz/AED/master/Ejercitaci%C3%B3n-CallStack/Ejercicio2.png)

# Ejercicio 3

Ejecute "Mostrar Adición de Dos Números Solicitados" del texto Funciones y deje que el proceso se bloquee esperando input. Para ese instante:

1. Dibuje el call stack
2. Busque en su sistema Operativo una herramienta que permita inspeccionar el call stack y compare con su dibujo. Ayuda: ActivityMonitor y Task Manager
3. Utilice un IDE con debugger para inspeccionar el call stack, comapre con su dibujo.
