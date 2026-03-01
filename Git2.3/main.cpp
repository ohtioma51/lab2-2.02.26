#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    ofstream f1("file1.txt");
    ofstream f2("file2.txt");
    ofstream f3("file3.txt");

    for (int i = 0; i < 10; i++) {
        f1 << rand() % 9001 + 1000<< " ";
    }
    for (int i = 0; i < 10; i++) {
        f2 << rand() % 21 - 10<< " ";
    }
    for (int i = 0; i < 10; i++) {
        f3 << rand() % 101 + 100<< " ";
    }
    f1.close();
    f2.close();
    f3.close();
    return 0;
}
