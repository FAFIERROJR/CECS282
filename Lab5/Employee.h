#ifndef H_EMPLOYEE
#define H_EMPLOYEE

using namespace std;

class Employee{
public:
	void putData() const;
	void setFirstName(string n);
	string getFirstName() const;
	void setLastName(string n);
	string getLastName() const;
	void setID(int i);
	int getID() const;
	void setBDay(int b);
	int getBDay() const;
	void setSex(char s);
	char getSex() const;
	virtual float monthlyEarning() = 0;
	Employee(string n1 = "Jane", string n2 = "Doe", int i = 0,
		int b =1011900, char s = 'F');
		
protected:
	string firstName;
	string lastName;
	int id;
	char sex;
	int bDay;
};
#endif