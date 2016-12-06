// sorts person objects stored by pointer
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class person
   {
   private:
      string lastName;
      string firstName;
      long phoneNumber;
   public:
      person() :             // default constructor
           lastName("blank"), firstName("blank"), phoneNumber(0L)
         {  }
                             // 3-arg constructor
      person(string lana, string fina, long pho) :
              lastName(lana), firstName(fina), phoneNumber(pho)
         {  }
      friend bool operator<(const person&, const person&);
      friend bool operator==(const person&, const person&);

      void display() const   // display person's data
         {
         cout << endl << lastName << ",\t" << firstName
              << "\t\tPhone: " << phoneNumber;
         }
      long get_phone() const // return phone number
         { return phoneNumber; }
   }; //end class person
//--------------------------------------------------------------
// overloaded < for person class
bool operator<(const person& p1, const person& p2)
   {
   if(p1.lastName == p2.lastName)
      return (p1.firstName < p2.firstName) ? true : false;
   return (p1.lastName < p2.lastName) ? true : false;
   }
//--------------------------------------------------------------
// overloaded == for person class
bool operator==(const person& p1, const person& p2)
   {
   return (p1.lastName == p2.lastName &&
           p1.firstName == p2.firstName ) ? true : false;
   }
//--------------------------------------------------------------
// function object to compare persons using pointers
class comparePersons
   {
   public:
   bool operator() (const person* ptrP1, 
                    const person* ptrP2) const
      { return *ptrP1 < *ptrP2; }
   };