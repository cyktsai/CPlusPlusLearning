#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char * argv[])
{
	fstream ffile(argv[1], ios::in);
	if (ffile.is_open())
	{
		cout<< "File is opened successfully!!" << endl;
		ffile.seekg(0, ios::end);
		int size = ffile.tellg();
		char *content = new char();
		char chr[1];
		ffile.seekg(0, ios::beg);
		ffile.read(content, size);
		
		cout<< *content <<endl;
		*content++;
		cout<< *content <<endl;


		ffile.close();
		ffile.clear();
	}

	return 0;
}