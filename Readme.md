# Ejercicio De Programacion RC1
Una fábrica de componentes electrónicos necesita optimizar su producción para cumplir con la demanda de **cinco** productos distintos. Cada producto tiene un *tiempo de fabricación* específico y requiere una cantidad fija de *recursos*. El equipo de ingeniería ha identificado que la línea de producción tiene limitaciones de tiempo y recursos que deben ser tomadas en cuenta. 

Nuestro proyecto se divide en 4 archivos, el archivo principal y 3 archivos de cabecera:
- main 
- betterio
- products
- production
- tools

# main
Se encarga de controlar el flujo de la funcion principal usando las funciones y datos declarados en el resto de librerias.

# betterio
betterio (better input/output) se encarga de realizar validaciones para la entrada del usuario.

# products
Define los productos y las funciones relacionadas con los mismos.
Cada producto tiene un tiempo y recursos necesarios para su fabricacion:
- Tiempo -> se mide en minutos/unidades
- Materia prima -> se mide en unidades  
- Mano de obra -> se mide en hora/unidades
- Energia -> se mide en kWh/unidades

# production
Calcula tiempos de produccion y recursos necesarios

# tools
Funciones adicionales que nos ayudan a editar los productos, organizar aareglos, buscar productos, etc.