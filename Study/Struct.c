#include <stdio.h>

struct computer {
    char name[10];
    int monitor;
    int keyboard;
    int ram;
};

int main(void) {
    struct computer c1 = {
        "gram",
            30,
            1,
            16
    };

    printf("c1의 name : %s\n", c1.name);
    printf("c1의 monitor : %d\n", c1.monitor);
    printf("c1의 keyboard : %d\n", c1.keyboard);
    printf("c1의 ram : %d\n", c1.ram);
}

