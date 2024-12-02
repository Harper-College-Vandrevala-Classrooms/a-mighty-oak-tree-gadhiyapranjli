#include "Squirrel.hpp"

Squirrel::Squirrel(string name) {
    this->name = name;
}

string Squirrel::get_name() {
    return this->name;
}
