#include <iostream>
#include <boost/filesystem.hpp>

using namespace std;
using namespace boost::filesystem;

void list_directory (const path& dir, const int& tabs);

int main (int argc, char* argv[]) {
	if (argc < 2) {
		cout << "Uso: ./exec/Simple	<path>" << endl;
		return 1;
	}
	
	path p(argv[1]);	// Instancia de clase boost::path.

	if (is_regular_file(p))
		cout << "	" << p << "	" << file_size(p) << " B" << endl;
	else if (is_directory(p)) // Listado recursivo.
		list_directory(p, 0);
	
	return 0;
}

void
print_tabs (const int& tabs) {
	for (int i = 0; i < tabs; ++i) cout << "\t";
}

void list_directory
(const path& p, const int& tabs) {
	vector<path> paths;
	// directory iterator para iterar sobre los contenidos del dir.
	copy(directory_iterator(p), directory_iterator(),
	back_inserter(paths));
	sort(paths.begin(), paths.end()); // Se fuerza el orden.
	
	// Pretty print ;-)
	for (vector<path>::const_iterator it = paths.begin();
		it != paths.end(); ++it) {
		if (is_directory(*it)) {
			print_tabs(tabs);
			cout << *it << endl;
			list_directory(*it, (tabs + 1));
		}
		else if (is_regular_file(*it)) {
			print_tabs(tabs);
			cout << (*it) << " " << file_size(*it) << " B" << endl;
		}
	}
}