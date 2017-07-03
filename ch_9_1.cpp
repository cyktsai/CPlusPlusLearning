#include <iostream>
#include "Sales_item.h"
#include <vector>
#include <list>
#include <deque>
#include <string>

using namespace std;

int main()
{
	vector<string> svec;
	// list<int> ilist;
	deque<Sales_item> items;

	vector<int> ivec;
	vector<int> ivec2(ivec);

//	list<string> slist(svec.begin(), svec.end());
	//extern unsigned get_word_count(const string &file_name);
	//vector<string> svec(get_word_count("Tmp.txt"));
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

	int ia[7] = {0,1,1,2,3,5,8};
	string sa[6] = {"Fort Sumter","Manassas","Perryville","Vicksburg","Meridian","Chancellorsville",};
	vector<string> svec1(sa, sa+6);
	list<int> ilist1(ia+4, ia+6);
	vector<int> ivec1(ia, ia+8);
 	
 	list< deque<int> > lideques(10);

 	list<int> lst1;
 	list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
 	while (iter1 != iter2)
 	{
 		iter1++;

 	}
	return 0;
}