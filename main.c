#include "products.h"
#include "production.h"
#include "tools.h"
#include "betterio.h"

int main(){

    int opcmain; /* >>>> Opcion seleccionada para el switch*/

    char nameproductmain[5][25]; /*Puede almacenar hasta 5 nombres, con 25 caracteres*/
    float tiempodeproduccion[5]  = {0}; /* >>>> Puedes agregar el tiempo de produccion de cada producto (max >>> 5)*/
    float materiaprima[5] = {0}; /* >>>> Informacion materia prima necesaria para cada producto (de cada producto individual)*/
    float energiatotal[5] = {0}; /* >>>> Informacion de la energia total de cada producto (de manera individual)*/
    int numerosdeproductos = 0; /* >>> Cantidad de prodcutos almacenadas en el sistema, numero maximo de prodcutos 5*/
    float trabajo[5] = {0}; /* >>>> Numero de trabajo requerido para cada producto (de manera individual)*/

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
