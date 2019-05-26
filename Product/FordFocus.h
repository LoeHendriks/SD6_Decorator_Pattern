#ifndef FORDFOCUS_H
#define FORDFOCUS_H

#include "ICar.h"

class FordFocus : public ICar
{
public:
    FordFocus();
    std::string GetDescription() override;
    double GetPrice() override;
};

#endif