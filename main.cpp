#include "Reverse.h"
#include "TruckLoads.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    TruckLoads* t = new TruckLoads();
    // Reverse* re = new Reverse();
    // int num;
    // string letters;
    // int truck;

    // cin >> num >> letters >> trucks;
    
    // cout << re->reverseDigit(num) << endl;
    // cout << re->reverseString(letters) << endl;
    cout << t->numTrucks(10, 2) << endl;
}
