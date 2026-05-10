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
    printf("Nombre del Producto >>> ");
    

    //pedir el tiempo necesario para su produccion
    printf("Tiempo de Produccion (min) >>> ");

    //pedir la materia prima necesaria para su produccion
    printf("Materia Prima (unidades) >>> ");

    //pedir la mano de obra necesaria para su produccion
    printf("Mano de Obra (h/pdt) >>> ");


    // pedir la energia necesaria para su produccion
    printf("Energia Necesaria (kWh/u) >>> ");

    //aumentar en 1 la cantidad de productos
    *num_pdt++;

    return 0;

}

int deleteProduct(char names[][25], float production_time[], int raw_material[], int labour[], float energy[], int *num_pdt){

    if(*num_pdt == 0){
        return 1;

    }

    int indx;

    //presentar un menu con todos los productos y sus caracteristicas
    showProducts(names, production_time, raw_material, labour, energy, num_pdt);

    //pedir el indice de uno de los productos
    printf("Ingrese el indice del producto\n");
    printf("Producto >>> ");


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

int editProduct(char names[][25], float production_time[], int raw_material[], int labour[], float energy[], int *num_pdt){

    if(*num_pdt == 0){
        return 1;

    }

    //presentar un menu con todos los productos y sus caracteristicas
    showProducts(names, production_time, raw_material, labour, energy, num_pdt);

    //pedir el indice de uno de los productos
    int indx;
    printf("Ingrese el indice del producto\n");
    printf("Producto >>> ");

    //mostrar un menu con todos los datos del producto y solicitar el dato a cambiar
    int option= 0;
    printf("\n(1) Nombre\n(2) Tiempo de Produccion\n(3) Materia Prima\n(4) Mano de Obra\n(5) Energia\n");
    printf("Opcion >>> ");

    // actualizar los datos
    switch (option){
    case 1:
        printf("Nombre Actual >>> %-20s\n", names[indx]);
        printf("Nuevo Nombre >>> ");

        break;
    case 2:
        printf("Tiempo Actual >>> %.2f\n", production_time[indx]);
        printf("Nuevo Valor >>> ");

        break;
    case 3:
        printf("Unidades de Materia Prima Actual >>> %d\n", raw_material[indx]);
        printf("Nuevo Valor >>> ");

        break;
    case 4:
        printf("Mano de Obra Actual >>> %d\n", labour[indx]);
        printf("Nuevo Valor >>> ");

        break;
    case 5:
        printf("Energia Necesaria Actual >>> %.2f\n", energy[indx]);
        printf("Nuevo Valor >>> ");

        break;
    default:
        printf("\nError: Opcion Invalida\n");
        
        break;
    } 


    return 0;

}