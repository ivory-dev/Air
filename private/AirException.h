//
// Created by Cas Thistoll on 11/09/21.
//

#include <exception>
#include <iostream>
#include <string>

#ifndef AIR_AIREXCEPTION_H
#define AIR_AIREXCEPTION_H


struct AirException: virtual public std::exception {
    std::string throw();
}

std::string AirException::throw() {
    return "AirException: You used Air in the wrong way!"
}

#endif //AIR_AIREXCEPTION_H
