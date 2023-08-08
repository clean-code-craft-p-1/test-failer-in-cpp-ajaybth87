#include "PrintColorMapTest.h"

void printcolormap::test_PrintColorMap()
{
    std::vector<colormap::ColorPair> colorMap = colormap::PrintColorMap();
    int result = colorMap.size();
    assert(result == 25);

    assert(colorMap[0].number == 1);
    assert(colorMap[0].majorColor == "White");
    assert(colorMap[0].minorColor == "Blue");

    assert(colorMap[12].number == 13);
    assert(colorMap[12].majorColor == "Black");
    assert(colorMap[12].minorColor == "Green");

    assert(colorMap[24].number == 25);
    assert(colorMap[24].majorColor == "Violet");
    assert(colorMap[24].minorColor == "Slate");
}