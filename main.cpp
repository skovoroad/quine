#include <iostream>
#include <string_view>

size_t split_offset = 90;

std::string text = R"(#include <iostream>
#include <string_view>

size_t split_offset = 90;

std::string text = "";

int main(int argc, char ** argv) {
    std::cout << text.substr(0, split_offset) 
            << "R\"(" 
            << text.substr(0, split_offset) 
            << text.substr(split_offset)
            << ")\""
            << text.substr(split_offset+2)
            ;
};)";

int main(int argc, char ** argv) {
    std::cout << text.substr(0, split_offset) 
            << "R\"(" 
            << text.substr(0, split_offset) 
            << text.substr(split_offset)
            << ")\""
            << text.substr(split_offset+2)
            ;
};