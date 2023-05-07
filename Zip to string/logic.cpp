#include "logic.h"

string converting_to_zip(string convert, int sizex, int sizey) {
	int count = 1;
	int count2 = 1;
	char char2 = convert[count2];
	string msg = "";
	int work_size = sizex * sizey;

	for (int i = 0; i < work_size; i++)
	{
		char char1 =  convert[i];
		char2 = convert[i + 1];
		if (char1 == char2)
		{
			count++;
		}
		else if (count != 1) { 
			msg += to_string(count);
			msg += char1;
			count = 1;
		}
		else {
			msg += char1; 
			count = 1; 
		}

		if (count2 == sizex)
		{
			if (sizex - count < sizex and count > 2)
			{

				msg += to_string(count - 1);
				msg += char1;
			}
			else {
				msg += char1;
				count = 1;
			}
			msg += "\n";
			count = 1;
			count2 = 0;
		}
		count2++;
	}

	return msg;
}