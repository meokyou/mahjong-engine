#pragma once

#include <string>
#include <array>
#include "tile.h"

class player {
public:
    player(std::string w, bool d, std::array<tile, 14> p);
    std::array<tile, 14> pan;
    std::string wind;
    bool dealer;
};