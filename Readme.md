# Ejercicio De Programacion RC1
Una fábrica de componentes electrónicos necesita optimizar su producción para cumplir con la demanda de **cinco** productos distintos. Cada producto tiene un *tiempo de fabricación* específico y requiere una cantidad fija de *recursos*. El equipo de ingeniería ha identificado que la línea de producción tiene limitaciones de tiempo y recursos que deben ser tomadas en cuenta. 

Nuestro proyecto se divide en 4 archivos, el archivo principal y 3 archivos de cabecera:
- main 
- betterio
- products
- production
- tools

## main
Se encarga de controlar el flujo de la funcion principal usando las funciones declaradas en el resto de librerias.

## betterio
betterio (better input/output) se encarga de realizar validaciones para la entrada del usuario.

## products
Define las funciones relacionadas con los productos (Añadir, Eliminar, Editar, ect).
Cada producto tiene un tiempo y recursos necesarios para su fabricacion:
- Tiempo -> se mide en minutos de maquina/unidades
- Materia prima -> se mide en unidades  
- Mano de obra -> se mide en hora/unidades
- Energia -> se mide en kWh/unidades

## production
Calcula los **tiempos de produccion** y la **materia prima** necesarios para adaptarse a la demanda y recursos.

* **Pedir recursos totales**  
Solicita al usuario el tiempo, materia prima, mano de obra y energía disponibles en la fábrica.

* **Calcular consumos**  
Multiplica los recursos unitarios por la cantidad demandada para obtener los totales de producción.

* **Verificar demanda**  
Compara los consumos calculados contra los recursos disponibles y determina si la fábrica puede cumplir con la demanda.

* **Calcular faltas**  
Si no es posible cumplir la demanda, muestra qué recursos faltan y cuánto se necesitaría para completarla.

* **Producción posible**  
Calcula cuántas unidades de cada producto se pueden fabricar con los recursos disponibles.

* **Optimización de recursos**  
Propone la mejor forma de distribuir los recursos para cumplir la mayor parte de la demanda cuando no es posible cubrirla completamente.

## tools
Se encarga de almacenar el resto de funciones del programa como mensajes predeterminados, busqueda y ordenamiento de arreglos, entre otras cosas no relacionadas con el resto de librerias 
