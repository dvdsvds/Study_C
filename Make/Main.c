#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int resultPer;

struct Item {
    char name[20]; 
    int enhance;
    int att;
    int SuccPer;
};

struct Item DefaultSword = {
    "DefaultSword",
    0,
    3,
    8
};

int main(void) {

    srand(time(NULL));

    
}
