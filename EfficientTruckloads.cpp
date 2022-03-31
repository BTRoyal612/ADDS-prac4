#include "EfficientTruckloads.h"
#include <ctype.h>
#include <map>

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if (isalpha(numCrates) || isalpha(loadSize)) return -1;

    if (numCrates < 0 || loadSize < 0) return -1;

    if (numCrates == 0 || loadSize == 0) return 0;

    if (numCrates <= loadSize) {
        return 1;
    }

    int c1, c2;
    if (numCrates%2 == 0) {
        c1 = numCrates/2;
        c2 = numCrates/2;
    } else {
        c1 = numCrates/2;
        c2 = numCrates/2 + 1;
    }

    int temp;
    if (memo.count(numCrates)) {
        temp = memo.find(numCrates)->second;
    } else {
        temp = numTrucks(c1, loadSize) + numTrucks(c2, loadSize);
        memo.insert(std::pair<int, int>(numCrates, temp));
    }
    
    return temp;
}