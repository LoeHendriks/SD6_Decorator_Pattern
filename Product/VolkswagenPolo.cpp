#include "VolkswagenPolo.h"

VolkswagenPolo::VolkswagenPolo()
{
    description = "Volkswagen Polo";
    price = 10000;
}

std::string VolkswagenPolo::GetDescription()
{
    return description;
}

double VolkswagenPolo::GetPrice()
{
    return price;
}