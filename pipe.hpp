#pragma once

#include <string>

struct Pipe{
    std::string name;
    double length = 0;
    double diameter = 0;
    bool inRepair = false;
};

void readPipe(Pipe& pipe);

    