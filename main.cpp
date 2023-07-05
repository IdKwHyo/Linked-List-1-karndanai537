#include <iostream>
#include "ll.h"

using namespace std;

int main(int argc, char** argv) {
    LL l;

    for (int i = 1; i < argc; i += 2) {
        int id = atoi(argv[i]);
        string name = argv[i + 1];
        l.insert_node(id, name);
    }

    l.print_all();

    return 0;
}

