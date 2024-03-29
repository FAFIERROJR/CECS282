//Francisco Fierro
//Lab 5
//Education.cpp

#include "Education.h"

using namespace std;

void Education::setDegree(string d){
	degree = d;
}

string Education::getDegree() const{
	return degree;
}

void Education::setMajor(string m){
	major = m;
}

string Education::getMajor() const{
	return major;
}

void Education::setResearch(int r){
	research = r;
}

int Education::getResearch() const{
	return research;
}

Education::Education(string d, string m, int r):
	degree(d), major(m), research(r){}