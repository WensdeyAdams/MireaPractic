#ifndef MIREAPRACTIC_OCEAN_H
#define MIREAPRACTIC_OCEAN_H

#include <string>

using namespace std;

class Ocean {
protected:
    string name;
    string location;
    float size;
    float depth;
public:
    Ocean();
    Ocean(string name, string location, float size, float depth);
    virtual void showInfo();
};


#endif //MIREAPRACTIC_OCEAN_H
