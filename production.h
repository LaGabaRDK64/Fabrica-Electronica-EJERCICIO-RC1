#ifndef profuction_h
#define production_h

// TIEMPO TOTAL
float calcularTiempoTotal(int demanda[], float tiempoUnidad[], int totalProductos);

// MATERIA PRIMA TOTAL
int calcularMateriaPrimaTotal(int demanda[], int materiaPrimaUnidad[], int totalProductos);

// MANO DE OBRA TOTAL
float calcularManoObraTotal(int demanda[], float manoObraUnidad[], int totalProductos);

// ENERGIA TOTAL
float calcularEnergiaTotal(int demanda[], float energiaUnidad[], int totalProductos);   

// RECURSOS FALTANTES
float calcularRecursosFaltantes(float requerido, float disponible);

// PRODUCCION MAXIMA POSIBLE
int produccionMaximaPosible(float recursoDisponible, float recursoPorUnidad);

// PORCENTAJE DEMANDA CUBIERTA
float porcentajeDemandaCubierta(int produccionReal, int demanda);

// EFICIENCIA DE USO
float eficienciaUsoRecurso(float usado, float disponible);

// VERIFICAR DEMANDA
void verificarDemanda(float tiempoTotal, int materiaPrimaTotal, float manoObraTotal, float energiaTotal);

//solicitar recursos disponibles
void solicitarRecursosDisponibles(float *tiempoDisponible, float *materiaDisponible, float *manoObraDisponible, float *energiaDisponible);

//Imprimir resultados
void imprimirResultados(char names[][25], float production_time[], int raw_material[], float labour[], float energy[], int *num_pdt, float tiempoTotal, float materiaPrimaTotal, float manoObraTotal, float energiaTotal);

#endif