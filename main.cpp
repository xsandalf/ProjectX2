#include "src/calculator.h"

int main() {
    // Function calls to calculate
    // Write your all possible input scenarios here
    // Notice that calculator code written here works with floats now
    calculator(3.0f, "+", 76.2f);
    calculator(2.4f, "-", 3445.0f);
    calculator(13.3333f, "*", 27.3452f);
    calculator(0.278931f, "/", 9.0f);
    calculator(1.0f, "/", 0.0f);
    calculator(0.0f, "a", 0.01f);
    
    return 0;
}
