#include "TruckLoads.h"
#include <ctype.h>

int TruckLoads::numTrucks(int numCrates, int loadSize) {
    if (!isdigit(numCrates) || !isdigit(loadSize)) return -1;

    if (numCrates < 0 || loadSize < 0) return -1;

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

    return numTrucks(c1, loadSize) + numTrucks(c2, loadSize);
}