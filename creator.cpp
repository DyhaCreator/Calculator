#include <iostream>
#include <fstream>

int main() {
    std::ofstream out("my_calculator.py");
    out << "a = input().split()" << std::endl;
    int first_min = -127;
    int first_max = 127;
    int second_min = -127;
    int second_max = 127;
    for (int i = first_min; i <= first_max; i++) {
        for (int j = second_min; j <= second_max; j++) {
            out << "if int(a[0]) == " << i << " and a[1] == '+' and int(a[2]) == " << j << ":" << std::endl;
            out << "    print(" << i + j << ")" << std::endl;
        }
    }
    return 0;
}