Desarrolle una función que dada una hora indique si es una hora de la mañana, tarde o noche. 
Considere el tipo de dato de argumentos y de retorno, también las precondiciones. 

Hipótesis: 

La función ClasificarHora tendrá como entrada una hora expresada en reloj de 24 horas, 
respetando el formato HH:MM. Es decir, 07:22, 19:22, etc. Este tipo de dato será un struct, 
con los componentes horas y minutos.

La función tomará como mañana, tarde y noche las horas que respeten ciertas condiciones:

Mañana: Desde 06:00(Inclusive) hasta 12:00
Tarde: Desde 12:00 (Inclusive) hasta 19:00
Noche: Desde 19:00 (Inclusive) hasta 12:00

Los valores Mañana, Tarde y Noche se guardarán en un Enum. 

La función tendrá como entrada el Struct Hora y como salida un elemento 
del tipo de dato "Clasif" (struct enum). 

Sólo se trabajará con el primer componente del struct de entrada,
 ya que esos datos son suficientes para definir a qué clasificación corresponde 
 cada horario ingresado.

1- Diseñe el modelo IPO. 

 Clasif -> ClasificarHora -> String
