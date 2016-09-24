#ifndef H_EMPLOYEE
#define H_EMPLOYEE

class Employee{
	public:
		void putData();
		void setFirstName();
		string getFirstName();
		void setLastName();
		string getLastName();
		setID();
		getID();
		setBDay();
		getBDay();
		setSex();
		getSex();
		virtual float monthlyEarning();
		
	private:
		string firstName;
		string LastName;
		int id;
		char sex;
		int bDay;
};
#endif