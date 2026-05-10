#include "products.h"
#include "production.h"
#include "tools.h"
#include "betterio.h"

int main(){

    int opcmain; /* >>>> Opcion seleccionada para el switch*/

    char nameproductmain[15][25]; /*Puede almacenar hasta 15 nombres, con 25 caracteres*/
    float tiempodeproduccion[15]  = {0}; /* >>>> Puedes agregar el tiempo de produccion de cada producto (max >>> 15)*/
    float materiaprima[15] = {0}; /* >>>> Informacion materia prima necesaria para cada producto (de cada producto individual)*/
    float energiatotal[15] = {0}; /* >>>> Informacion de la energia total de cada producto (de manera individual)*/
    int numerosdeproductos = 0; /* >>> Cantidad de prodcutos almacenadas en el sistema, numero maximo de prodcutos 15*/
    float trabajo[15] = {0}; /* >>>> Numero de trabajo requerido para cada producto (de manera individual)*/

    welcomeMsg();

    do
    {
        MENUVIEW();
        opcmain = ENTnumberverification(1,5);
        OPCSELECT(opcmain);
        switch (opcmain)
        {
        case 1:
            
            pause();
        
            /*Añadir producto*/

            break;
        case 2:
            
            pause();
            
            /*Eliminar producto*/
        
            break;
        case 3:
            
            pause();
            
            /*Eliminar producto*/
        
            break;
        
        case 4:

            pause();

            /*Calcular eficiencia (dani aca pon tu parte)*/
        default:

        break;

        }

    } while (opcmain != 4);

    return 0;
}
