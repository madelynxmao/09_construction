#ifndef GAME_LEVEL
#define GAME_LEVEL

struct game_level {
    char user[256];
    int level; 
};

struct game_level *new_user(char *user, int level);

void modify_game_level(struct game_level *p);
void print_game_level(struct game_level *p);

#endif