// function object to compare persons using pointers
class comparePersons
   {
   public:
   bool operator() (const person* ptrP1, 
                    const person* ptrP2) const
      { return *ptrP1 < *ptrP2; }
   };