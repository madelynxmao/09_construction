#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "game_level.h"

int main(){
    struct game_level *madelyn;

    char *name = "Madelyn";
    int current_level;

    //random level
    srand(time(NULL));
    current_level = rand();

    madelyn = new_user(name,current_level);
    print_game_level(madelyn);

    printf("increasing level by 1\n");
    increase_game_level(madelyn);

    print_game_level(madelyn);

    free_game_level(madelyn);
    return 0;
}

