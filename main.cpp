#include <iostream>
#include "Squirrel.hpp"
#include "Node.hpp"

int main() {
    Squirrel cheeks("Cheeks");
    Squirrel squeaks("Squeaks");
    Squirrel fluffybutt("Mr. Fluffy Butt");

    Node node_one(&cheeks);
    Node node_two(&squeaks);
    Node node_three(&fluffybutt);

    node_one.set_left(&node_two);
    node_one.set_right(&node_three);
    node_one.traverse();  

    Node* retrieved_node_one = node_one.left();  
    Node* retrieved_node_two = node_one.right(); 

    std::cout << "\nRetrieved left child: " << retrieved_node_one->get_squirrel_name() << std::endl;
    std::cout << "Retrieved right child: " << retrieved_node_two->get_squirrel_name() << std::endl;

    return 0;
}
