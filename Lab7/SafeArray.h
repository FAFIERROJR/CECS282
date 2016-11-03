#ifndef H_SAFEARRAY
#define H_SAFEARRAY

class SafeArray{
	protected:
		int high;
		int low;
		int * array;

	public:
		SafeArray(int, int);
		~SafeArray();
		SafeArray(int a[5]);
		int& operator[](int);
		void print();
};

#endif