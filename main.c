#include "products.h"
#include "production.h"
#include "tools.h"
#include "betterio.h"

int main(){

    int opcmain; /* >>>> Opcion seleccionada para el switch*/

    char nameproducts[5][25]; /*Puede almacenar hasta 5 nombres, con 25 caracteres*/
    float tiempodeproduccion[5]  = {0}; /* >>>> Puedes agregar el tiempo de produccion de cada producto (max >>> 5)*/
    float materiaprima[5] = {0}; /* >>>> Informacion materia prima necesaria para cada producto (de cada producto individual)*/
    float energia_necesaria[5] = {0}; /* >>>> Informacion de la energia total de cada producto (de manera individual)*/
    int numero_de_productos = 0; /* >>> Cantidad de prodcutos almacenadas en el sistema, numero maximo de prodcutos 5*/
    float trabajo[5] = {0}; /* >>>> Numero de trabajo requerido para cada producto (de manera individual)*/

    welcomeMsg();
    wait(750);

    do
    {
        MENUVIEW();
        opcmain = ENTnumberverification(1,5);
        OPCSELECT(opcmain);

        switch (opcmain){
        case 1:
            /*Añadir producto*/
            if(addProduct(nameproducts, tiempodeproduccion, materiaprima, trabajo, energia_necesaria, &numero_de_productos)!= 0){
                printf("Error: Se Alcanzo el Limite de Productos\n");
                wait(500);
                break;
            }
            printf("Producto Agregado Correctamente\n");
            pause();

            break;
        case 2:
            
            if(deleteProduct(nameproducts, tiempodeproduccion, materiaprima, trabajo, energia_necesaria, &numero_de_productos)!= 0){
                printf("Error: No Existe Ningun Producto\n");
                wait(500);
                break;
            }
            pritnf("Producto Eliminado Correctamente\n");
            pause();
            
            /*Eliminar producto*/
        
            break;
        case 3:
            
            pause();
            
            /*Editar producto*/
        
            break;
        
        case 4:

            pause();

            /*Calcular eficiencia (dani aca pon tu parte)*/
            break;

        case 5:
            //Mensaje de despedida

            break;
        default:
        printf("\nERROR: Opcion Invalida.\n");    

        break;

        }

    } while (opcmain != 5);

    return 0;
}
