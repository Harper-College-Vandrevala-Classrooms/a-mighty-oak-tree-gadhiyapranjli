#include "Node.hpp"
#include <iostream>

Node::Node(Squirrel* squirrel) {
    this->squirrel = squirrel;
    this->leftChild = nullptr;
    this->rightChild = nullptr;
}

void Node::set_left(Node* left) {
    this->leftChild = left;
}

void Node::set_right(Node* right) {
    this->rightChild = right;
}

Node* Node::left() {
    return this->leftChild;
}

Node* Node::right() {
    return this->rightChild;
}

string Node::get_squirrel_name() {
    return this->squirrel->get_name();
}

void Node::traverse() {
    std::cout << this->get_squirrel_name() << std::endl;

    if (this->leftChild != nullptr) {
        this->leftChild->traverse();
    }
    if (this->rightChild != nullptr) {
        this->rightChild->traverse();
    }
}
