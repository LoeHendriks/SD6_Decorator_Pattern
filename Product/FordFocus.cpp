#include "FordFocus.h"

FordFocus::FordFocus()
{
    description = "Ford Focus";
    price = 4000;
}

std::string FordFocus::GetDescription()
{
    return description;
}

double FordFocus::GetPrice()
{
    return price;
}