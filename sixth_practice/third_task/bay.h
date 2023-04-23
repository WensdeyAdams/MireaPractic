#ifndef MIREAPRACTIC_BAY_H
#define MIREAPRACTIC_BAY_H

#include "sea.h"
#include <string>

class Bay : public Sea {
protected:
    string nearby;
public:
    Bay();
    Bay(string name, string location, float size, float depth, string nearby, string type);
    virtual void showInfo();
};;


#endif //MIREAPRACTIC_BAY_H
