#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("my_calculator.cpp");
    out << "#include <iostream>" << endl;
    out << "using namespace std;" << endl;
    out << "int main() {" << endl;
    out << "    int a, b;" << endl;
    out << "    char c;" << endl;
    out << "    cin >> a >> c >> b;" << endl;
    int min = -64;
    int max = 64;
    for (int i = min; i < max; i++) {
        for (int j = min; j < max; j++) {
            out << "    if (a == " << i << " && c == '+' && b == " << j << ") {" << endl;
            out << "        cout << " << i + j << " << endl;" << endl;
            out << "    }" << endl;
        }
    }
    for (int i = min; i < max; i++) {
        for (int j = min; j < max; j++) {
            out << "    if (a == " << i << " && c == '-' && b == " << j << ") {" << endl;
            out << "        cout << " << i - j << " << endl;" << endl;
            out << "    }" << endl;
        }
    }
    for (int i = min; i < max; i++) {
        for (int j = min; j < max; j++) {
            out << "    if (a == " << i << " && c == '*' && b == " << j << ") {" << endl;
            out << "        cout << " << i * j << " << endl;" << endl;
            out << "    }" << endl;
        }
    }
    for (int i = min; i < max; i++) {
        for (int j = min; j < max; j++) {
            if (j != 0) {
                out << "    if (a == " << i << " && c == '/' && b == " << j << ") {" << endl;
                out << "        cout << " << (float)i / (float)j << " << endl;" << endl;
                out << "    }" << endl;
            }
        }
    }
    out << "}" << endl;
}