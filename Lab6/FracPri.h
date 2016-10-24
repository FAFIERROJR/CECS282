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
	FracPri(int, int, int);
	void getFraction();
	void showFraction();
	FracPri	addfracts(FracPri, FracPri);
	FracPri operator +(FracPri&);
	FracPri operator -(FracPri&);
	FracPri operator *(FracPri&);
	FracPri operator /(FracPri&);
	friend FracPri operator +(FracPri&, int&);
	friend FracPri operator +(int&, FracPri&);
	bool operator <(FracPri&);
	FracPri& operator +=(FracPri&);
	friend istream& operator <<(istream&, FracPri&);
	friend ostream& operator <<(ostream&, FracPri&);
	FracPri reduce(FracPri);
	FracPri makeProper(FracPri);
};

#endif