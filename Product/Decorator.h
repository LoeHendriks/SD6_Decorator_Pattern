#ifndef DECORATOR_H
#define DECORATOR_H

#include <string>

#include "ICar.h"

class Decorator : public ICar
{
public:
    Decorator(ICar* car)
    {
        this->car = car;
    }
    virtual std::string GetDescription() = 0;
    virtual double GetPrice() = 0;
protected:
    ICar* car;
};
#endif