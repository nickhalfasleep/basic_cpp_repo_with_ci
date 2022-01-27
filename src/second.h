#pragma once
#include <string>
#include <iostream>
class second {
public:
    second() {
        std::cout << "Constructor\n";
    }

    ~second() {
        std::cout << "Destructor!\n";
    }
    auto second_sight() -> void;
    auto make_it_fourty_two() -> int;

private:
    std::string m_name;
};