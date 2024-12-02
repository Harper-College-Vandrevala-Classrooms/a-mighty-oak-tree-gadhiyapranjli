#ifndef NODE_HPP
#define NODE_HPP

#include "Squirrel.hpp"

class Node {
private:
    Squirrel* squirrel;  
    Node* leftChild;     
    Node* rightChild;    

public:
    Node(Squirrel* squirrel);

    void set_left(Node* left);
    void set_right(Node* right);
    Node* left();
    Node* right();
    string get_squirrel_name();
    void traverse();
};

#endif
