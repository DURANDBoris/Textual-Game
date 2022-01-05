#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "structure.h"
#include "fonction.h"

struct room SelectRoom      (int Level)
{
    switch (Level)
    {
        case 1: return  CreateRoomOne   ("Room1", 1);       break;
        case 2: return  CreateRoomTwo   ("Room2", 2);       break;
        case 3: return  CreateRoomThree ("Room3", 3);       break;
        case 4: return  CreateRoomFour  ("Room4", 4);       break;
        case 5: return  CreateRoomFive  ("Room5", 5);       break;
        case 6:                                     ;       break;
        default:        printf          ("la room !!!!");   break;
    }
}

struct room CreateRoomOne   (char *Name, int Level)
{
    struct room Room;

        strcpy(Room.Name, Name);
        Room.Level      = Level;
        Room.Soins      = 10 ;
        Room.Opponent   = CreateMonsterOne("Meute de lions");
        Room.DescriptionRoomIn = DescriptionRoomOneIn;
        Room.DescriptionRoomOut = DescriptionRoomOneOut;

    return Room;
}
struct room CreateRoomTwo   (char *Name, int Level)
{
    struct room Room;

        strcpy(Room.Name, Name);
        Room.Level      = Level;
        Room.Soins      = 20 ;
        Room.Opponent   = CreateMonsterTwo("L hoplite");
        Room.DescriptionRoomIn = DescriptionRoomTwoIn;
        Room.DescriptionRoomOut = DescriptionRoomTwoOut;

    return Room;
}
struct room CreateRoomThree (char *Name, int Level)
{
    struct room Room;

    strcpy(Room.Name, Name);
    Room.Level      = Level;
    Room.Soins      = 10 ;
    Room.Opponent   = CreateMonsterThree("La wyvern");
    Room.DescriptionRoomIn = DescriptionRoomThreeIn;
    Room.DescriptionRoomOut = DescriptionRoomThreeOut;

    return Room;
}
struct room CreateRoomFour  (char *Name, int Level)
{
    struct room Room;

    strcpy(Room.Name, Name);
    Room.Level      = Level;
    Room.Soins      = 10 ;
    Room.Opponent   = CreateMonsterFour("Le mage drow");
    Room.DescriptionRoomIn = DescriptionRoomFourIn;
    Room.DescriptionRoomOut = DescriptionRoomFourOut;

    return Room;
}
struct room CreateRoomFive  (char *Name, int Level)
{
    struct room Room;

    strcpy(Room.Name, Name);
    Room.Level      = Level;
    Room.Soins      = 10 ;
    Room.Opponent   = CreateMonsterFive("Le leviathan");
    Room.DescriptionRoomIn = DescriptionRoomFiveIn;
    Room.DescriptionRoomOut = DescriptionRoomFiveOut;

    return Room;
}