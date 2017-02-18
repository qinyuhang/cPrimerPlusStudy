#include <stdio.h>

union hold {
    int digit;
    double bigfl;
    char letter;
};

int main(int argc, char * argv{}){
    union hold fit;
    fit.letter = 'x';
    return 0;
}
