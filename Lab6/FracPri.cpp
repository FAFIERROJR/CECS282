#include <iostream>
#include <iomanip>
#include "FracPri.h"

using namespace std;

FracPri::FracPri(): whole(0), numer(0), denom(0){}
FracPri::FracPri(int w, int n, int d):
	whole(w), numer(n), denom(d){}
void FracPri::getFraction(){
	cout << "Enter integral part: ";
	cin >> whole;
	cout << "Enter numerator: ";
	cin >> numer;
	cout << "Enter denominator: ";
	cin >> denom;
}

FracPri::FracPri(float& f){

	whole = (int)f;
	numer = (f - whole) * 64;
	denom = 64;
}

void FracPri::showFraction(){
	cout << whole << " "  << numer <<  " / " << denom << endl;
}

FracPri	FracPri::addfracts(FracPri a, FracPri b){
	FracPri result;
	int numer1 = a.numer + a.whole * a.denom;
	int numer2 = b.numer + b.whole * b.denom;
	if(a.denom != b.denom){
		//cross mutiply
		result.denom = a.denom* b.denom;
		result.numer = numer1* b.denom + numer2 * a.denom;
	}
	result = reduce(result);
	result = makeProper(result);
	return result;

}

FracPri FracPri::operator +(FracPri& b){
	FracPri result;
	int numer1 = this->numer + this->whole * this->denom;
	int numer2 = b.numer + b.whole * b.denom;
	if(this->denom != b.denom){
		//cross mutiply
		result.denom = this->denom* b.denom;
		result.numer = numer1* b.denom + numer2 * this->denom;
	}
	result = reduce(result);
	result = makeProper(result);
	return result;
}

FracPri FracPri::operator -(FracPri& b){
	FracPri result;
	int numer1 = this->numer + this->whole * this->denom;
	int numer2 = b.numer + b.whole * b.denom;
	if(this->denom != b.denom){
		//cross mutiply
		result.denom = this->denom* b.denom;
		result.numer = numer1* b.denom - numer2 * this->denom;
	}
	if(result.numer < 0){
		result.numer *= -1;
		result = reduce(result);
		result.numer *= -1;
	}
	else{
		result = reduce(result);
	}
	result = makeProper(result);
	return result;
}

FracPri FracPri::operator *(FracPri& b){
	FracPri result;
	int numer1 = this->numer + this->whole * this->denom;
	int numer2 = b.numer + b.whole * b.denom;
	if(this->denom != b.denom){
		//cross mutiply
		result.denom = this->denom* b.denom;
		result.numer = numer1 * numer2;
	}
	result = reduce(result);
	result = makeProper(result);
	return result;
}
FracPri FracPri::operator /(FracPri& b){
	FracPri result;
	int numer1 = this->numer + this->whole * this->denom;
	int numer2 = b.numer + b.whole * b.denom;
	if(this->denom != b.denom){
		//cross mutiply
		result.denom = this->denom* numer2;
		result.numer = numer1* b.denom;
	}
	result = reduce(result);
	result = makeProper(result);
	return result;
}
FracPri operator +(FracPri& f, int i){
	FracPri result;

	result.whole = f.whole + i;
	result.numer = f.numer;
	result.denom = f.denom;

	return result;
}
FracPri operator +(int i, FracPri& f){
	FracPri result;

	result.whole = f.whole + i;
	result.numer = f.numer;
	result.denom = f.denom;

	return result;
}
bool FracPri::operator <(FracPri& b){
	if(this->whole == b.whole){
		return (this->numer * b.denom) < (b.numer * this->denom);
	}
	return this->whole < b.whole;
}

FracPri FracPri::operator +=(int i){
	FracPri result;

	result.whole = this->whole + i;
	result.numer = this->numer;
	result.denom = this->denom;

	return result;
}

istream& operator >>(istream& in, FracPri& f){
	cout << "Enter integral part: ";
	in >> f.whole;
	cout << "Enter numerator: ";
	in >> f.numer;
	cout << "Enter denominator: ";
	in >> f.denom;
	return in;

}
ostream& operator <<(ostream& out, FracPri& f){
	out << f.whole << " "  << f.numer <<  " / " << f.denom << endl;
	return out;

}

FracPri FracPri::operator  =(float f){
	FracPri result;

	result.whole = (int)f;
	result.numer = (f - result .whole) * 64;
	result.denom = 64;

	result = result.reduce(result);
	return result;
}

FracPri::operator float(){
	float f = this->whole + (this->numer /(float)this->denom);
}


//reduces a fraction to simplest terms
//and returns proper fraction
FracPri FracPri::reduce(FracPri f){
	FracPri result;
	int a;
	int b;
	int q;
	int r;

	if(f.numer == f.denom){
		result.whole = 1;
		result.numer = 0;
		result.denom = 0;
		return result;
	}

	if(f.numer > f.denom){
		a = f.numer;
		b = f.denom;
	}
	else{
		a = f.denom;
		b = f.numer;
	}

	while(b != 0){
		q = a/b;
		r = a %b;
		a =b;
		b = r;
	}

	result.numer = f.numer / a;
	result.denom = f.denom / a;
	return result;
}

FracPri FracPri::makeProper(FracPri b){
	FracPri result;
	result.numer = b.numer;
	if(b.numer < 0){
		result.numer *= -1;
	}
	result.denom = b.denom;

	while(result.denom < result.numer){
		result.numer -= result.denom;
		result.whole++;
	}
	if(result.numer == result.denom){
		result.whole++;
		result.numer = 0;
		result.denom = 0;
	}

	if(b.numer < 0){
		result.whole *= -1;
		result.numer *= -1;
	}

	return result;
}

