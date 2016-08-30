#include <iomanip>
#include <iostream>

using namespace std;

bool validate(int);

int main(){
    while(true){
        int input = 0;
        while(input <= 0) {
            cout << "Enter a positive integer (or -1 to exit): ";
            cin >> input;
            if(input == -1){
                return 0;
            }
        }

        if(validate(input)){
            cout << input << " is a perfect number" << endl;
        }
        else{
            cout << input << " is not a perfect number" << endl;
        }
    }
    return 0;
}

bool validate (int in){
    int sum = 0;
    for(int i = 1; i <= (int) in/2; i++){
        if(in % i == 0){
            sum = sum + i;
        }
    }
    if(sum == in){
        return true;
    }
    return false;
}
