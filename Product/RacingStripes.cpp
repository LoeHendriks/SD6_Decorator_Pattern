#include "RacingStripes.h"


std::string RacingStripes::GetDescription()
{
    return car->GetDescription() + " + RacingStripes";
}

double RacingStripes::GetPrice()
{
    return car->GetPrice() + 500;
}