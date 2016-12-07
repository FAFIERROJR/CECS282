#ifndef WASHER_H
#define WASHER_H

class Washer{
	protected:
		int secondsForWash;
		int washTimeLeft;

	public:
		Washer(int);
		void startWashing();
		void oneSecond();
		bool isBusy();
};

#endif