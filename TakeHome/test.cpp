#include <iostream>
#include <queue>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include "Washer.h"
#include "BooleanSource.h"
#include "Average.h"

using namespace std;

int main(){
	queue<int> arrivalTimes;

	cout << "Enter seconds for wash" <<endl;
	int secondsForWash;
	cin >> secondsForWash;
	Washer washer(secondsForWash);

	cout << "Enter probability of new car" << endl;
	float probability;
	cin >> probability;
	BooleanSource chance(probability);

	cout << "Enter total time" << endl;
	int totalTime;
	cin  >> totalTime;

	Average average;

	cout << average.getCars() << " " << average.getTotalTime()<< endl;

	for(int currentSecond = 1; currentSecond <= totalTime - secondsForWash; currentSecond++){
		washer.oneSecond();
		if(chance.query()){
			if(arrivalTimes.empty()){
				washer.startWashing();
			}
			arrivalTimes.push(currentSecond);

		}
		if(!arrivalTimes.empty()){
			if(!washer.isBusy()){
				arrivalTimes.pop();
				if(!arrivalTimes.empty()){
					cout << currentSecond - arrivalTimes.front() << endl;
					average.nextCar(currentSecond - arrivalTimes.front());
					washer.startWashing();
				}
			}
		}
	}

	float carsServed = float(average.getCars());
	float totalWaitTime = float(average.getTotalTime());
	float avg = totalWaitTime / carsServed;
	cout << "Cars Served: " << carsServed << endl;
	cout << "Total Wait Time: " << totalWaitTime << endl;
	cout << "Average Wait Time: " << setprecision(2) << fixed << showpoint << avg << endl;

	return 0;

}