#include "logic.h"


int main() {
	string convetirng_string;
	int sizex;
	int sizey;
	cout << "Input Y size picture: ";
	cin >> sizey;
	getchar();
	for (int i = 0; i < sizey; i++)
	{
		cout << "Input your picture (w/b): ";
		getline(cin, convetirng_string);
	}



	cout << "Input size picture: ";
	cin >> sizex;


	cout << converting_to_zip(convetirng_string, sizex);

	return 0;
}