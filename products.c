#include "products.h"
#include "tools.h"

int showProducts(char names[][25], float production_time[], int raw_material[], int labour[], float energy[], int *num_pdt){

    if(*num_pdt == 0){

        return 1;
    }

    printf("=======================================\n");
    printf("               PRODUCTOS               \n");
    printf("=======================================\n");

    printf("%-4s %-25s %-20s %-20s %-20s %-20s\n", "Num", "PRODUCTOS", "TIEMPO (min/u)", "MATERIA PRIMA (u)", "MANO DE OBRA (h/u)", "ENERGIA (kWh/u)");

    for(int i=0; i<*num_pdt; i++){

        printf(" (%d) %-25s %-20f %-20d %-20d %-20f\n",
        i,
        names[i],
        production_time[i],
        raw_material[i],
        labour[i],
        energy[i]            
    );

    }

    return 0;

}

int addProduct(char names[][25], float production_time[], int raw_material[], int labour[], float energy[], int *num_pdt){

    if(*num_pdt == 5){
        return 1;

    }

    //guardar los datos en el siguiente espacio segun num_pdt
    //pedir nombre del producto
    

    //pedir el tiempo necesario para su produccion


    //pedir la materia prima necesaria para su produccion


    //pedir la mano de obra necesaria para su produccion


    // pedir la energia necesaria para su produccion

    //aumentar en 1 la cantidad de productos
    *num_pdt++;

    return 0;

}

int deleteProduct(char names[][25], float production_time[], int raw_material[], int labour[], float energy[], int *num_pdt){

    if(*num_pdt == 0){
        return 1;

    }

    //presentar un menu con todos los productos y sus caracteristicas
    showProducts(names, production_time, raw_material, labour, energy, num_pdt);

    //pedir el indice de uno de los productos


    //eliminar dicho producto moviendo todos los datos posteriores un indice a la izquierda (funcion incluida en tools.h)



    return 0;

}

int editProduct(char names[][25], float production_time[], int raw_material[], int labour[], float energy[], int *num_pdt){

    if(*num_pdt == 0){
        return 1;

    }

    //presentar un menu con todos los productos y sus caracteristicas
    showProducts(names, production_time, raw_material, labour, energy, num_pdt);

    //pedir el indice de uno de los productos


    //mostrar un menu con todos los datos del producto y solicitar el dato a cambiar


    // actualizar los datos 


    return 0;

}