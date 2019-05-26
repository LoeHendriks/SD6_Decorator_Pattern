#ifndef STEREO_H
#define STEREO_H

#include "Decorator.h"
#include "ICar.h"
class ICar;

class Stereo : public Decorator
{
public:
    Stereo(ICar* car):Decorator(car){}
    std::string GetDescription() override;
    double GetPrice() override;
};

#endif

