#include <iostream>
#include <fstream>
#include <string>
#include <bitset>
#include <sstream>

using namespace std;

int main(int argc, char * argv[])
{
	fstream ffile(argv[1], ios::in | ios::binary);
	if (ffile.is_open())
	{
		cout<< "File is opened successfully!!" << endl;
		ffile.seekg(0, ios::end);
		int size = ffile.tellg();
		char *content = new char[2];
		stringstream ss;


		ffile.seekg(0, ios::beg);
		int bytesQuantity = 0;
		ffile.get(*content);
		while (!ffile.eof())
		{
			
			//bitset<16> b(*content);
			int a = *content;
			ss.str("");
			ss << hex << a;
			string res (ss.str());
			//cout << *content << " integer " << a << " bitset is " << b << " HEX is " << res;
			cout << res << " ";
			ffile.get(*content);
			++bytesQuantity;
			//break;
		}
		cout << "-"<< endl << "The size of this file is "<< bytesQuantity;
/*		ffile.read(content, size);
		int pos = 0;		
		while (!ffile.eof())
		{
			cout<< *content;
	                *content++;
			pos++;
			if (pos==size)
				break;
			ffile.seekg(pos, ios::beg);
			
		}
*/
		ffile.close();
		ffile.clear();
	}

	return 0;
}
