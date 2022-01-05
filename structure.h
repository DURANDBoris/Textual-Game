#ifndef _STRUCTURE_
#define _STRUCTURE_

struct game;
struct room;
struct action;
struct statistics;
struct character;


struct name
{
    char Name[20];
    char Classe[20];
};
struct statistics
{
    int LP;
    int LPmax;
    int AP;
    int Shield;
    int Attack;
    int Speed;
    int Heal;
};
struct action
{
    char Name[20];
    void (*Description)(struct game *MyGame);
    void (*Execution)(struct game *MyGame);
};
struct character
{
    struct name Names;
    struct statistics Stats;
    struct action Actions[2];
    void (*SelectAction)(struct game*);
};

struct room
{
    char Name[20];
    int Level;
    int Soins;

    struct character Opponent;

    void (*DescriptionRoomIn)(struct game*);
    void (*DescriptionRoomOut)(struct game*);
};

struct game
{
    struct character Player;
    struct room CurrentRoom;
};

#endif