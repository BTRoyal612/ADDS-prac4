#ifndef EFFICIENTTRUCKLOADS
#define EFFICIENTTRUCKLOADS

#include <map>

class EfficientTruckloads {
    private:
        std::map<int, int> memo;
    public:
        int numTrucks(int numCrates, int loadSize);
};

#endif