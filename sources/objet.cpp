#include <iostream>
#include <vector>
#include "../headers/vector.hpp"
#include "../headers/object.hpp"

object::object() {
    content.push_back(vector());
}

object::object(std::vector<vector> _content) {
    content = _content;
}

std::vector<vector> object::getContent() {
    return content;
}

void object::setContent(std::vector<vector> _content) {
    content = _content;
}

void object::print() {
    for(int i = 0; i<content.size(); i+=1) {
        std::cout << "vector " << i << " :";
        content[i].printVect();
    }
}
