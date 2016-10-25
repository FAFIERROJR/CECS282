#ifndef H_POLAR
#define H_POLAR

class Polar{
	protected:
		float radius;
		float angle;

	public:
		Polar();
		Polar(float, float);

		void display();
		friend Polar operator +(Polar& p1, Polar& p2);
};

#endif