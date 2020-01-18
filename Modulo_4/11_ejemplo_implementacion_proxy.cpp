class Graphic{
public:
	void display() = 0;
};

class Image : public Graphic{
public:
	void load(){
		...
		/* perform a hard file */
		...
	}

	void display(){
		...
		/* perform display operation */
		...
	}
};

class ImageProxy : public Graphic{
private:
	Image* _image;
public:
	void display(){
		if(not _image){
			_image = new Iamge();
			_image.load();
		}
		_image->display();
	}
};

/* Client */
...
Graphic image = new ImageProxy();
image->display(); // Loading and display
image->display(); // just display
image->display(); // just display
