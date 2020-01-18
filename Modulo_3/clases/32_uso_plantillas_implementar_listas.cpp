// 32_uso_plantillas_implementar_listas.cpp
template <class T>
class NodoLista{

public:
	NodoLista (T datos);
	T & getDatos();
	NodoLista* siguiente();
private:
	T _datos;
};

template <class T>
class Lista{

public:
	NodoLista<T> getCabeza();
	void insertarFinal (T datos);
	// Resto de funcionalidad...
private:
	NodoLista<T>* _cabeza;

};
