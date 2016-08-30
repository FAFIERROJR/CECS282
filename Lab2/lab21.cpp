#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int perfectNum[] = {6,28,496,8128};
    for(int i = 0; i < 4; i++){
        cout << "Perfect Number " << i + 1 << " : " << perfectNum[i] << endl;
    }
    return 0;
}

