#ifndef AVERAGE_H
#define AVERAGE_H

class Average{
	protected:
		int carSum;
		int totalWaitTime;

	public:
		Average();
		int getCars();
		int getTotalTime();
		void nextCar(int);
};


#endif