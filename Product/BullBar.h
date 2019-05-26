#ifndef BULLBAR_H
#define BULLBAR_H

#include "Decorator.h"
#include "ICar.h"
class ICar;

class BullBar : public Decorator
{
public:
    BullBar(ICar* car):Decorator(car){}
    std::string GetDescription() override;
    double GetPrice() override;
};

#endif

