#include <iostream>
#include <fstream>

int main() {
    std::ofstream out("my_calculator.py");
    out << "print('Hello and welcome to my calculator')" << std::endl;
    out << "a = input().split()" << std::endl;
    int first_min = -127;
    int first_max = 127;
    int second_min = -127;
    int second_max = 127;
    for (int i = first_min; i <= first_max; i++) {
        for (int j = second_min; j <= second_max; j++) {
            out << "if a[0] == '" << i << "' and a[1] == '+' and a[2] == '" << j << "':" << std::endl;
            out << "    print(" << i + j << ")" << std::endl;
        }
    }
    for (int i = first_min; i <= first_max; i++) {
        for (int j = second_min; j <= second_max; j++) {
            out << "if a[0] == '" << i << "' and a[1] == '-' and a[2] == '" << j << "':" << std::endl;
            out << "    print(" << i - j << ")" << std::endl;
        }
    }
    for (int i = first_min; i <= first_max; i++) {
        for (int j = second_min; j <= second_max; j++) {
            out << "if a[0] == '" << i << "' and a[1] == '*' and a[2] == '" << j << "':" << std::endl;
            out << "    print(" << i * j << ")" << std::endl;
        }
    }
    for (int i = first_min; i <= first_max; i++) {
        for (int j = second_min; j <= second_max; j++) {
            out << "if a[0] == '" << i << "' and a[1] == '/' and a[2] == '" << j << "':" << std::endl;
            out << "    print('" << (float)i / (float)j << "')" << std::endl;
        }
    }
    return 0;
}