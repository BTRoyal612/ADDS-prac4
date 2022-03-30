#include "Reverse.h"
#include <string>

int helperDigit(int numb, int reverse) {
    reverse = reverse*10 + numb%10;
    if (numb < 10) {
        return reverse;
    }


    return helperDigit(numb/10, reverse);
}

int Reverse::reverseDigit(int numb) {
    if (numb < 0) return -1;
    return helperDigit(numb, 0);
}

std::string helperString(std::string letters, std::string reverse, int index) {
    if (index < 0) {
        return reverse;
    }
    reverse += letters.at(index);

    return helperString(letters, reverse, --index);
}

std::string Reverse::reverseString(std::string letters) {
    return helperString(letters, "", letters.length()-1); 
}