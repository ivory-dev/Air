//
// Created by Cas Thistoll on 10/09/21.
//

#ifndef AIR_NODE_H
#define AIR_NODE_H

#include <map>

struct Node {
    std::map<char, Node> children;
    bool endNode;
};
#endif //AIR_NODE_H
