#include "Reverse.h"
#include "TruckLoads.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    TruckLoads* t = new TruckLoads();
    Reverse* re = new Reverse();
    int num, crates, load;
    string letters;

    cin >> num >> letters >> crates >> load;
    
    cout << re->reverseDigit(num) << endl;
    cout << re->reverseString(letters) << endl;
    cout << t->numTrucks(crates, load) << endl;
    cout << t->numTrucks(crates, load) << endl;
}
