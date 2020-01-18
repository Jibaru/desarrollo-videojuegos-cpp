File* file_exp1 = FileManager::load_file("explosion1.tif");
File* file_exp2 = FileManager::load_file("explosion2.tif");

Image* explosion1 = ImageManager::get_image_from_file(file_exp1);
Image* explosion2 = ImageManager::get_image_from_file(file_exp2);

Screen* screen = Screen::get_screen();

screen->add_element(explosion1, x, y);
screen->add_element(explosion2, x+2, y+2);

// ...

/* more configuration */

// ...

screen->draw();