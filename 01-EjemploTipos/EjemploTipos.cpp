#include <iostream>
#include <cassert>

int main() {
    std::string word1 = "Hola";
    std::string word2 = "Hola";

    assert(true);
    assert('a' == 'a');
    assert(10 > 5);
    assert(-2 * 8 < -4);
    assert(1.5 != 1.0);
    assert(word1 == word2);

}
