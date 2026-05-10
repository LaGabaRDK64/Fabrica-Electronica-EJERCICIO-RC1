#include "tools.h"
#include "betterio.h"
#include <stdio.h>
#include <windows.h>
#include <string.h>

void pause(){

    printf("\nIngrese una tecla para continuar...\n");
    getchar();

}

void wait(int wait_time){

    Sleep(wait_time);

}

void welcomeMsg(){

    printf("=============================\n");
    printf("           BIENVENIDO        \n");
    printf("=============================\n");

    printf("Este programa le ayudara a verificar \nsi los tiempos de fabricacion y recursos \nson suficientes para su produccion\n");

    wait(750);

}

int deleteIntIndx(int arr[], int index, int arrsize){

    if(index < 0 || index >= arrsize){
        return 1;

    }

    for(int i= index; i<(arrsize-1); i++){

        arr[i]= arr[i+1];

    }

    return 0;

}

int deleteFloatIndx(float arr[], int index, int arrsize){

    if(index < 0 || index >= arrsize){
        return 1;

    }

    for(int i= index; i<(arrsize-1); i++){

        arr[i]= arr[i+1];

    }

    return 0;

}

int deleteStrIndx(char str[][25], int index, int arrsize){

    if(index < 0 || index >= arrsize){
        return 1;

    }

    for(int i= index; i<(arrsize-1); i++){

        strcpy(str[i], str[i+1]);

    }

    return 0;

}

void strTolower(char string[], char new_str[]) {
    int i = 0;
    // Convertir cada caracter a minuscula y guardarlo en new_str
    while(string[i]) {
        new_str[i] = tolower((unsigned char)string[i]);
        i++;
    }
    // AGREGRAR al nuevo string el caracter '\0'
    new_str[i] = '\0'; 
}

int stringShearch(char names[][25], int arrsize){

    // Variables
    char search[25]= "                         ";
    int results_index[10];  //lista de coincidencias
    int k= 0, differences; //numero de productos coincidentes //despues de la comparacion: el numero de coincidencias
    char normalized_search[25];
    char normalized_product_name[25]; //copia y cambia del nombre de los productos
    int limit_of_differences;
    int option=0;

    printf("\n ============================\n");
    printf("     BUSQUEDA DE PRODUCTOS   \n");
    printf(" ============================\n\n");
    printf("Producto: _______________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
    stringverification(search);
    strTolower(search, normalized_search); //normalizar la busqueda

    // buscar coincidencias entre subcadenas y por caracteres
    for(int i=0; i<arrsize; i++){

        differences= 0;
        strTolower(names[i], normalized_product_name); //normalizar

        // comparar subcadenas //
       if((strstr(normalized_product_name, normalized_search) != NULL) ||(strstr(normalized_search, normalized_product_name) != NULL) ){
            if(k < 10){
                    results_index[k++]= i;

            }
        }else{ // comparar por caracteres //
            limit_of_differences= strlen(normalized_search)*0.3;
            if (limit_of_differences <= 0) limit_of_differences=1;
            
            for(int j = 0; j < strlen(normalized_search); j++){

                if(normalized_product_name[i] != normalized_search[i]){
                    differences++;
                }
            }
            
            if(differences <= limit_of_differences && k < 10){

                results_index[k++]= i;

            }
        }
    }

    //Mostrar Resultados De Busqueda
    if(k == 0){

        printf("\nNo Se Encontraron Coincidencias.\n");
        return -1;

    } else{

        printf("Lista de Coincidencias: \n");
        for(int i= 0; i<k; i++ ){

            printf(" (%d) %-25s \n", results_index[i],names[results_index[i]]);

        }
        printf(" Producto >>> ");
        option= ENTnumberverification(0, 5);

        return option;
    
    }
}
/*Menu informacion : añadir productom eliminar producto calcular eficiencia y salir*/

void MENUVIEW(){

    int numblocklarge = 30;
    char OptionsTEXT[4][50] = {
        "Añadir Producto",
        "Eliminar Producto",
        "Calcular Eficiencia",
        "Salir"
    };

    for (int i = 0; i < numblocklarge; i++)
    {
        printf("=");
    }

    printf("\n");

    for(int i = 0; i < 4; i++){
        printf("==");
        printf("   ");
        printf("%d. %s", i + 1, OptionsTEXT[i]);
        printf("   ");
        printf("==");
    }

    for (int i = 0; i < numblocklarge; i++)
    {
        printf("=");
    }

    printf("\n");
    
}

void OPCSELECT(int opc){

    int opcsekect = opc;

    printf("\n---------. Usted ha seleccionado la opcion numero %d .---------\n\n");
    
}