//
// Created by Cas Thistoll on 11/09/21.
//

#include <iostream>
#include <map>

#ifndef AIR_STREAM_H
#define AIR_STREAM_H

template<typename T> class Stream {
    // Variable declarations
    std::vector<T> contents;

    // Add remove, and data flow
    bool add(T param); // adds an item - done
    bool remove(int index); // removes an item of index `index`

    // Match and data work
    bool allMatch(T predicate); // checks whether all items match predicate - done
    bool anyMatch(T predicate); // checks whether any items match predicate - done
    std::vector<T> getContents(); // gets content - done

    // Convert and compatibility
    Stream<T> empty(); // returns empty sequential stream - done
    Stream<T> convertToType(std::string type); // converts stream to specific type
    Stream<T> concat(Stream<T> concatfrom, Stream<T> concatto);

    // Meta
    int count(); // count - done

};

template<typename T>
bool Stream<T>::anyMatch(T predicate) {
    for (int i = 0; i < contents.length; i++) {
        if (contents[i] == predicate) {
            break;
            return true;
        }
    }
    return false;
}

template<typename T>
bool Stream<T>::allMatch(T predicate) {
    int count = 0;
    for (int i = 0; i < contents.size(); i++) {
        if (contents[i] == predicate) {
            count++;
            if (count == contents.length) {
                return true;
            }
        }
    }
    return false;
}

template<typename T>
std::vector<T> Stream<T>::getContents() {
    return contents;
}

template<typename T>
bool Stream<T>::add(T param) {
    i = contents.length + 1
    contents[i] = param;

}

template<typename T>
int Stream<T>::count() {
    return contents.length;
}

template<typename T>
bool Stream<T>::remove(int index) {
    return false;
}

template<typename T>
Stream<T> Stream<T>::empty() {
    return Stream<T>();
}

template<typename T>
Stream<T> Stream<T>::concat(Stream<T> concatfrom, Stream<T> concatto) {
    ret = Stream<T>
    for (const auto& item : contents) {
        ret.get
    }
}


template<typename T>
Stream<T> Stream<T>::convertToType(T type) {
    return Stream<type>();
}



#endif //AIR_STREAM_H
