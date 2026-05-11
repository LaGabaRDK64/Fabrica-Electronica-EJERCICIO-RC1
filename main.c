#include "products.h"
#include "production.h"
#include "tools.h"
#include "betterio.h"
#include <stdio.h>

int main(){

    int opcmain; /* >>>> Opcion seleccionada para el switch*/

    char nameproducts[5][25]; /*Puede almacenar hasta 5 nombres, con 25 caracteres*/
    float tiempodeproduccion[5]  = {0}; /* >>>> Puedes agregar el tiempo de produccion de cada producto (max >>> 5)*/
    int materiaprima[5] = {0}; /* >>>> Informacion materia prima necesaria para cada producto (de cada producto individual)*/
    float energia_necesaria[5] = {0}; /* >>>> Informacion de la energia total de cada producto (de manera individual)*/
    int numero_de_productos = 0; /* >>> Cantidad de prodcutos almacenadas en el sistema, numero maximo de prodcutos 5*/
    float trabajo[5] = {0}; /* >>>> Numero de trabajo requerido para cada producto (de manera individual)*/

    float tiempoTotal;
    float materiaPrimaTotal;
    float manoObraTotal;
    float energiaTotal;
    int demanda[5] = {0}; /* >>>> Demanda de cada producto (de manera individual)*/

    welcomeMsg();
    wait(1500);

    do
    {
        MENUVIEW();
        opcmain = ENTnumberverification(1,6);
        OPCSELECT(opcmain);

        switch (opcmain){
        case 1:
            /*Añadir producto*/
            if(addProduct(nameproducts, tiempodeproduccion, materiaprima, trabajo, energia_necesaria, &numero_de_productos)!= 0){
                printf("\nError: Se Alcanzo el Limite de Productos\n");
                wait(1000);
                break;
            }
            printf("\nProducto Agregado Correctamente\n");
            pause();

            break;
        case 2:
            
            if(deleteProduct(nameproducts, tiempodeproduccion, materiaprima, trabajo, energia_necesaria, &numero_de_productos)!= 0){
                printf("\nError: No Existe Ningun Producto\n");
                wait(1000);
                break;
            }
            printf("\nProducto Eliminado Correctamente\n");
            pause();
            
            /*Eliminar producto*/
        
            break;

        case 3:
            //Imprimir lista de productos
            if(showProducts(nameproducts, tiempodeproduccion, materiaprima, trabajo, energia_necesaria, &numero_de_productos)!= 0){
                printf("\nError: No Existe Ningun Producto\n");
                wait(1000);
                break;
            }
            wait(1000);
            pause();

            break;

        case 4:            
            /*Editar producto*/
            if(editProduct(nameproducts, tiempodeproduccion, materiaprima, trabajo, energia_necesaria, &numero_de_productos)!=0){
                printf("\nError: no hubo coincidencias o no existen productos\n");
                wait(1000);
                break;
            }

            printf("\nProducto Editado Correctamente\n");
            pause();
            break;
        
        case 5:

             if (numero_de_productos == 0) {

                    printf("No existen productos registrados\n");

                } else {

                    tiempoTotal = calcularTiempoTotal(demanda,
                                                        tiempodeproduccion,
                                                        numero_de_productos);

                    materiaPrimaTotal = calcularMateriaPrimaTotal(demanda,
                                                                  materiaprima,
                                                                  numero_de_productos);

                    manoObraTotal = calcularManoObraTotal(demanda,
                                                          trabajo,
                                                          numero_de_productos);

                    energiaTotal = calcularEnergiaTotal(demanda,
                                                        energia_necesaria,
                                                        numero_de_productos);

                    printf("\n===== RESULTADOS =====\n");

                    printf("Tiempo total: %.2f\n",
                           tiempoTotal);

                    printf("Materia prima total: %.2f\n",
                           materiaPrimaTotal);

                    printf("Mano de obra total: %.2f\n",
                           manoObraTotal);

                    printf("Energia total: %.2f\n",
                           energiaTotal);

                    verificarDemanda(tiempoTotal,
                                      materiaPrimaTotal,
                                      manoObraTotal,
                                      energiaTotal);

            pause();

            /*Calcular eficiencia (dani aca pon tu parte)*/
            break;

        case 6:
            //Mensaje de despedida
            MENSAJESALIR();
            wait(1000);

            break;
        default:
        printf("\nERROR: Opcion Invalida.\n");    

        break;

        }
    }

    } while (opcmain != 6);

    return 0;
}
