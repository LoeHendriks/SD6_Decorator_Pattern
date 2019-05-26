#include "Stereo.h"


std::string Stereo::GetDescription()
{
    return car->GetDescription() + " + stereo";
}

double Stereo::GetPrice()
{
    return car->GetPrice() + 125.50;
}