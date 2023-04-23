#ifndef MIREAPRACTIC_SEA_H
#define MIREAPRACTIC_SEA_H

#include <string>
#include "ocean.h"
using namespace std;

class Sea : public Ocean {
protected:
    string type;
public:
    Sea();
    Sea(string name, string location, float size, float depth, string type);
    virtual void showInfo();
};


#endif //MIREAPRACTIC_SEA_H
