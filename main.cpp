#include <iostream>
#include "tempconv.h"

using namespace std;

int main()
{
    cout << "Que frio! " << AbsoluteZeroC << "°C" << endl;
    cout << "Fervendo! " << CToF(BoilingC) << "°F" << endl;

    return 0;
}
