#include <iostream>
#include <iomanip>
#include "FracPri.h"

using namespace std;

FracPri::FracPri(): whole(w), numer(n), denom(d){}
FracPri::FracPri(int w, int n, int d):
	whole(w), numer(n), denom(d){}
void FracPri::getFraction(){
	cout << "Enter integral part: ";
	cin >> whole;
	out << "Enter numerator: ";
	cin >> numer;
	out << "Enter denominator: ";
	cin >> denom;
}

void FracPri::showFraction(){
	cout << whole << " "  << numer <<  " / " << denom << endl;
}

FracPri	FracPri::addfracts(FracPri a, FracPri b){
	FracPri result;
	int numer1 = a.numer + a.whole * a.denom;
	int numer2 = b.numer + b.whole * b.denom
	if(a.denom != b.denom){
		//cross mutiply
		result.denom = a.denom* b.denom;
		result.num = numer1* b.denom + numer2 * a.denom;
	}
	result = reduce(result);
	result = makeProper(result);
	return result;

}

Fracpri FracPri::operator +(FracPri& b){
	FracPri result;
	int numer1 = a.numer + a.whole * a.denom;
	int numer2 = b.numer + b.whole * b.denom
	if(a.denom != b.denom){
		//cross mutiply
		result.denom = a.denom* b.denom;
		result.num = numer1* b.denom + numer2 * a.denom;
	}
	result = reduce(result);
	result = makeProper(result);
	return result;
}

Fracpri FracPri::operator -(FracPri& b){
	FracPri result;
	int numer1 = this.numer + this.whole * this.denom;
	int numer2 = b.numer + b.whole * b.denom
	if(a.denom != b.denom){
		//cross mutiply
		result.denom = this.denom* b.denom;
		result.num = numer1* b.denom - numer2 * this.denom;
	}
	result = reduce(result);
	result = makeProper(result);
	return result;
}

Fracpri FracPri::operator *(FracPri& b){
	FracPri result;
	int numer1 = this.numer + this.whole * this.denom;
	int numer2 = b.numer + b.whole * b.denom
	if(a.denom != b.denom){
		//cross mutiply
		result.denom = this.denom* b.denom;
		result.num = numer1 * numer2;
	}
	result = reduce(result);
	result = makeProper(result);
	return result;
}
Fracpri FracPri::operator /(FracPri&){
	FracPri result;
	int numer1 = this.numer + this.whole * this.denom;
	int numer2 = b.numer + b.whole * b.denom
	if(a.denom != b.denom){
		//cross mutiply
		result.denom = this.denom* numer2;
		result.num = numer1* b.denom;
	}
	result = reduce(result);
	result = makeProper(result);
	return result;
}
Fracpri FracPri::operator +(FracPri& f, int& i){
	FracPri result;

	result.whole = f.whole + i;
	result.numer = f.numer;
	result.denom = f.denom;

	return result;
}
Fracpri FracPri::operator +(int&, FracPri&){
	FracPri result;

	result.whole = f.whole + i;
	result.numer = f.numer;
	result.denom = f.denom;

	return result;
}
Fracpri FracPri::operator <(FracPri&);
Fracpri& FracPri::operator +=(FracPri&);
istream& FracPri::operator <<(istream&, FracPri&);
ostream& FracPri::operator <<(ostream&, FracPri&);

//reduces a fraction to simplest terms
//and returns proper fraction
FracPri FracPri::reduce(FracPri f){
	FracPri result;
	int a;
	int b;
	int q;
	int r;

	if(f.numer == f.denom){
		result;.whole = 1;
		result.numer = 0;
		result.denom = 0;
		return result;
	}

	if(f.numer > f.denom){
		a = f.numer;
		b = f.denom;
	}
	else{m
		a = f.denom;
		b = f.numer;
	}

	while(b != 0){
		q = a/b;
		r = a %b;
		a =q;
		b = r;
	}

	result.numer = f.numer / a;
	result.denom = f.denom / a;
}

FracPri FracPri::makeProper(FracPri f){
	FracPri result;

	FracPri result;
	if(this.denom != b.denom){
		//cross mutiply
		result.denom = this.denom * b.denom;
		result.num = this.numer * b.denom + b.numer * this.denom;
	}
	result.whole = this.whole + b.whole;
	while(result.denom <= result.numer){
		result.numer -= result.denom;
		result.whole++;
	}
	if(result.numer = result.denom){
		result.whole++;
		result.numer = 0;
		result.denom = 0;
	}
}

