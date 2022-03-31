#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main() {
    EfficientTruckloads* et = new EfficientTruckloads();
    Truckloads* t = new Truckloads();
    Reverse* re = new Reverse();
    int num, crates, load;
    string letters;

    cin >> num >> letters >> crates >> load;
    
    cout << re->reverseDigit(num) << endl;
    cout << re->reverseString(letters) << endl;
    cout << t->numTrucks(crates, load) << endl;
    cout << et->numTrucks(crates, load) << endl;
}
