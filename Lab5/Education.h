#ifndef H_EDUCATION
#define H_EDUCATION

#include <iostream>
using namespace std;

class Education{
public:
	void setDegree(string d);
	string getDegree() const;
	void setMajor(string m);
	string getMajor() const;
	void setResearch(int r);
	int getResearch() const;

protected:
	string degree;
	string major;
	int research;
};

#endif