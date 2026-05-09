#ifndef tools_h
#define tools_h

// Da una pausa al programa y pide una entrada para continuar
void pause();

// Da una pausa y continua despues de "wait_time" milisegundos
void wait(int wait_time);

// Imprime el mensaje de bienvenida al usuario
void welcomeMsg();

// Elimina un elemento de un arreglo de enteros unidimensional
int deleteIntIndx(int arr[], int index, int *arrsize);

// Elimina un elemento de un arreglo de flotantes unidimensional
int deleteFloatIndx(float arr[], int index, int *arrsize);

// Elimina una cadena de caracteres dentro de una matriz de caracteres
int deleteStrIndx(char str[][25], int index, int *arrsize);


#endif