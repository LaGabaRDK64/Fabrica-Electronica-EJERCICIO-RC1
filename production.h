#ifndef profuction_h
#define production_h

// TIEMPO TOTAL
// devuelve el tiempo total requerido para producir una cantidad dada de productos, considerando el tiempo por unidad de cada producto.
float calcularTiempoTotal(int demanda[], float tiempoUnidad[], int totalProductos);

// MATERIA PRIMA TOTAL
int calcularMateriaPrimaTotal(int demanda[], int materiaPrimaUnidad[], int totalProductos);

// MANO DE OBRA TOTAL
// devuelve la cantidad total de mano de obra requerida para producir una cantidad dada de productos, considerando la mano de obra por unidad de cada producto.
float calcularManoObraTotal(int demanda[], float manoObraUnidad[], int totalProductos);

// ENERGIA TOTAL
// devuelve la cantidad total de energía requerida para producir una cantidad dada de productos, considerando la energía por unidad de cada producto.
float calcularEnergiaTotal(int demanda[], float energiaUnidad[], int totalProductos);   

// RECURSOS FALTANTES
// devuelve la cantidad de recurso faltante para cumplir con la demanda, considerando el recurso requerido y el recurso disponible.

// PRODUCCION MAXIMA POSIBLE
// devuelve la cantidad máxima de productos que se pueden producir con los recursos disponibles, considerando el recurso necesario por unidad de producto.
int produccionMaximaPosible(float recursoDisponible, float recursoPorUnidad);

// PORCENTAJE DEMANDA CUBIERTA
// devuelve el porcentaje de la demanda que se ha podido cubrir con la producción real, considerando la demanda total.
float porcentajeDemandaCubierta(int produccionReal, int demanda);

// EFICIENCIA DE USO
// devuelve el porcentaje de eficiencia en el uso de un recurso, considerando la cantidad de recurso usado y la cantidad de recurso disponible.
float eficienciaUsoRecurso(float usado, float disponible);

// VERIFICAR DEMANDA
// verifica si la demanda puede ser cumplida con los recursos disponibles, considerando el tiempo total, la materia prima total, la mano de obra total y la energía total requerida para cumplir con la demanda.
void verificarDemanda(float tiempoTotal, int materiaPrimaTotal, float manoObraTotal, float energiaTotal);

//solicitar recursos disponibles
void solicitarRecursosDisponibles(float *tiempoDisponible, float *materiaDisponible, float *manoObraDisponible, float *energiaDisponible);

//Imprimir resultados
void imprimirResultados(char names[][25], float production_time[], int raw_material[], float labour[], float energy[], int *num_pdt, float tiempoTotal, float materiaPrimaTotal, float manoObraTotal, float energiaTotal);

#endif