#ifndef AIRCO_H
#define AIRCO_H

#include "Decorator.h"
#include "ICar.h"
class ICar;

class Airco : public Decorator
{
public:
    Airco(ICar* car):Decorator(car){}
    std::string GetDescription() override;
    double GetPrice() override;
};

#endif

