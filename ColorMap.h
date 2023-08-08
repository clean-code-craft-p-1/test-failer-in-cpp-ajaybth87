#ifndef COLORMAP_H
#define COLORMAP_H

#include <iostream>
#include <vector>
namespace colormap
{
    struct ColorPair
    {
        int number;
        std::string majorColor;
        std::string minorColor;
    };


    std::vector<colormap::ColorPair> PrintColorMap();
}

#endif // !COLORMAP_H