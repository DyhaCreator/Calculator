#include <iostream>
#include <fstream>
#include <cmath>

int main() {
    std::ofstream out("my_calculator.py");
    out << "print('Hello and welcome to my calculator')" << std::endl;
    out << "a = input().split()" << std::endl;
    int min = -256;
    int max = 256;
    out << "a.append(" << min - 10 << ")" << std::endl;
    for (int i = min; i <= max; i++) {
        for (int j = min; j <= max; j++) {
            out << "if a[0] == '" << i << "' and a[1] == '+' and a[2] == '" << j << "':" << std::endl;
            out << "    print(" << i + j << ")" << std::endl;
        }
    }
    for (int i = min; i <= max; i++) {
        for (int j = min; j <= max; j++) {
            out << "if a[0] == '" << i << "' and a[1] == '-' and a[2] == '" << j << "':" << std::endl;
            out << "    print(" << i - j << ")" << std::endl;
        }
    }
    for (int i = min; i <= max; i++) {
        for (int j = min; j <= max; j++) {
            out << "if a[0] == '" << i << "' and a[1] == '*' and a[2] == '" << j << "':" << std::endl;
            out << "    print(" << i * j << ")" << std::endl;
        }
    }
    for (int i = min; i <= max; i++) {
        for (int j = min; j <= max; j++) {
            out << "if a[0] == '" << i << "' and a[1] == '/' and a[2] == '" << j << "':" << std::endl;
            out << "    print('" << (float)i / (float)j << "')" << std::endl;
        }
    }
    for (int i = 0; i < max; i++) {
        out << "if a[0] == 'sqrt(" << i << ")':" << std::endl;
        out << "    print(" << std::sqrt(i) << ")" << std::endl; 
    }
    return 0;
}