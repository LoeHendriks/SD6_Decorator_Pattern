#include "BullBar.h"


std::string BullBar::GetDescription()
{
    return car->GetDescription() + " + bullbar";
}

double BullBar::GetPrice()
{
    return car->GetPrice() + 99.99;
}