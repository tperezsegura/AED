#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt");
    file << "Hello, World!";
    file.close();

    return 0;
}
