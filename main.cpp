#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

#include "Product/ICar.h"
#include "Product/FordFocus.h"
#include "Product/VolkswagenPolo.h"
#include "Product/Decorator.h"
#include "Product/Airco.h"
#include "Product/BullBar.h"
#include "Product/RacingStripes.h"
#include "Product/Stereo.h"
#include "Product/TintedWindows.h"



std::vector<ICar*> cars;
std::vector<Decorator*> decs;
ICar* chosenCar;

bool running = true;
bool choosing = true;

int main()
{
    cars.push_back(new FordFocus());
    cars.push_back(new VolkswagenPolo());


    while(running)
    {
        uint32_t var = 0;

        std::cout << "|-------------------------------------|" << std::endl;
        std::cout << "|Decorator Pattern                    |" << std::endl;
        std::cout << "|SD6 Loe Hendriks & Stefan Vogelaar   |" << std::endl;
        std::cout << "|Menu                                 |" << std::endl;
        std::cout << "|(1) shows cars                       |" << std::endl;
        std::cout << "|(2) Modify car                       |" << std::endl;
        std::cout << "|(3) End Program                      |" << std::endl;
        std::cout << "|-------------------------------------|" << std::endl;
        

        std::cin >> var;
    

        switch(var)
        {

            case 1:
            {
                for(auto i : cars)
                {
                    std::cout << i->GetDescription() << " : " << i->GetPrice() << " Euros" << std::endl;
                }
                break;
            } 
            case 2:
            {
                choosing = true;
                for(uint32_t i = 0; i < cars.size(); i++)
                {
                    std::cout << "[" << i << "] " << cars[i]->GetDescription() << std::endl;
                }
                std::cout << "Pick a car (inser number)" << std::endl;
                uint32_t option;
                std::cin >> option;
                if(option < 0 || option > cars.size())
                {
                    std::cout << "Error: car nr does not excist" << std::endl;
                    break;
                }

                std::cout << std::endl;
                std::cout << "You have chosen: " << std::endl;
                chosenCar = cars[option];
                std::cout << chosenCar->GetDescription() << std::endl;

                

                while(choosing)
                {

                    decs.clear();
                    decs.push_back(new Airco(chosenCar));
                    decs.push_back(new BullBar(chosenCar));
                    decs.push_back(new RacingStripes(chosenCar));
                    decs.push_back(new Stereo(chosenCar));
                    decs.push_back(new TintedWindows(chosenCar));

                    std::cout << std::endl;
                    std::cout << "Pick option: " << std::endl;
                    for(uint32_t i = 0; i < decs.size();i++)
                    {
                        std::cout << "[" << i << "] " << decs[i]->GetDescription() << " : " << decs[i]->GetPrice() << " Euros" << std::endl;
                    }
                    uint32_t addition;
                    std::cin >> addition;
                    chosenCar = decs[addition];
                    
                    std::cout << std::endl;
                    std::cout << "Pick more options? (yes/no)" << std::endl;
                    std::string reply;
                    std::cin >> reply;

            
                    if(reply == "no")
                    {
                        std::cout << "Chosen car: " << chosenCar->GetDescription() << " : " << chosenCar->GetPrice() << std::endl;
                        choosing = false;
                    }


                }
                break;
            }
            case 3:
            {
                std::cout << "Ending program" << std::endl;
                for(auto i : cars)
                {
                    delete i;
                    i = NULL;
                }
                for(auto i: decs)
                {
                    delete i;
                    i = NULL;
                }
                running = false;
                break;
            }
            default:
                std::cout << "Error: Unknown Option, pick an option from the list" << std::endl;
                break;
        };

    }
}