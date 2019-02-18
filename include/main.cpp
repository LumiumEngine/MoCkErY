#include <clip/clip.h>
#include <iostream>
#include <locale>

int main()
{
	std::string value;
	clip::get_text(value);
	for (int i = 0; i < value.size(); i++)
	{
		if (i % 2 == 0)
			value[i] = tolower(value[i]);
		else
			value[i] = toupper(value[i]);
	}
	clip::set_text(value);
	return 1;
}