#include "logic.h"


int main() {
	string convetirng_string;
	string string;
	int sizex, sizey;
	cout << "Input Y size picture: ";
	cin >> sizey;
	cout << "Input X size picture: ";
	cin >> sizex;
	getchar();

	cout << "Input your picture (w/b): " << endl;
	for (int i = 0; i < sizey; i++)
	{
		getline(cin, string);
		convetirng_string += string;
	}

	cout << "Converting your picture to RLE\n" + converting_to_zip(convetirng_string, sizex, sizey);

	return 0;
}