#include <iostream>
#include <assert.h>
#include "TShirtSize.h"

using namespace tshirt;

void Test_TShirtSize()
{
    assert(tshirt::size(37) == 'S');
    assert(tshirt::size(38) == 'S');
    assert(tshirt::size(40) == 'M');
    assert(tshirt::size(42) == 'L');
    assert(tshirt::size(43) == 'L');
    std::cout << "All is well (maybe!)\n";
}

int main() {
    Test_TShirtSize();
    return 0;
}