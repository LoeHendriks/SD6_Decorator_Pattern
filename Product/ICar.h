#ifndef ICAR_H
#define ICAR_H

#include <string>

class ICar{
public:
    ICar() {}
    virtual ~ICar() {}
    virtual std::string GetDescription() = 0;
    virtual double GetPrice() = 0;
protected:
    std::string description;
    double price;
};

#endif