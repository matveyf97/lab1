#pragma once
#include <string>

struct Station {
    std::string name;
    int totalWorkshops = 0;
    int activeWorkshops = 0;
    int stationClass = 0;

};

bool readStation(Station& station);
void showStation(const Station& station);
bool editStation(Station& station);

