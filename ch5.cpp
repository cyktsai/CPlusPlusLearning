#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string> *pVec;
	vector<string*> ppVec;
	string str1 = "string 1";
	string *pStr1 = &str1;
	ppVec.push_back(pStr1);
	pVec->push_back(ppVec);
	//cout<<*pVec[0];
	return 0;
}