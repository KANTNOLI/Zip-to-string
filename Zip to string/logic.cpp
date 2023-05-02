#include "logic.h"

string converting_to_zip(string convert, int size) {
	int count = 1;
	int count2 = 0;
	char char2 = convert[count2];
	string msg = "";

	for (int i = 0; i < size; i++)
	{
		char char1 =  convert[i];
		char2 =  convert[i + 1];

		if (char1 == char2) {
			count++;
		}
		else {
			msg += to_string(count) + char1;
			count = 1;
		}
	}
	


	return msg;
}