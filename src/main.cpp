#include <array>
#include <iostream>
#include <string>
#include "tile.h"
#include "player.h"

int main(int argc, char **argv) {
    std::cout << "Hello world!" << std::endl;
    std::array <tile, 14> testing;
    std::string tmp2 = "hello";
    player hello(tmp2, true, testing);
    return 0;
}