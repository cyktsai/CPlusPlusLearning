#include <iostream>
#include "Sales_item.h"
#include <vector>
#include <list>
#include <deque>
#include <string>

using namespace std;

int main()
{
	//vector<string> svec;
	// list<int> ilist;
	deque<Sales_item> items;

	vector<int> ivec;
	vector<int> ivec2(ivec);

//	list<string> slist(svec.begin(), svec.end());
	extern unsigned get_word_count(const string &file_name);
	vector<string> svec(get_word_count("Tmp.txt"));
	vector<string>::iterator mid = svec.begin() + svec.size()/2;

	deque<string> front(svec.begin(), mid);
	deque<string> back(mid, svec.end());
/*
	char *words[] = {"stately","plump","buck","mulligan"};
	size_t words_size = sizeof(words)/sizeof(char*);
	list<string> words2(words, words+words_size);
*/
	const list<int>::size_type list_size = 64;
	list<string> slist(list_size, "eh?");

	list<int> ilist(list_size);

	
	return 0;
}