#ifndef object_hpp
#define object_hpp

#include <vector>
#include "vector.hpp"

class object {

private:
    std::vector<vector> content;

public:
    object();
    object(std::vector<vector> _content);
    std::vector<vector> getContent();
    void setContent(std::vector<vector> _content);
    void print();

};


#endif