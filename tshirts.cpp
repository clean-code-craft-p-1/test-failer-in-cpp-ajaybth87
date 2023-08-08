#include <iostream>
#include <assert.h>
#include "tshirts.h"
char Tshirts::size(int cms) {
        char sizeName = '\0';
        if (cms < 38) {
            sizeName = 'S';
        }
        else if (cms > 38 && cms < 42) {
            sizeName = 'M';
        }
        else if (cms > 42) {
            sizeName = 'L';
        }
        return sizeName;
    }

void TestTshirts::Test_TShirtSize()
{
    assert(size(37) == 'S');
    assert(size(38) == 'S');
    assert(size(40) == 'M');
    assert(size(42) == 'L');
    assert(size(43) == 'L');
    std::cout << "All is well (maybe!)\n";
}

int main() {
    TestTshirts::Test_TShirtSize();
    return 0;
}