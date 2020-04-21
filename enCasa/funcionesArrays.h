/** \brief Inicio el array dandole un valor
 *
 * \param array[] int Recibe un valor de un array
 * \param cantidad int  Recibe la cantidad del array
 * \return void
 *
 */
void IncializarArray(int array[], int cantidad);
/** \brief Muestra todos los elementos de un array
 *
 * \param array[] int Recibe un valor del array
 * \param cantidad int  Recibe la cantidad del array
 * \return void
 *
 */
void MostrarElementosArray(int array[],int cantidad);

/** \brief Muestra los elementos que se encuentra vacion y se pueden cargar
 *
 * \param array[] int Recibe el array con el que se trabajs
 * \param cantidad int Recibe la cantidad del array
 * \param valor int Recibe la iniacilizacion del array
 * \return void
 *
 */
void MostrarElementosVacioArray(int array[],int cantidad, int valor):

/** \brief Muestra solamente los elementos que se cargaron dentro del array
 *
 * \param array[] int Recibe un array
 * \param cantidad int  Recibe la cantidad del array
 * \param valor int Recibe la inicializacion del array
 * \return void
 *
 */
void MostarElementosCargadosArray(int array[],int cantidad, int valor)

/** \brief  Cuenta la cantidad de numeros que se ingresaron dentro del array
 *
 * \param array[] int Recibe el array con el que se trabaja
 * \param cantidad int  Recibe la cantidad del array
 * \return int Retorna la cantidad de numeros ingresados
 *
 */
int SacarCantidadDeNumeros(int array[],int cantidad);

/** \brief Realiza la suma de todo los numeros ingresados
 *
 * \param array[] int Recibe el array con el que se trabaja
 * \param cantidad int  Recibe la cantidad del array
 * \return int  Retorna la suma de los numeros ingresados
 *
 */
int SacarSumaAcumulada(int array[], int cantidad);

/** \brief  Saca el valor maximo de los numeros ingresados dentro del array
 *
 * \param array[] int   Recibe el array con el cual se esta trabajando
 * \param cantidad int  Recibe la cantidad del array
 * \return int  Retorna el valor maximo del array
 *
 */
int SacarValorMaximo(int array[],int cantidad);

/** \brief Saca el valor minimo de los numeros ingresados dentro del array
 *
 * \param array[] int Recibe el array con el que se trabaja
 * \param cantidad int  Recibe la cantidad de array
 * \return int  Retorna el valor minimo del array
 *
 */
int sacaValorMinimo(int array[], int cantidad);

/** \brief  Realiza el promedio de entre la suma de los numeros ingresados y la cantidad de los numeros que se ingresaron
 *
 * \param array[] int Recibe el array con el que se trabaja
 * \param cantidad int  Recibe la cantidad del array
 * \return float    Retorna el promedio del array
 *
 */
float SacarPromedio(int array[],int cantidad);

/** \brief Saca la cantidad de numeros pares que se ingresaron dentro del array
 *
 * \param array[] int   Recibe el array con el que se esta trabajando
 * \param cantidad int  Recibe la cantidad del array
 * \return int  Retorna la cantidad de numeros pares
 *
 */
int SacarNumerosPares(int array[], int cantidad);

/** \brief Realiza la busqueda de un indice vacio dentro del array para darle un numero
 *
 * \param array[] Recibe el array con el que se estaba trabajando
 * \param cantidad int  Recibe la cantidad del array
 * \param valor int recibe el valor de la inicializacion del array
 * \return int  retorna el indice vacio del array
 *
 */
int BuscarLibre(array[],int cantidad, int valor);

/** \brief Se encarga de cargar un numero dentro del indice vacio de un array
 *
 * \param array[] int recibe el array con el cual se trabaja
* \param cantidad int   recibe la cantidad del array
 * \return int  retorna
 *
 */
int CargarNumero(int array[], int cantidad);

/** \brief Ordena los numeros de un array de menor a mayor
 *
 * \param array[] int   recibe el array  con el cual se est trabajando
 * \param cantidad int  recibe la cantidad del array
 * \return void
 *
 */
void OrdenNumerosAscendente(int array[],int cantidad);

/** \brief Ordena de los numeros de un array de mayor a menor
 *
 * \param array[] int    recibe el array con  el cual se esta trabajandoo
 * \param cantidad int  recibe la cantidad del array
 * \return void
 *
 */
void OrdenNumerosDescendente(int array[],int cantidad);
