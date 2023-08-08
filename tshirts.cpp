#include <iostream>
#include <assert.h>
#include "TShirtSize.h"

using namespace tshirt;

void Test_TShirtSize()
{
    assert(size(37) == 'S');
    assert(size(38) == 'S');
    assert(size(40) == 'M');
    assert(size(42) == 'L');
    assert(size(43) == 'L');
    std::cout << "All is well (maybe!)\n";
}

int main() {
    Test_TShirtSize();
    return 0;
}