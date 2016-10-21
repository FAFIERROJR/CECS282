#ifndef H_FRACPRI
#define H_FRACPRI

using namespace std;

public class FracPri {
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
	Fracpri operator +(FracPri&);
	Fracpri operator -(FracPri&);
	Fracpri operator *(FracPri&);
	Fracpri operator /(FracPri&);
	friend Fracpri operator +(FracPri&, int&);
	friend Fracpri operator +(int&, FracPri&);
	Fracpri operator <(FracPri&);
	Fracpri& operator +=(FracPri&);
	friend istream& operator <<(istream&, FracPri&);
	friend ostream& operator <<(ostream&, FracPri&);
	FracPri reduce(FracPri);
	FracPri makeProper(FracPri);
};

#endif