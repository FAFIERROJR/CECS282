#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(){
	list<int> thelist;
	char cont;
	do{
		cout<< "Enter an integer" << endl;
		int in;
		cin >> in;
		thelist.push_back(in);
		cout << "Enter another? (y/n)" << endl;
		cin >> cont;
	}while(cont == 'y');

	for(iter1 = thelist.begin(); iter1 != thelist.end(); iter1++){
		cout << *iter1;
	}

	cout << endl;

	list<int>::iterator iter1;
	list<int>::iterator iter2;
	iter1 = thelist.begin();
	iter2 = thelist.end();
	iter2--;
	
	for(int i = 0; i < thelist.size() /2; i++){
		cout << "swapping: " << *iter1 << " " << *iter2 << endl;
		swap(*iter1, *iter2);
		iter1++;
		iter2--;
	}

	for(iter1 = thelist.begin(); iter1 != thelist.end(); iter1++){
		cout << *iter1;
	}

	cout << endl;

	return 0;
}
	