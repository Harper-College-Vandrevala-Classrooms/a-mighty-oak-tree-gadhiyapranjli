#ifndef SQUIRREL_HPP
#define SQUIRREL_HPP

#include <string>
using namespace std;

class Squirrel {
private:
    string name;

public:
    Squirrel(string name);
    string get_name();
};

#endif 
