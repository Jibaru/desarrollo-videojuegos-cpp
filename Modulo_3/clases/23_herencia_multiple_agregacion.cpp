
class ObjetoJuego
{
public:
	bool recibirMensaje (const Mensaje &m);

	ObjetoJuego* getPadre();
	ObjetoJuego* getPrimerHijo();

	//...
private:
	ReceptorMensajes* _receptorMensajes;
	NodoArbol* _nodoArbol;

};

inline bool recibirMensaje (const Mensaje &m){
	return _receptorMensajes->recibirMensaje(m);
}

inline ObjetoJuego* getPadre(){
	return _nodoArbol->getPadre();
}

inline ObjetoJuego* getPrimerHijo(){
	return _nodoArbol->getPrimerHijo();
}