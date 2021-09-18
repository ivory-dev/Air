//
// Created by Ivory Dev on 18/09/21.
//

#ifndef AIR_STACK_H
#define AIR_STACK_H


struct Stack {
    std::vector<std::string> vector;

    void add(std::string query) {
        vector.add(query);
    };

    void pick() {
        vector.remove(vector.end());
    };

    void remove(std::string query) {
        if (vector.contains(query)) {
            vector.remove(query);
        } else {
            AirException.throw();
        }
    };

    bool exists(std::string query) {
        if (vector.contains(query)) {
            return true;
        } else {
            return false
        };
    };


};
#endif //AIR_STACK_H
