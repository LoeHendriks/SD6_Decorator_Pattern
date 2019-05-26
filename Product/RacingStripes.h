#ifndef RACINGSTRIPES_H
#define RACINGSTRIPES_H

#include "Decorator.h"
#include "ICar.h"
class ICar;

class RacingStripes : public Decorator
{
public:
    RacingStripes(ICar* car):Decorator(car){}
    std::string GetDescription() override;
    double GetPrice() override;
};

#endif

