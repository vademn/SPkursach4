#include "calculator.h"

int Calculator::Compare(double a, double b) {
    return (a<b) ? -1 : ((a>b) ?1 :0);
}
