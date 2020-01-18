class Entidad{
public:
	//Funcionalidad de la lista
	Entidad* getSiguiente();
	void eliminar ();
	void insertar (Entidad* pNuevo);

private:
	// Puntero a la cabeza de la lista
	Entidad *_pSiguiente;
};