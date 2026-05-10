#ifndef products_h
#define products_h

// Imprime una tabla con la lista de productos y sus caracteristicas
int showProducts(char names[][25], float production_time[], int raw_material[], float labour[], float energy[], int *num_pdt);

// Añade datos de los productos y aumenta en 1 el numerode productos
int addProduct(char names[][25], float production_time[], int raw_material[], float labour[], float energy[], int *num_pdt);

// Elimina y reorganiza las listas de productos
int deleteProduct(char names[][25], float production_time[], int raw_material[], float labour[], float energy[], int *num_pdt);

// Edita valores de las listas de productos
int editProduct(char names[][25], float production_time[], int raw_material[], float labour[], float energy[], int *num_pdt);

void showProduct(char names[][25], float production_time[], int raw_material[], float labour[], float energy[], int indx);

#endif