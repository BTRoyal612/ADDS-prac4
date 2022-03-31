#include "Truckloads.h"
#include <ctype.h>

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates < 0 || loadSize < 0) return -1;

    if (numCrates == 0 || loadSize == 0) return 0;

    if (numCrates <= loadSize) {
        return 1;
    }

    int c1 = numCrates/2;
    int c2 = numCrates/2;
    if (numCrates%2 != 0) {
        c2++;
    }

    return numTrucks(c1, loadSize) + numTrucks(c2, loadSize);
}