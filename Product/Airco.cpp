#include "Airco.h"


std::string Airco::GetDescription()
{
    return car->GetDescription() + " + airco";
}

double Airco::GetPrice()
{
    return car->GetPrice() + 249.99;
}