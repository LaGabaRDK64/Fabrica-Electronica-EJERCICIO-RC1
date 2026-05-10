#include "products.h"
#include "tools.h"
#include "betterio.h"
#include <stdio.h>

int showProducts(char names[][25], float production_time[], int raw_material[], float labour[], float energy[], int *num_pdt){

    if(*num_pdt == 0){

        return 1;
    }

    printf("=====================================================================================================================\n");
    printf("                                                    PRODUCTOS\n");
    printf("=====================================================================================================================\n");

    printf("%-4s  %-25s %-20s %-20s %-20s %-20s\n", "Idc", "PRODUCTOS", "TIEMPO (min/u)", "MATERIA PRIMA (u)", "MANO DE OBRA (h/u)", "ENERGIA (kWh/u)");

    for(int i=0; i<*num_pdt; i++){

        printf(" (%d)  %-25s %-20.3f %-20d %-20.3f %-20.3f\n",
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

int addProduct(char names[][25], float production_time[], int raw_material[], float labour[], float energy[], int *num_pdt){

    if(*num_pdt == 5){
        return 1;

    }

    //guardar los datos en el siguiente espacio segun num_pdt
    //pedir nombre del producto
    printf("Nombre del Producto >>> ");
    stringverification(names[*num_pdt]);

    //pedir el tiempo necesario para su produccion
    printf("Tiempo de Produccion (min) >>> ");
    production_time[*num_pdt]= DECnumberverification(0.1, 600.0);

    //pedir la materia prima necesaria para su produccion
    printf("Materia Prima (unidades) >>> ");
    raw_material[*num_pdt] = ENTnumberverification(1, 1000);

    //pedir la mano de obra necesaria para su produccion
    printf("Mano de Obra (h/pdt) >>> ");
    labour[*num_pdt]= ENTnumberverification(0.1, 20.0);

    // pedir la energia necesaria para su produccion
    printf("Energia Necesaria (kWh/u) >>> ");
    energy[*num_pdt]= DECnumberverification(0.1, 5000.0);

    //aumentar en 1 la cantidad de productos
    (*num_pdt)++;

    return 0;

}

int deleteProduct(char names[][25], float production_time[], int raw_material[], float labour[], float energy[], int *num_pdt){

    if(*num_pdt == 0){
        return 1;

    }

    int indx;

    //presentar un menu con todos los productos y sus caracteristicas
    showProducts(names, production_time, raw_material, labour, energy, num_pdt);

    //pedir el indice de uno de los productos
    printf("\nIngrese el indice del producto a eliminar\n");
    printf("Producto >>> ");
    indx= ENTnumberverification(0, (*num_pdt)-1);

    //eliminar dicho producto moviendo todos los datos posteriores un indice a la izquierda (funcion incluida en tools.h)
    deleteStrIndx(names, indx, *num_pdt);
    deleteFloatIndx(production_time, indx, *num_pdt);
    deleteIntIndx(raw_material, indx, *num_pdt);
    deleteIntIndx(labour, indx, *num_pdt);
    deleteFloatIndx(energy, indx, *num_pdt);

    //disminuir la cantidad de productos
    (*num_pdt)--;

    return 0;

}

int editProduct(char names[][25], float production_time[], int raw_material[], float labour[], float energy[], int *num_pdt){

    if(*num_pdt == 0){
        return 1;

    }

    //permitir al usuario buscar un producto en especifico y guardar el indice del producto elegido
    int indx= stringShearch(names, *num_pdt);

    //verificar si hubo coincidencias
    if(indx < 0){

        return -1;
    }

    showProduct(names, production_time, raw_material, labour, energy, indx); //mostrar el producto seleccionado para editar sus datos
    wait(1750);

    //mostrar un menu con todos los datos de producto y solicitar el dato a cambiar
    int option= 0;
    printf("\n Ingrese el dato del producto que desea cambiar\n");
    printf("\n(1) Nombre\n(2) Tiempo de Produccion\n(3) Materia Prima\n(4) Mano de Obra\n(5) Energia\n");
    printf("Opcion >>> ");
    option= ENTnumberverification(1, 5);

    // actualizar los datos
    switch (option){
    case 1:
        printf("Nombre Actual >>> %-20s\n", names[indx]);
        printf("Nuevo Nombre >>> ");
        stringverification(names[indx]);

        break;
    case 2:
        printf("Tiempo Actual >>> %.2f\n", production_time[indx]);
        printf("Nuevo Valor >>> ");
        production_time[indx]= DECnumberverification(0.1, 600.0);

        break;
    case 3:
        printf("Unidades de Materia Prima Actual >>> %d\n", raw_material[indx]);
        printf("Nuevo Valor >>> ");
        raw_material[indx] = ENTnumberverification(1, 1000);

        break;
    case 4:
        printf("Mano de Obra Actual >>> %.2f\n", labour[indx]);
        printf("Nuevo Valor >>> ");
        labour[indx]= DECnumberverification(0.1, 20.0);

        break;
    case 5:
        printf("Energia Necesaria Actual >>> %.2f\n", energy[indx]);
        printf("Nuevo Valor >>> ");
         energy[indx]= DECnumberverification(0.1, 5000.0);

        break;
    default:
        printf("\nError: Opcion Invalida\n");
        
        break;
    } 

    return 0;
}

void showProduct(char names[][25], float production_time[], int raw_material[], float labour[], float energy[], int indx){

    printf("\n=======================================");
    printf("\n\t%-25s\n", names[indx]);
    printf("=======================================\n");
    printf("   Tiempo      Materia Prima      Mano de Obra     Energia\n");
    printf("---------------------------------------\n");
    printf("    %.2f          %d                 %.2f           %.2f\n", 
                production_time[indx],
                raw_material[indx],
                labour[indx],
                energy[indx]);

}