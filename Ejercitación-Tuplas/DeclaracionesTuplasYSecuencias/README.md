Declare "Racional" y "Dirección"

1. Racional
Hipótesis:
Q = {r = (p,q) / p y q ϵ Z con q !=0}

2. Dirección
Hipótesis:
1. Calle
2. Altura
3. Ciudad
4. Piso
5. Departamento
6. Código Postal
7. Provincia

La cardinalidad del conjunto Dirección es infinita. Tiene 7 partes (7-uplas) que permite combinaciones infinitas.

Restricciones:

1. Calle = Obligatorio
2. Altura = Obligatorio
3. Ciudad = Obligatorio
4. Piso  = No obligatorio
5. Departamento = No obligatorio
6. Codigo Postal = Obligatorio
7. Provincia = Obligatotio
	
Direccion = { d=(calle, altura, ciudad, piso, departametno, código postal, provincia)/
 calle e Sigma*, altura e N, ciudad e Sigma*, piso e Sigma*, departamento e Sigma*, 
 código postal e Sigma*, provincia e Sigma*.

calle =/= (ε)NULL
ciudad =/= ε
código postal =/= ε
provincia =/= ε AND ciudad =/= "caba" OR provincia = ε AND ciudad = "caba" 
}

Nota:(Sigma* = string)
