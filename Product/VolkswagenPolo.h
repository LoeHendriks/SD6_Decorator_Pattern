#ifndef VOLKSWAGENPOLO_H
#define VOLKSWAGENPOLO_H

#include "ICar.h"

class VolkswagenPolo : public ICar
{
public:
    VolkswagenPolo();
    std::string GetDescription() override;
    double GetPrice() override;
};

#endif