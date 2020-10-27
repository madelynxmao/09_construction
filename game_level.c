#include <stdio.h>
#include "game_level.h"
#include <stdlib.h>
#include <string.h>

struct game_level *new_user(char *user, int level){
    struct game_level *nu;
    nu = malloc( sizeof(struct game_level));

    nu->level = level;
    strncpy(nu->user, user, sizeof(nu->user)-1);

    return nu;
}

void modify_game_level(struct game_level *p){
    p->level++;
}

void free_game_level(struct game_level *p){
    free(p);
}
void print_game_level(struct game_level *p){
    printf("Username: %s\n", p->user);
    printf("Username: %d\n", p->level);
}

