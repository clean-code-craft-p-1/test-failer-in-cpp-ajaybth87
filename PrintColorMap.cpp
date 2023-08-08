#include "ColorMap.h"

std::vector<colormap::ColorPair> colormap::PrintColorMap() {
    const char* majorColor[] = { "White", "Red", "Black", "Yellow", "Violet" };
    const char* minorColor[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
    int i = 0, j = 0;
    std::vector<colormap::ColorPair> colorMap;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            colormap::ColorPair cp;
            cp.number = i * 5 + j;
            cp.majorColor = majorColor[i];
            cp.minorColor = minorColor[j];
            colorMap.push_back(cp);
            std::cout << cp.number << " | " << cp.majorColor << " | " << cp.minorColor << "\n";
        }
    }
    return colorMap;
}