#include "TintedWindows.h"


std::string TintedWindows::GetDescription()
{
    return car->GetDescription() + " + tinted windows";
}

double TintedWindows::GetPrice()
{
    return car->GetPrice() + 400;
}