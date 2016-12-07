#ifndef BOOLEANSOURCE_H
#define BOOLEANSOURCE_H

class BooleanSource{
	protected:
		float probability;

	public:
		BooleanSource(float);
		bool query();
};
#endif