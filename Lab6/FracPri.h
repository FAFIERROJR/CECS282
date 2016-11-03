//Francisco Fierro
//CECS 282
//Lab 6
#ifndef H_FracPri
#define H_FracPri

using namespace std;

class FracPri {
protected: 
	int whole;
	int numer;
	int denom;

public:
	FracPri();
	FracPri(float&);
	FracPri(int, int, int);
	void getFraction();
	void showFraction();
	FracPri	addfracts(FracPri, FracPri);
	FracPri operator +(FracPri&);
	FracPri operator -(FracPri&);
	FracPri operator *(FracPri&);
	FracPri operator /(FracPri&);
	friend FracPri operator +(FracPri&, int);
	friend FracPri operator +(int, FracPri&);
	bool operator <(FracPri&);
	FracPri operator +=(int);
	friend istream& operator >>(istream&, FracPri&);
	friend ostream& operator <<(ostream&, FracPri&);
	FracPri operator  =(float);
	operator float();
	FracPri reduce(FracPri);
	FracPri makeProper(FracPri);

};

#endif