#ifndef COLORMAP_H
#define COLORMAP_H

#include <iostream>
#include <vector>

    struct ColorPair
    {
        int number;
        std::string majorColor;
        std::string minorColor;
    };


    std::vector<ColorPair> PrintColorMap();

#endif // !COLORMAP_H