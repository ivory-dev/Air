//
// Created by Cas Thistoll on 10/09/21.
//

#include "Node.h"

#ifndef AIR_TRIE_H
#define AIR_TRIE_H

struct Trie {
    Node root;
    void add(std::string text);

    bool search(const std::string &text);
};

#endif //AIR_TRIE_H
