class ObjectScene{
public:
	void accept(SceneVisitor* v){ v->visitObject(this); };

};

class Scene{
private:
	vector<ObjectScene> _objects;

public:
	void accept(SceneVisitor* v){
		for(vector<ObjectScene>::iterator ob = _objects.begin();
			ob != _objects.end(); ob++){
			v->accept(v);
			v->visitScene(this);
		}
	};
};

class SceneVisitor{
	virtual void visitObject(ObjectScene* ob) = 0;
	virtual void visitScene(Scene* scene) = 0;
};

class NameVisitor : public SceneVisitor{
private:
	vector<string> _names;
public:
	void visitObject(ObjectScene* ob){
		_names.push_back(ob->name);
	};
	void visitScene(Scene* scene){
		cout << "The scene '" << scene->name << "' has following objects: " << endl;
		for(vector<string>::iterator it = _names.begin();
			it != _names.end(); it++){
			cout << *it << endl;
		}
	};
};

class BombVisitor : public SceneVisitor {
private:
	Bomg _bomb;
public:
	BombVisitor(Bomb bomb) : _bomb(bomb);
	void visitObject(ObjectScene* ob){
		Point new_pos = calculateNewPosition(ob->position, ob->weight, _bomb->intensity);
		ob->position = new_pos;
	};
	void visitScene(ObjectScene* scene){};
};

Scene* scene = createScene();
SceneVisitor* name_visitor = new NameVisitor();
scene->accept(name_visitor);

/* ... */

/* bomb explosion occurs */
SceneVisitor* bomb_visitor = new BombVisitor(bomb);
scene->accept(bomb_visitor);