class List : public Struct 
{
public:
	void add(const Object& ob){ /* add element in a list */}
	void remove(const Object& ob){ /*remove element in  a list*/ }
	Object get_at(const int index) { /*get list[index] element*/ }

	/* more access methods */

	voi iterator(const Object& ob){
		return new ListIterator(this);
	}
};

class ListIterator : public Iterator{

private:
	int _currentIndex;
	List _list;

public:
	ListIterator(List* list) : _currentIndex(0), _list(list) {}
	Object next(){
		if(isDone()){
			throw new IteratorOutOfBounds();
		}
		Object retval = _list->get_at(_currentIndex);
		_currentIndex++;
		return retval;
	};

	Object first(){
		return _list->get_at(0);
	};

	bool isDone(){
		return _currentIndex > _list->length();
	};
};

/* client using iterator */

List list = new List();
ListIterator it = list.iterator();

for(Object ob = it.first(); not it.isDone(); it.next()){
	// do the loop using ob
}