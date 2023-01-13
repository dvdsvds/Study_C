#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Item {
    char name[12]; //normalItem = 10
    int enhance;
};

int main(void) {
    struct Item normalSword = {
        "NormalSword",
        0
    };

    srand(time(NULL));

    printf("%s\n", normalSword.name);

    
}

