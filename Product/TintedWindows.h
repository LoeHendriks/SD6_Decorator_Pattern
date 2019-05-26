#ifndef TINTEDWINDOWS_H
#define TINTEDWINDOWS_H

#include "Decorator.h"
#include "ICar.h"
class ICar;

class TintedWindows : public Decorator
{
public:
    TintedWindows(ICar* car):Decorator(car){}
    std::string GetDescription() override;
    double GetPrice() override;
};

#endif

