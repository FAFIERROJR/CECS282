//Francisco Fierro
//Lab 41
#include <iostream>
#include <iomanip>

using namespace std;

class Publication{
    private:
        string title;
        float price;
    
    public:
        //get title, price
        void getData(){
            cout << "Enter title" << endl;
            getline(cin, title);
            cout << "Enter price" << endl;
            cin >> price;
        }

        //print title, price
        void putData(){
            cout << "Title: " << title << endl;
            cout << "Price: : $" << fixed << setprecision(2) << showpoint << price << endl;
        }
};

class Sales{
    private:
        float sales[3];

    public:
        //get sales data for each month
        void getData(){
            for(int i = 0; i < 3; i++){
                cout << "Enter sales amount for month " << (i + 1) << endl;
                cin >> sales[i];
            }
            cin.ignore();       
        }

        //get sales data for each month
        void putData(){
            for(int i = 0; i < 3; i++){
                cout << "Sales amount for month " << (i + 1) << ": $"
                    << fixed << showpoint << setprecision(2) << sales[i] << endl;
             }
        }
};

class Book: private Publication, private Sales{
    private:
        int pageCount;
    
    public:
        //get all data
        void getData(){
            Publication :: getData();
            cout << "Enter page count" << endl;
            cin >> pageCount;
            Sales :: getData();
        }
        
        //print all data
        void putData(){
            Publication :: putData();
            cout << "Page Count: " << pageCount << endl;
            Sales :: putData();
        }
};

class Digital: private Publication, private Sales
{
    private:
        int capacity;
        
    public:
        //get all data
        void getData(){
            Publication :: getData();
            cout << "Enter storage capacity" << endl;
            cin >> capacity;
            Sales :: getData();
        }

        //print all data
        void putData(){
            Publication :: putData();
            cout << "Storage Capacity: " << capacity << "MB" << endl;
            Sales :: putData();
        }
};


//test
int main(){
    Book b;
    Digital d;
    
    b.getData();
    d.getData();
    
    b.putData();
    d.putData();

    return 0;
}
