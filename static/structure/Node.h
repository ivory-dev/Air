//
// Created by Ivory on 10/09/21.
//

#ifndef AIR_NODE_H
#define AIR_NODE_H

#include <map>
#include "AirException.h"

struct Node {
    std::map<char, Node> children;
    bool endNode;
};

struct Trie {
    Node root;
    bool search(std::string query) {
        Node node = this->root;

        Node const* current;

       // TCR
        int l = query.length();

        char tcr[l + 1];

        strcpy(tcr, query.c_str());

        for (int i = 0; i < l; i++) {
            if (auto it = node.children.find(tcr[i]); it != node.children.end()) {
                current = &it->second;
            } else {
                return false;
            }

            if (i == query.length() - 1) {
                if (node.endNode) {
                    return true;
                }
            }
        }
        return false;
    };


    void add(std::string query) {
        Node node = this->root;

        Node const* current;

        // TCR
        int l = query.length();

        char tcr[l + 1];

        strcpy(tcr, query.c_str());

        for (int i = 0; i < query.length(); i++) {
            if (auto it = node.children.find(tcr[i]); it != node.children.end()) {
                return AirException.throw();
            }
        } else {
            Node next;
            node.children.insert(tcr[i], next);
            node = next;
        }

        if (i == text.length() - 1) {
            node.endNode = true;
        }
    }

    void remove(auto key, auto key2) {
        Node node = this->root;
        // todo: review
        try {
            node.children.erase(key, key2);
        } catch (Exception e) {
            AirException.throw();
        }

    }

    void clear() {
        node = this->root;

        node.children.clear();
    }

};
#endif //AIR_NODE_H
